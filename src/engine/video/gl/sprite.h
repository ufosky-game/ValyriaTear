////////////////////////////////////////////////////////////////////////////////
//            Copyright (C) 2012-2014 by Bertram (Valyria Tear)
//                         All Rights Reserved
//
// This code is licensed under the GNU GPL version 2. It is free software
// and you may modify it and/or redistribute it under the terms of this license.
// See http://www.gnu.org/copyleft/gpl.html for details.
////////////////////////////////////////////////////////////////////////////////

/** ****************************************************************************
*** \file    sprite.h
*** \author  Authenticate, James Lammlein
*** \brief   Header file for buffers for a sprite.
*** ***************************************************************************/

#ifndef __SPRITE_HEADER__
#define __SPRITE_HEADER__

namespace vt_video
{
namespace gl
{

//! \brief A class for a sprite.
class Sprite
{
public:
    Sprite();
    ~Sprite();

    //! \brief Draws a sprite.
    void Draw();

    //! \brief Draws a sprite.
    void Draw(const std::vector<float>& vertex_positions,
              const std::vector<float>& vertex_texture_coordinates,
              const std::vector<float>& vertex_colors);

    //! \brief Draws all sprites in a particle system.
    void Draw(float* vertex_positions,
              float* vertex_texture_coordinates,
              float* vertex_colors,
              unsigned number_of_vertices);

    unsigned _number_of_indices;

    GLuint _vao;
    GLuint _vertex_position_buffer;
    GLuint _vertex_texture_coordinate_buffer;
    GLuint _vertex_color_buffer;
    GLuint _index_buffer;

private:
    Sprite(const Sprite&) {}
    Sprite& operator=(const Sprite&) { return *this; }
};

} // namespace gl

} // namespace vt_video

#endif

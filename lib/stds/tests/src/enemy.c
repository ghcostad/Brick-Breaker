#include "../include/enemy.h"

entity_t *
add_enemy( float x, float y ) {
  entity_t *e;

  e = malloc( sizeof( entity_t ) );
  memset( e, 0, sizeof( entity_t ) );

  e->x          = x;
  e->y          = y;
  e->texture[0] = load_texture( "tests/res/img/enemy.png" );
  SDL_QueryTexture( e->texture[0], NULL, NULL, &e->w, &e->h );

  return e;
}

void
enemy_update( entity_t *e ) {}

void
enemy_draw( entity_t *e ) {
  blit_texture( e->texture[0], e->x, e->y, false );
}
#ifndef RECOGNIZE_FROM_MIC_H
# define RECOGNIZE_FROM_MIC_H

# include <unistd.h>
# include <stdio.h>
# include <sphinxbase/ad.h>
# include <sphinxbase/err.h>
# include "pocketsphinx.h"

char	*recognize_from_mic(cmd_ln_t *config, ps_decoder_t *ps);

#endif

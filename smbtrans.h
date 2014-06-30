/*
 * smbus transction op with pass-thru capabilities
 *
 * This smbus function is capable of doing a smbus command transaction
 * (read or write), and can be flagged to not issue the 'cmd' and/or
 * issue or expect a count field as well as flagged for chaining (no STOP),
 * which gives it an i2c pass-through capability.
 *
 * NOSTOP- Caller chaining transactions, do not issue STOP
 * NOCMD-  Do not transmit the command field
 * NOCNT-  Do not transmit (wr) or expect (rd) the count field
 */
#ifndef __SMBTRANS_H
#define __SMBTRANS_H

#define SMB_TRANS_NOSTOP        0x0001  /* do not send STOP at end */
#define SMB_TRANS_NOCMD         0x0002  /* ignore cmd field (do not tx) */
#define SMB_TRANS_NOCNT         0x0004  /* do not tx or rx count field */
#define SMB_TRANS_7BIT          0x0008  /* change address mode to 7-bit */
#define SMB_TRANS_10BIT         0x0010  /* change address mode to 10-bit */

#endif

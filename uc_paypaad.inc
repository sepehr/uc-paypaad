<?php
// $Id$

/**
 * @file
 * Contains Ubercart Pasargad Bank "Paypaad" Payment callbacks & internal helpers.
 */

/**
 * Menu callback for cart/paypaad/% path, handling gateway response.
 *
 * @param $status
 *   Paypaad gateway response status.
 *   - success
 *   - failure
 */
function uc_paypaad_response($status) {
  // Handle a successfull Paypaad payment.
  if ($status == 'success' && $response = paypaad_response()) {
    // TODO: Enquiry payment.
    // TODO: Log payment through Paypaad Payment API.
    // TODO: Complete the order.
  }
  // Handle a failed payment.
  else {

  }
}


farcall: macro
    push af
    ld a, LOW(\1)
    ld [w_farcall_target + 0], a
    ld a, HIGH(\1)
    ld [w_farcall_target + 1], a
    ld a, BANK(\1)
    ld [w_bank_temp], a
    pop af
    call _farcall
endm

farjp: macro
    push af
    ld a, LOW(\1)
    ld [w_farcall_target + 0], a
    ld a, HIGH(\1)
    ld [w_farcall_target + 1], a
    ld a, BANK(\1)
    ld [w_bank_temp], a
    pop af
    jp _farjp
endm
<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * InitialResponse
 */
class InitialResponse implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'content',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'content' => 1,
  ];

  const type TConstructorShape = shape(
    ?'content' => ?string,
  );

  const int STRUCTURAL_ID = 921480878768501242;
  /**
   * Original thrift field:-
   * 1: string content
   */
  public string $content;

  public function __construct(?string $content = null  )[] {
    $this->content = $content ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'content'),
    );
  }

  public function getName(): string {
    return 'InitialResponse';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * FinalResponse
 */
class FinalResponse implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'content',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'content' => 1,
  ];

  const type TConstructorShape = shape(
    ?'content' => ?string,
  );

  const int STRUCTURAL_ID = 921480878768501242;
  /**
   * Original thrift field:-
   * 1: string content
   */
  public string $content;

  public function __construct(?string $content = null  )[] {
    $this->content = $content ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'content'),
    );
  }

  public function getName(): string {
    return 'FinalResponse';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * SinkPayload
 */
class SinkPayload implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'content',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'content' => 1,
  ];

  const type TConstructorShape = shape(
    ?'content' => ?string,
  );

  const int STRUCTURAL_ID = 921480878768501242;
  /**
   * Original thrift field:-
   * 1: string content
   */
  public string $content;

  public function __construct(?string $content = null  )[] {
    $this->content = $content ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'content'),
    );
  }

  public function getName(): string {
    return 'SinkPayload';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * CompatibleWithKeywordSink
 */
class CompatibleWithKeywordSink implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'sink',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'sink' => 1,
  ];

  const type TConstructorShape = shape(
    ?'sink' => ?string,
  );

  const int STRUCTURAL_ID = 3905273354198769243;
  /**
   * Original thrift field:-
   * 1: string sink
   */
  public string $sink;

  public function __construct(?string $sink = null  )[] {
    $this->sink = $sink ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'sink'),
    );
  }

  public function getName(): string {
    return 'CompatibleWithKeywordSink';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift exception:-
 * InitialException
 */
class InitialException extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reason',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reason' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reason' => ?string,
  );

  const int STRUCTURAL_ID = 3707764047816594739;
  /**
   * Original thrift field:-
   * 1: string reason
   */
  public string $reason;

  public function __construct(?string $reason = null  )[] {
    parent::__construct();
    $this->reason = $reason ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reason'),
    );
  }

  public function getName(): string {
    return 'InitialException';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift exception:-
 * SinkException1
 */
class SinkException1 extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reason',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reason' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reason' => ?string,
  );

  const int STRUCTURAL_ID = 3707764047816594739;
  /**
   * Original thrift field:-
   * 1: string reason
   */
  public string $reason;

  public function __construct(?string $reason = null  )[] {
    parent::__construct();
    $this->reason = $reason ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reason'),
    );
  }

  public function getName(): string {
    return 'SinkException1';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift exception:-
 * SinkException2
 */
class SinkException2 extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reason',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reason' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reason' => ?int,
  );

  const int STRUCTURAL_ID = 989028245140918602;
  /**
   * Original thrift field:-
   * 1: i64 reason
   */
  public int $reason;

  public function __construct(?int $reason = null  )[] {
    parent::__construct();
    $this->reason = $reason ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reason'),
    );
  }

  public function getName(): string {
    return 'SinkException2';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}


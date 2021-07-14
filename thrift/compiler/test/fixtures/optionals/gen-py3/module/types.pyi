#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class Animal(thrift.py3.types.Enum):
    DOG: Animal = ...
    CAT: Animal = ...
    TARANTULA: Animal = ...


class Color(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        red: bool
        green: bool
        blue: bool
        alpha: bool
        pass

    red: Final[float] = ...

    green: Final[float] = ...

    blue: Final[float] = ...

    alpha: Final[float] = ...

    def __init__(
        self, *,
        red: _typing.Optional[float]=None,
        green: _typing.Optional[float]=None,
        blue: _typing.Optional[float]=None,
        alpha: _typing.Optional[float]=None
    ) -> None: ...

    def __call__(
        self, *,
        red: _typing.Union[float, __NotSet, None]=NOTSET,
        green: _typing.Union[float, __NotSet, None]=NOTSET,
        blue: _typing.Union[float, __NotSet, None]=NOTSET,
        alpha: _typing.Union[float, __NotSet, None]=NOTSET
    ) -> Color: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Color'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __lt__(self, other: 'Color') -> bool: ...
    def __gt__(self, other: 'Color') -> bool: ...
    def __le__(self, other: 'Color') -> bool: ...
    def __ge__(self, other: 'Color') -> bool: ...


class Vehicle(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        color: bool
        licensePlate: bool
        description: bool
        name: bool
        hasAC: bool
        pass

    color: Final['Color'] = ...

    licensePlate: Final[_typing.Optional[str]] = ...

    description: Final[_typing.Optional[str]] = ...

    name: Final[_typing.Optional[str]] = ...

    hasAC: Final[bool] = ...

    def __init__(
        self, *,
        color: _typing.Optional['Color']=None,
        licensePlate: _typing.Optional[str]=None,
        description: _typing.Optional[str]=None,
        name: _typing.Optional[str]=None,
        hasAC: _typing.Optional[bool]=None
    ) -> None: ...

    def __call__(
        self, *,
        color: _typing.Union['Color', __NotSet, None]=NOTSET,
        licensePlate: _typing.Union[str, __NotSet, None]=NOTSET,
        description: _typing.Union[str, __NotSet, None]=NOTSET,
        name: _typing.Union[str, __NotSet, None]=NOTSET,
        hasAC: _typing.Union[bool, __NotSet, None]=NOTSET
    ) -> Vehicle: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Vehicle'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __lt__(self, other: 'Vehicle') -> bool: ...
    def __gt__(self, other: 'Vehicle') -> bool: ...
    def __le__(self, other: 'Vehicle') -> bool: ...
    def __ge__(self, other: 'Vehicle') -> bool: ...


class Person(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        id: bool
        name: bool
        age: bool
        address: bool
        favoriteColor: bool
        friends: bool
        bestFriend: bool
        petNames: bool
        afraidOfAnimal: bool
        vehicles: bool
        pass

    id: Final[int] = ...

    name: Final[str] = ...

    age: Final[_typing.Optional[int]] = ...

    address: Final[_typing.Optional[str]] = ...

    favoriteColor: Final[_typing.Optional['Color']] = ...

    friends: Final[_typing.Optional[_typing.AbstractSet[int]]] = ...

    bestFriend: Final[_typing.Optional[int]] = ...

    petNames: Final[_typing.Optional[_typing.Mapping[Animal, str]]] = ...

    afraidOfAnimal: Final[_typing.Optional[Animal]] = ...

    vehicles: Final[_typing.Optional[_typing.Sequence['Vehicle']]] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=None,
        name: _typing.Optional[str]=None,
        age: _typing.Optional[int]=None,
        address: _typing.Optional[str]=None,
        favoriteColor: _typing.Optional['Color']=None,
        friends: _typing.Optional[_typing.AbstractSet[int]]=None,
        bestFriend: _typing.Optional[int]=None,
        petNames: _typing.Optional[_typing.Mapping[Animal, str]]=None,
        afraidOfAnimal: _typing.Optional[Animal]=None,
        vehicles: _typing.Optional[_typing.Sequence['Vehicle']]=None
    ) -> None: ...

    def __call__(
        self, *,
        id: _typing.Union[int, __NotSet, None]=NOTSET,
        name: _typing.Union[str, __NotSet, None]=NOTSET,
        age: _typing.Union[int, __NotSet, None]=NOTSET,
        address: _typing.Union[str, __NotSet, None]=NOTSET,
        favoriteColor: _typing.Union['Color', __NotSet, None]=NOTSET,
        friends: _typing.Union[_typing.AbstractSet[int], __NotSet, None]=NOTSET,
        bestFriend: _typing.Union[int, __NotSet, None]=NOTSET,
        petNames: _typing.Union[_typing.Mapping[Animal, str], __NotSet, None]=NOTSET,
        afraidOfAnimal: _typing.Union[Animal, __NotSet, None]=NOTSET,
        vehicles: _typing.Union[_typing.Sequence['Vehicle'], __NotSet, None]=NOTSET
    ) -> Person: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Person'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __lt__(self, other: 'Person') -> bool: ...
    def __gt__(self, other: 'Person') -> bool: ...
    def __le__(self, other: 'Person') -> bool: ...
    def __ge__(self, other: 'Person') -> bool: ...


class Set__i64(_typing.AbstractSet[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[int]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def intersection(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def difference(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def symmetric_difference(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def issubset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__Animal_string(_typing.Mapping[Animal, str], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[Animal, str]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[Animal, str]: ...
    def __getitem__(self, key: Animal) -> str: ...
    def __iter__(self) -> _typing.Iterator[Animal]: ...


_List__VehicleT = _typing.TypeVar('_List__VehicleT', bound=_typing.Sequence['Vehicle'])


class List__Vehicle(_typing.Sequence['Vehicle'], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence['Vehicle']]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence['Vehicle']: ...
    @_typing.overload
    def __getitem__(self, i: int) -> 'Vehicle': ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence['Vehicle']: ...
    def __add__(self, other: _typing.Sequence['Vehicle']) -> 'List__Vehicle': ...
    def __radd__(self, other: _List__VehicleT) -> _List__VehicleT: ...
    def __reversed__(self) -> _typing.Iterator['Vehicle']: ...
    def __iter__(self) -> _typing.Iterator['Vehicle']: ...


PersonID = int



#include "huaweicloud/codeartsrepo/v4/model/ConflictSectionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ConflictSectionDto::ConflictSectionDto()
{
    conflict_ = false;
    conflictIsSet_ = false;
    linesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ConflictSectionDto::~ConflictSectionDto() = default;

void ConflictSectionDto::validate()
{
}

web::json::value ConflictSectionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conflictIsSet_) {
        val[utility::conversions::to_string_t("conflict")] = ModelBase::toJson(conflict_);
    }
    if(linesIsSet_) {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(lines_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ConflictSectionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conflict"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            std::vector<ConflictSectionLineDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


bool ConflictSectionDto::isConflict() const
{
    return conflict_;
}

void ConflictSectionDto::setConflict(bool value)
{
    conflict_ = value;
    conflictIsSet_ = true;
}

bool ConflictSectionDto::conflictIsSet() const
{
    return conflictIsSet_;
}

void ConflictSectionDto::unsetconflict()
{
    conflictIsSet_ = false;
}

std::vector<ConflictSectionLineDto>& ConflictSectionDto::getLines()
{
    return lines_;
}

void ConflictSectionDto::setLines(const std::vector<ConflictSectionLineDto>& value)
{
    lines_ = value;
    linesIsSet_ = true;
}

bool ConflictSectionDto::linesIsSet() const
{
    return linesIsSet_;
}

void ConflictSectionDto::unsetlines()
{
    linesIsSet_ = false;
}

std::string ConflictSectionDto::getId() const
{
    return id_;
}

void ConflictSectionDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConflictSectionDto::idIsSet() const
{
    return idIsSet_;
}

void ConflictSectionDto::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



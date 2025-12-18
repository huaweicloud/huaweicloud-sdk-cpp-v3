

#include "huaweicloud/meeting/v1/model/IdMarkDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




IdMarkDTO::IdMarkDTO()
{
    id_ = "";
    idIsSet_ = false;
    mark_ = "";
    markIsSet_ = false;
}

IdMarkDTO::~IdMarkDTO() = default;

void IdMarkDTO::validate()
{
}

web::json::value IdMarkDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(markIsSet_) {
        val[utility::conversions::to_string_t("mark")] = ModelBase::toJson(mark_);
    }

    return val;
}
bool IdMarkDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMark(refVal);
        }
    }
    return ok;
}


std::string IdMarkDTO::getId() const
{
    return id_;
}

void IdMarkDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IdMarkDTO::idIsSet() const
{
    return idIsSet_;
}

void IdMarkDTO::unsetid()
{
    idIsSet_ = false;
}

std::string IdMarkDTO::getMark() const
{
    return mark_;
}

void IdMarkDTO::setMark(const std::string& value)
{
    mark_ = value;
    markIsSet_ = true;
}

bool IdMarkDTO::markIsSet() const
{
    return markIsSet_;
}

void IdMarkDTO::unsetmark()
{
    markIsSet_ = false;
}

}
}
}
}
}



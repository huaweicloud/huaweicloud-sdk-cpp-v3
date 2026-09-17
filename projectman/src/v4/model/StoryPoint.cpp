

#include "huaweicloud/projectman/v4/model/StoryPoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StoryPoint::StoryPoint()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

StoryPoint::~StoryPoint() = default;

void StoryPoint::validate()
{
}

web::json::value StoryPoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool StoryPoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


int32_t StoryPoint::getId() const
{
    return id_;
}

void StoryPoint::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StoryPoint::idIsSet() const
{
    return idIsSet_;
}

void StoryPoint::unsetid()
{
    idIsSet_ = false;
}

std::string StoryPoint::getName() const
{
    return name_;
}

void StoryPoint::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StoryPoint::nameIsSet() const
{
    return nameIsSet_;
}

void StoryPoint::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



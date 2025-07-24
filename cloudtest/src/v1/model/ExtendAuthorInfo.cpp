

#include "huaweicloud/cloudtest/v1/model/ExtendAuthorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExtendAuthorInfo::ExtendAuthorInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

ExtendAuthorInfo::~ExtendAuthorInfo() = default;

void ExtendAuthorInfo::validate()
{
}

web::json::value ExtendAuthorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool ExtendAuthorInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string ExtendAuthorInfo::getId() const
{
    return id_;
}

void ExtendAuthorInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExtendAuthorInfo::idIsSet() const
{
    return idIsSet_;
}

void ExtendAuthorInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ExtendAuthorInfo::getName() const
{
    return name_;
}

void ExtendAuthorInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtendAuthorInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ExtendAuthorInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ExtendAuthorInfo::getTime() const
{
    return time_;
}

void ExtendAuthorInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ExtendAuthorInfo::timeIsSet() const
{
    return timeIsSet_;
}

void ExtendAuthorInfo::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dds/v3/model/JobInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




JobInstanceInfo::JobInstanceInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

JobInstanceInfo::~JobInstanceInfo() = default;

void JobInstanceInfo::validate()
{
}

web::json::value JobInstanceInfo::toJson() const
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
bool JobInstanceInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string JobInstanceInfo::getId() const
{
    return id_;
}

void JobInstanceInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobInstanceInfo::idIsSet() const
{
    return idIsSet_;
}

void JobInstanceInfo::unsetid()
{
    idIsSet_ = false;
}

std::string JobInstanceInfo::getName() const
{
    return name_;
}

void JobInstanceInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobInstanceInfo::nameIsSet() const
{
    return nameIsSet_;
}

void JobInstanceInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



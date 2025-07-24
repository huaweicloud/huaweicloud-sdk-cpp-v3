

#include "huaweicloud/cloudtest/v1/model/ServicesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ServicesInfo::ServicesInfo()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ServicesInfo::~ServicesInfo() = default;

void ServicesInfo::validate()
{
}

web::json::value ServicesInfo::toJson() const
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
bool ServicesInfo::fromJson(const web::json::value& val)
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


int32_t ServicesInfo::getId() const
{
    return id_;
}

void ServicesInfo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServicesInfo::idIsSet() const
{
    return idIsSet_;
}

void ServicesInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ServicesInfo::getName() const
{
    return name_;
}

void ServicesInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServicesInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ServicesInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



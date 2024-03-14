

#include "huaweicloud/drs/v5/model/FailedToBindEipChildInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




FailedToBindEipChildInfo::FailedToBindEipChildInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

FailedToBindEipChildInfo::~FailedToBindEipChildInfo() = default;

void FailedToBindEipChildInfo::validate()
{
}

web::json::value FailedToBindEipChildInfo::toJson() const
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
bool FailedToBindEipChildInfo::fromJson(const web::json::value& val)
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


std::string FailedToBindEipChildInfo::getId() const
{
    return id_;
}

void FailedToBindEipChildInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FailedToBindEipChildInfo::idIsSet() const
{
    return idIsSet_;
}

void FailedToBindEipChildInfo::unsetid()
{
    idIsSet_ = false;
}

std::string FailedToBindEipChildInfo::getName() const
{
    return name_;
}

void FailedToBindEipChildInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FailedToBindEipChildInfo::nameIsSet() const
{
    return nameIsSet_;
}

void FailedToBindEipChildInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



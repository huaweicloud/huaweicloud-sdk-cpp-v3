

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_ak.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_ak::SwitchTokenResponse_ak()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SwitchTokenResponse_ak::~SwitchTokenResponse_ak() = default;

void SwitchTokenResponse_ak::validate()
{
}

web::json::value SwitchTokenResponse_ak::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchTokenResponse_ak::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchTokenResponse_ak::getName() const
{
    return name_;
}

void SwitchTokenResponse_ak::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SwitchTokenResponse_ak::nameIsSet() const
{
    return nameIsSet_;
}

void SwitchTokenResponse_ak::unsetname()
{
    nameIsSet_ = false;
}

std::string SwitchTokenResponse_ak::getId() const
{
    return id_;
}

void SwitchTokenResponse_ak::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchTokenResponse_ak::idIsSet() const
{
    return idIsSet_;
}

void SwitchTokenResponse_ak::unsetid()
{
    idIsSet_ = false;
}

std::string SwitchTokenResponse_ak::getStatus() const
{
    return status_;
}

void SwitchTokenResponse_ak::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchTokenResponse_ak::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchTokenResponse_ak::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



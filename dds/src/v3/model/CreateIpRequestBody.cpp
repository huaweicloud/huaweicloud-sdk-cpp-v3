

#include "huaweicloud/dds/v3/model/CreateIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateIpRequestBody::CreateIpRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

CreateIpRequestBody::~CreateIpRequestBody() = default;

void CreateIpRequestBody::validate()
{
}

web::json::value CreateIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool CreateIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


std::string CreateIpRequestBody::getType() const
{
    return type_;
}

void CreateIpRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateIpRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateIpRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateIpRequestBody::getTargetId() const
{
    return targetId_;
}

void CreateIpRequestBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool CreateIpRequestBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void CreateIpRequestBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string CreateIpRequestBody::getPassword() const
{
    return password_;
}

void CreateIpRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateIpRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateIpRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}



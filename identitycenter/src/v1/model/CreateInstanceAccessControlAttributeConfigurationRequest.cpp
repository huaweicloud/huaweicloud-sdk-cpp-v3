

#include "huaweicloud/identitycenter/v1/model/CreateInstanceAccessControlAttributeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateInstanceAccessControlAttributeConfigurationRequest::CreateInstanceAccessControlAttributeConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInstanceAccessControlAttributeConfigurationRequest::~CreateInstanceAccessControlAttributeConfigurationRequest() = default;

void CreateInstanceAccessControlAttributeConfigurationRequest::validate()
{
}

web::json::value CreateInstanceAccessControlAttributeConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInstanceAccessControlAttributeConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInstanceAccessControlAttributeConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInstanceAccessControlAttributeConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateInstanceAccessControlAttributeConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateInstanceAccessControlAttributeConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateInstanceAccessControlAttributeConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateInstanceAccessControlAttributeConfigurationReqBody CreateInstanceAccessControlAttributeConfigurationRequest::getBody() const
{
    return body_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::setBody(const CreateInstanceAccessControlAttributeConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstanceAccessControlAttributeConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstanceAccessControlAttributeConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



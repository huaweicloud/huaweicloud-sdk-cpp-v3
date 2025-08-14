

#include "huaweicloud/identitycenter/v1/model/CreateAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateAliasRequest::CreateAliasRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAliasRequest::~CreateAliasRequest() = default;

void CreateAliasRequest::validate()
{
}

web::json::value CreateAliasRequest::toJson() const
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
bool CreateAliasRequest::fromJson(const web::json::value& val)
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
            CreateAliasReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAliasRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAliasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAliasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAliasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateAliasRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateAliasRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateAliasRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateAliasRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateAliasReqBody CreateAliasRequest::getBody() const
{
    return body_;
}

void CreateAliasRequest::setBody(const CreateAliasReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



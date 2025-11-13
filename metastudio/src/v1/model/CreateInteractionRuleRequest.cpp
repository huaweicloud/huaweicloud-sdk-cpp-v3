

#include "huaweicloud/metastudio/v1/model/CreateInteractionRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractionRuleRequest::CreateInteractionRuleRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInteractionRuleRequest::~CreateInteractionRuleRequest() = default;

void CreateInteractionRuleRequest::validate()
{
}

web::json::value CreateInteractionRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInteractionRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInteractionRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInteractionRuleRequest::getAuthorization() const
{
    return authorization_;
}

void CreateInteractionRuleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateInteractionRuleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateInteractionRuleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateInteractionRuleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateInteractionRuleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateInteractionRuleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateInteractionRuleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateInteractionRuleRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateInteractionRuleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateInteractionRuleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateInteractionRuleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateInteractionRuleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateInteractionRuleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateInteractionRuleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateInteractionRuleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CreateInteractionRuleRequest::getGroupId() const
{
    return groupId_;
}

void CreateInteractionRuleRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateInteractionRuleRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateInteractionRuleRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

CreateInteractionRuleReq CreateInteractionRuleRequest::getBody() const
{
    return body_;
}

void CreateInteractionRuleRequest::setBody(const CreateInteractionRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInteractionRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInteractionRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/CreateKnowledgeSkillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeSkillRequest::CreateKnowledgeSkillRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKnowledgeSkillRequest::~CreateKnowledgeSkillRequest() = default;

void CreateKnowledgeSkillRequest::validate()
{
}

web::json::value CreateKnowledgeSkillRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateKnowledgeSkillRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateKnowledgeSkillReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeSkillRequest::getAuthorization() const
{
    return authorization_;
}

void CreateKnowledgeSkillRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateKnowledgeSkillRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateKnowledgeSkillRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateKnowledgeSkillRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateKnowledgeSkillRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateKnowledgeSkillRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateKnowledgeSkillRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateKnowledgeSkillRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateKnowledgeSkillRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateKnowledgeSkillRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateKnowledgeSkillRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateKnowledgeSkillRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateKnowledgeSkillRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateKnowledgeSkillRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateKnowledgeSkillRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateKnowledgeSkillReq CreateKnowledgeSkillRequest::getBody() const
{
    return body_;
}

void CreateKnowledgeSkillRequest::setBody(const CreateKnowledgeSkillReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKnowledgeSkillRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKnowledgeSkillRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



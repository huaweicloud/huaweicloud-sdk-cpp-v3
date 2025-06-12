

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeSkillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeSkillRequest::ShowKnowledgeSkillRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    skillId_ = "";
    skillIdIsSet_ = false;
}

ShowKnowledgeSkillRequest::~ShowKnowledgeSkillRequest() = default;

void ShowKnowledgeSkillRequest::validate()
{
}

web::json::value ShowKnowledgeSkillRequest::toJson() const
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
    if(skillIdIsSet_) {
        val[utility::conversions::to_string_t("skill_id")] = ModelBase::toJson(skillId_);
    }

    return val;
}
bool ShowKnowledgeSkillRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("skill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkillId(refVal);
        }
    }
    return ok;
}


std::string ShowKnowledgeSkillRequest::getAuthorization() const
{
    return authorization_;
}

void ShowKnowledgeSkillRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowKnowledgeSkillRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowKnowledgeSkillRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowKnowledgeSkillRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowKnowledgeSkillRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowKnowledgeSkillRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowKnowledgeSkillRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowKnowledgeSkillRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowKnowledgeSkillRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowKnowledgeSkillRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowKnowledgeSkillRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowKnowledgeSkillRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowKnowledgeSkillRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowKnowledgeSkillRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowKnowledgeSkillRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowKnowledgeSkillRequest::getSkillId() const
{
    return skillId_;
}

void ShowKnowledgeSkillRequest::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool ShowKnowledgeSkillRequest::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void ShowKnowledgeSkillRequest::unsetskillId()
{
    skillIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ExportKnowledgeSkillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExportKnowledgeSkillRequest::ExportKnowledgeSkillRequest()
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
    exportType_ = 0;
    exportTypeIsSet_ = false;
}

ExportKnowledgeSkillRequest::~ExportKnowledgeSkillRequest() = default;

void ExportKnowledgeSkillRequest::validate()
{
}

web::json::value ExportKnowledgeSkillRequest::toJson() const
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
    if(exportTypeIsSet_) {
        val[utility::conversions::to_string_t("export_type")] = ModelBase::toJson(exportType_);
    }

    return val;
}
bool ExportKnowledgeSkillRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("export_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportType(refVal);
        }
    }
    return ok;
}


std::string ExportKnowledgeSkillRequest::getAuthorization() const
{
    return authorization_;
}

void ExportKnowledgeSkillRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ExportKnowledgeSkillRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ExportKnowledgeSkillRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ExportKnowledgeSkillRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ExportKnowledgeSkillRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ExportKnowledgeSkillRequest::getXProjectId() const
{
    return xProjectId_;
}

void ExportKnowledgeSkillRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ExportKnowledgeSkillRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ExportKnowledgeSkillRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ExportKnowledgeSkillRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ExportKnowledgeSkillRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ExportKnowledgeSkillRequest::getSkillId() const
{
    return skillId_;
}

void ExportKnowledgeSkillRequest::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void ExportKnowledgeSkillRequest::unsetskillId()
{
    skillIdIsSet_ = false;
}

int32_t ExportKnowledgeSkillRequest::getExportType() const
{
    return exportType_;
}

void ExportKnowledgeSkillRequest::setExportType(int32_t value)
{
    exportType_ = value;
    exportTypeIsSet_ = true;
}

bool ExportKnowledgeSkillRequest::exportTypeIsSet() const
{
    return exportTypeIsSet_;
}

void ExportKnowledgeSkillRequest::unsetexportType()
{
    exportTypeIsSet_ = false;
}

}
}
}
}
}



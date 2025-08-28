

#include "huaweicloud/metastudio/v1/model/RoleBusinessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RoleBusinessInfo::RoleBusinessInfo()
{
    roleBusinessId_ = "";
    roleBusinessIdIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    languageIsSet_ = false;
    prompt_ = "";
    promptIsSet_ = false;
    knowledgeLibraryListIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

RoleBusinessInfo::~RoleBusinessInfo() = default;

void RoleBusinessInfo::validate()
{
}

web::json::value RoleBusinessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleBusinessIdIsSet_) {
        val[utility::conversions::to_string_t("role_business_id")] = ModelBase::toJson(roleBusinessId_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(promptIsSet_) {
        val[utility::conversions::to_string_t("prompt")] = ModelBase::toJson(prompt_);
    }
    if(knowledgeLibraryListIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_list")] = ModelBase::toJson(knowledgeLibraryList_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool RoleBusinessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_business_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_business_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleBusinessId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prompt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prompt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrompt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleKnowledgeLibraryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string RoleBusinessInfo::getRoleBusinessId() const
{
    return roleBusinessId_;
}

void RoleBusinessInfo::setRoleBusinessId(const std::string& value)
{
    roleBusinessId_ = value;
    roleBusinessIdIsSet_ = true;
}

bool RoleBusinessInfo::roleBusinessIdIsSet() const
{
    return roleBusinessIdIsSet_;
}

void RoleBusinessInfo::unsetroleBusinessId()
{
    roleBusinessIdIsSet_ = false;
}

std::string RoleBusinessInfo::getRoleId() const
{
    return roleId_;
}

void RoleBusinessInfo::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool RoleBusinessInfo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void RoleBusinessInfo::unsetroleId()
{
    roleIdIsSet_ = false;
}

LanguageEnum RoleBusinessInfo::getLanguage() const
{
    return language_;
}

void RoleBusinessInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RoleBusinessInfo::languageIsSet() const
{
    return languageIsSet_;
}

void RoleBusinessInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RoleBusinessInfo::getPrompt() const
{
    return prompt_;
}

void RoleBusinessInfo::setPrompt(const std::string& value)
{
    prompt_ = value;
    promptIsSet_ = true;
}

bool RoleBusinessInfo::promptIsSet() const
{
    return promptIsSet_;
}

void RoleBusinessInfo::unsetprompt()
{
    promptIsSet_ = false;
}

std::vector<RoleKnowledgeLibraryInfo>& RoleBusinessInfo::getKnowledgeLibraryList()
{
    return knowledgeLibraryList_;
}

void RoleBusinessInfo::setKnowledgeLibraryList(const std::vector<RoleKnowledgeLibraryInfo>& value)
{
    knowledgeLibraryList_ = value;
    knowledgeLibraryListIsSet_ = true;
}

bool RoleBusinessInfo::knowledgeLibraryListIsSet() const
{
    return knowledgeLibraryListIsSet_;
}

void RoleBusinessInfo::unsetknowledgeLibraryList()
{
    knowledgeLibraryListIsSet_ = false;
}

std::string RoleBusinessInfo::getCreateTime() const
{
    return createTime_;
}

void RoleBusinessInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RoleBusinessInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RoleBusinessInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RoleBusinessInfo::getUpdateTime() const
{
    return updateTime_;
}

void RoleBusinessInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool RoleBusinessInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void RoleBusinessInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



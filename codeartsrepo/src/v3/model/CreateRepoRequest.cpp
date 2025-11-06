

#include "huaweicloud/codeartsrepo/v3/model/CreateRepoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateRepoRequest::CreateRepoRequest()
{
    importMembers_ = 0;
    importMembersIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    importUrl_ = "";
    importUrlIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    gitignoreId_ = "";
    gitignoreIdIsSet_ = false;
    licenseId_ = 0;
    licenseIdIsSet_ = false;
    enableReadme_ = 0;
    enableReadmeIsSet_ = false;
    caller_ = "";
    callerIsSet_ = false;
}

CreateRepoRequest::~CreateRepoRequest() = default;

void CreateRepoRequest::validate()
{
}

web::json::value CreateRepoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(importMembersIsSet_) {
        val[utility::conversions::to_string_t("import_members")] = ModelBase::toJson(importMembers_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibility_level")] = ModelBase::toJson(visibilityLevel_);
    }
    if(importUrlIsSet_) {
        val[utility::conversions::to_string_t("import_url")] = ModelBase::toJson(importUrl_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(gitignoreIdIsSet_) {
        val[utility::conversions::to_string_t("gitignore_id")] = ModelBase::toJson(gitignoreId_);
    }
    if(licenseIdIsSet_) {
        val[utility::conversions::to_string_t("license_id")] = ModelBase::toJson(licenseId_);
    }
    if(enableReadmeIsSet_) {
        val[utility::conversions::to_string_t("enable_readme")] = ModelBase::toJson(enableReadme_);
    }
    if(callerIsSet_) {
        val[utility::conversions::to_string_t("caller")] = ModelBase::toJson(caller_);
    }

    return val;
}
bool CreateRepoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("import_members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_members"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportMembers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibilityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gitignore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gitignore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitignoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("license_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("license_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicenseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_readme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_readme"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableReadme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("caller"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caller"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaller(refVal);
        }
    }
    return ok;
}


int32_t CreateRepoRequest::getImportMembers() const
{
    return importMembers_;
}

void CreateRepoRequest::setImportMembers(int32_t value)
{
    importMembers_ = value;
    importMembersIsSet_ = true;
}

bool CreateRepoRequest::importMembersIsSet() const
{
    return importMembersIsSet_;
}

void CreateRepoRequest::unsetimportMembers()
{
    importMembersIsSet_ = false;
}

std::string CreateRepoRequest::getName() const
{
    return name_;
}

void CreateRepoRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRepoRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRepoRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRepoRequest::getProjectUuid() const
{
    return projectUuid_;
}

void CreateRepoRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool CreateRepoRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void CreateRepoRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string CreateRepoRequest::getTemplateId() const
{
    return templateId_;
}

void CreateRepoRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateRepoRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateRepoRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int32_t CreateRepoRequest::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void CreateRepoRequest::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool CreateRepoRequest::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void CreateRepoRequest::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

std::string CreateRepoRequest::getImportUrl() const
{
    return importUrl_;
}

void CreateRepoRequest::setImportUrl(const std::string& value)
{
    importUrl_ = value;
    importUrlIsSet_ = true;
}

bool CreateRepoRequest::importUrlIsSet() const
{
    return importUrlIsSet_;
}

void CreateRepoRequest::unsetimportUrl()
{
    importUrlIsSet_ = false;
}

std::string CreateRepoRequest::getDescription() const
{
    return description_;
}

void CreateRepoRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRepoRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRepoRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateRepoRequest::getGitignoreId() const
{
    return gitignoreId_;
}

void CreateRepoRequest::setGitignoreId(const std::string& value)
{
    gitignoreId_ = value;
    gitignoreIdIsSet_ = true;
}

bool CreateRepoRequest::gitignoreIdIsSet() const
{
    return gitignoreIdIsSet_;
}

void CreateRepoRequest::unsetgitignoreId()
{
    gitignoreIdIsSet_ = false;
}

int32_t CreateRepoRequest::getLicenseId() const
{
    return licenseId_;
}

void CreateRepoRequest::setLicenseId(int32_t value)
{
    licenseId_ = value;
    licenseIdIsSet_ = true;
}

bool CreateRepoRequest::licenseIdIsSet() const
{
    return licenseIdIsSet_;
}

void CreateRepoRequest::unsetlicenseId()
{
    licenseIdIsSet_ = false;
}

int32_t CreateRepoRequest::getEnableReadme() const
{
    return enableReadme_;
}

void CreateRepoRequest::setEnableReadme(int32_t value)
{
    enableReadme_ = value;
    enableReadmeIsSet_ = true;
}

bool CreateRepoRequest::enableReadmeIsSet() const
{
    return enableReadmeIsSet_;
}

void CreateRepoRequest::unsetenableReadme()
{
    enableReadmeIsSet_ = false;
}

std::string CreateRepoRequest::getCaller() const
{
    return caller_;
}

void CreateRepoRequest::setCaller(const std::string& value)
{
    caller_ = value;
    callerIsSet_ = true;
}

bool CreateRepoRequest::callerIsSet() const
{
    return callerIsSet_;
}

void CreateRepoRequest::unsetcaller()
{
    callerIsSet_ = false;
}

}
}
}
}
}



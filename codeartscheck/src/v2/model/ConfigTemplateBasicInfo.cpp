

#include "huaweicloud/codeartscheck/v2/model/ConfigTemplateBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ConfigTemplateBasicInfo::ConfigTemplateBasicInfo()
{
    arch_ = "";
    archIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    exclude_ = "";
    excludeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    includePaths_ = "";
    includePathsIsSet_ = false;
    lastReviser_ = "";
    lastReviserIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    repoType_ = "";
    repoTypeIsSet_ = false;
    repoUrl_ = "";
    repoUrlIsSet_ = false;
    resourcePoolId_ = "";
    resourcePoolIdIsSet_ = false;
    resourcePoolName_ = "";
    resourcePoolNameIsSet_ = false;
    resourcePoolType_ = "";
    resourcePoolTypeIsSet_ = false;
    reviewDataIsSet_ = false;
    reviewDataJson_ = "";
    reviewDataJsonIsSet_ = false;
    ruleSetsIsSet_ = false;
}

ConfigTemplateBasicInfo::~ConfigTemplateBasicInfo() = default;

void ConfigTemplateBasicInfo::validate()
{
}

web::json::value ConfigTemplateBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(excludeIsSet_) {
        val[utility::conversions::to_string_t("exclude")] = ModelBase::toJson(exclude_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(includePathsIsSet_) {
        val[utility::conversions::to_string_t("includePaths")] = ModelBase::toJson(includePaths_);
    }
    if(lastReviserIsSet_) {
        val[utility::conversions::to_string_t("lastReviser")] = ModelBase::toJson(lastReviser_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastUpdateTime")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("projectName")] = ModelBase::toJson(projectName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(repoTypeIsSet_) {
        val[utility::conversions::to_string_t("repoType")] = ModelBase::toJson(repoType_);
    }
    if(repoUrlIsSet_) {
        val[utility::conversions::to_string_t("repoUrl")] = ModelBase::toJson(repoUrl_);
    }
    if(resourcePoolIdIsSet_) {
        val[utility::conversions::to_string_t("resourcePoolId")] = ModelBase::toJson(resourcePoolId_);
    }
    if(resourcePoolNameIsSet_) {
        val[utility::conversions::to_string_t("resourcePoolName")] = ModelBase::toJson(resourcePoolName_);
    }
    if(resourcePoolTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_pool_type")] = ModelBase::toJson(resourcePoolType_);
    }
    if(reviewDataIsSet_) {
        val[utility::conversions::to_string_t("reviewData")] = ModelBase::toJson(reviewData_);
    }
    if(reviewDataJsonIsSet_) {
        val[utility::conversions::to_string_t("reviewDataJson")] = ModelBase::toJson(reviewDataJson_);
    }
    if(ruleSetsIsSet_) {
        val[utility::conversions::to_string_t("ruleSets")] = ModelBase::toJson(ruleSets_);
    }

    return val;
}
bool ConfigTemplateBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExclude(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("includePaths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includePaths"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludePaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastReviser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastReviser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastReviser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastUpdateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdateTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourcePoolId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourcePoolId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourcePoolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourcePoolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_pool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePoolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewData"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewData"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDataInfoResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewDataJson"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewDataJson"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewDataJson(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleSets"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigTemplateRuleSetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSets(refVal);
        }
    }
    return ok;
}


std::string ConfigTemplateBasicInfo::getArch() const
{
    return arch_;
}

void ConfigTemplateBasicInfo::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ConfigTemplateBasicInfo::archIsSet() const
{
    return archIsSet_;
}

void ConfigTemplateBasicInfo::unsetarch()
{
    archIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getBranch() const
{
    return branch_;
}

void ConfigTemplateBasicInfo::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ConfigTemplateBasicInfo::branchIsSet() const
{
    return branchIsSet_;
}

void ConfigTemplateBasicInfo::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getCreateTime() const
{
    return createTime_;
}

void ConfigTemplateBasicInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ConfigTemplateBasicInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ConfigTemplateBasicInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getCreator() const
{
    return creator_;
}

void ConfigTemplateBasicInfo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ConfigTemplateBasicInfo::creatorIsSet() const
{
    return creatorIsSet_;
}

void ConfigTemplateBasicInfo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getExclude() const
{
    return exclude_;
}

void ConfigTemplateBasicInfo::setExclude(const std::string& value)
{
    exclude_ = value;
    excludeIsSet_ = true;
}

bool ConfigTemplateBasicInfo::excludeIsSet() const
{
    return excludeIsSet_;
}

void ConfigTemplateBasicInfo::unsetexclude()
{
    excludeIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getId() const
{
    return id_;
}

void ConfigTemplateBasicInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfigTemplateBasicInfo::idIsSet() const
{
    return idIsSet_;
}

void ConfigTemplateBasicInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getIncludePaths() const
{
    return includePaths_;
}

void ConfigTemplateBasicInfo::setIncludePaths(const std::string& value)
{
    includePaths_ = value;
    includePathsIsSet_ = true;
}

bool ConfigTemplateBasicInfo::includePathsIsSet() const
{
    return includePathsIsSet_;
}

void ConfigTemplateBasicInfo::unsetincludePaths()
{
    includePathsIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getLastReviser() const
{
    return lastReviser_;
}

void ConfigTemplateBasicInfo::setLastReviser(const std::string& value)
{
    lastReviser_ = value;
    lastReviserIsSet_ = true;
}

bool ConfigTemplateBasicInfo::lastReviserIsSet() const
{
    return lastReviserIsSet_;
}

void ConfigTemplateBasicInfo::unsetlastReviser()
{
    lastReviserIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ConfigTemplateBasicInfo::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ConfigTemplateBasicInfo::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ConfigTemplateBasicInfo::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getName() const
{
    return name_;
}

void ConfigTemplateBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigTemplateBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigTemplateBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getProjectId() const
{
    return projectId_;
}

void ConfigTemplateBasicInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ConfigTemplateBasicInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ConfigTemplateBasicInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getProjectName() const
{
    return projectName_;
}

void ConfigTemplateBasicInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ConfigTemplateBasicInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ConfigTemplateBasicInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getRegion() const
{
    return region_;
}

void ConfigTemplateBasicInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ConfigTemplateBasicInfo::regionIsSet() const
{
    return regionIsSet_;
}

void ConfigTemplateBasicInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getRepoType() const
{
    return repoType_;
}

void ConfigTemplateBasicInfo::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool ConfigTemplateBasicInfo::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void ConfigTemplateBasicInfo::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getRepoUrl() const
{
    return repoUrl_;
}

void ConfigTemplateBasicInfo::setRepoUrl(const std::string& value)
{
    repoUrl_ = value;
    repoUrlIsSet_ = true;
}

bool ConfigTemplateBasicInfo::repoUrlIsSet() const
{
    return repoUrlIsSet_;
}

void ConfigTemplateBasicInfo::unsetrepoUrl()
{
    repoUrlIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getResourcePoolId() const
{
    return resourcePoolId_;
}

void ConfigTemplateBasicInfo::setResourcePoolId(const std::string& value)
{
    resourcePoolId_ = value;
    resourcePoolIdIsSet_ = true;
}

bool ConfigTemplateBasicInfo::resourcePoolIdIsSet() const
{
    return resourcePoolIdIsSet_;
}

void ConfigTemplateBasicInfo::unsetresourcePoolId()
{
    resourcePoolIdIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getResourcePoolName() const
{
    return resourcePoolName_;
}

void ConfigTemplateBasicInfo::setResourcePoolName(const std::string& value)
{
    resourcePoolName_ = value;
    resourcePoolNameIsSet_ = true;
}

bool ConfigTemplateBasicInfo::resourcePoolNameIsSet() const
{
    return resourcePoolNameIsSet_;
}

void ConfigTemplateBasicInfo::unsetresourcePoolName()
{
    resourcePoolNameIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getResourcePoolType() const
{
    return resourcePoolType_;
}

void ConfigTemplateBasicInfo::setResourcePoolType(const std::string& value)
{
    resourcePoolType_ = value;
    resourcePoolTypeIsSet_ = true;
}

bool ConfigTemplateBasicInfo::resourcePoolTypeIsSet() const
{
    return resourcePoolTypeIsSet_;
}

void ConfigTemplateBasicInfo::unsetresourcePoolType()
{
    resourcePoolTypeIsSet_ = false;
}

std::vector<ReviewDataInfoResponse>& ConfigTemplateBasicInfo::getReviewData()
{
    return reviewData_;
}

void ConfigTemplateBasicInfo::setReviewData(const std::vector<ReviewDataInfoResponse>& value)
{
    reviewData_ = value;
    reviewDataIsSet_ = true;
}

bool ConfigTemplateBasicInfo::reviewDataIsSet() const
{
    return reviewDataIsSet_;
}

void ConfigTemplateBasicInfo::unsetreviewData()
{
    reviewDataIsSet_ = false;
}

std::string ConfigTemplateBasicInfo::getReviewDataJson() const
{
    return reviewDataJson_;
}

void ConfigTemplateBasicInfo::setReviewDataJson(const std::string& value)
{
    reviewDataJson_ = value;
    reviewDataJsonIsSet_ = true;
}

bool ConfigTemplateBasicInfo::reviewDataJsonIsSet() const
{
    return reviewDataJsonIsSet_;
}

void ConfigTemplateBasicInfo::unsetreviewDataJson()
{
    reviewDataJsonIsSet_ = false;
}

std::vector<ConfigTemplateRuleSetInfo>& ConfigTemplateBasicInfo::getRuleSets()
{
    return ruleSets_;
}

void ConfigTemplateBasicInfo::setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value)
{
    ruleSets_ = value;
    ruleSetsIsSet_ = true;
}

bool ConfigTemplateBasicInfo::ruleSetsIsSet() const
{
    return ruleSetsIsSet_;
}

void ConfigTemplateBasicInfo::unsetruleSets()
{
    ruleSetsIsSet_ = false;
}

}
}
}
}
}



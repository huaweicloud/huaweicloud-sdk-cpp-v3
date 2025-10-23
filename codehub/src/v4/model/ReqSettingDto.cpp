

#include "huaweicloud/codehub/v4/model/ReqSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ReqSettingDto::ReqSettingDto()
{
    active_ = false;
    activeIsSet_ = false;
    branches_ = "";
    branchesIsSet_ = false;
    branchesType_ = "";
    branchesTypeIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    categories_ = "";
    categoriesIsSet_ = false;
    categoryCodes_ = "";
    categoryCodesIsSet_ = false;
    excludeStatuses_ = "";
    excludeStatusesIsSet_ = false;
    excludeStatusCodes_ = "";
    excludeStatusCodesIsSet_ = false;
}

ReqSettingDto::~ReqSettingDto() = default;

void ReqSettingDto::validate()
{
}

web::json::value ReqSettingDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(branchesIsSet_) {
        val[utility::conversions::to_string_t("branches")] = ModelBase::toJson(branches_);
    }
    if(branchesTypeIsSet_) {
        val[utility::conversions::to_string_t("branches_type")] = ModelBase::toJson(branchesType_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(categoryCodesIsSet_) {
        val[utility::conversions::to_string_t("category_codes")] = ModelBase::toJson(categoryCodes_);
    }
    if(excludeStatusesIsSet_) {
        val[utility::conversions::to_string_t("exclude_statuses")] = ModelBase::toJson(excludeStatuses_);
    }
    if(excludeStatusCodesIsSet_) {
        val[utility::conversions::to_string_t("exclude_status_codes")] = ModelBase::toJson(excludeStatusCodes_);
    }

    return val;
}
bool ReqSettingDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branches_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchesType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_codes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_statuses"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeStatuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_status_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_status_codes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeStatusCodes(refVal);
        }
    }
    return ok;
}


bool ReqSettingDto::isActive() const
{
    return active_;
}

void ReqSettingDto::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool ReqSettingDto::activeIsSet() const
{
    return activeIsSet_;
}

void ReqSettingDto::unsetactive()
{
    activeIsSet_ = false;
}

std::string ReqSettingDto::getBranches() const
{
    return branches_;
}

void ReqSettingDto::setBranches(const std::string& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool ReqSettingDto::branchesIsSet() const
{
    return branchesIsSet_;
}

void ReqSettingDto::unsetbranches()
{
    branchesIsSet_ = false;
}

std::string ReqSettingDto::getBranchesType() const
{
    return branchesType_;
}

void ReqSettingDto::setBranchesType(const std::string& value)
{
    branchesType_ = value;
    branchesTypeIsSet_ = true;
}

bool ReqSettingDto::branchesTypeIsSet() const
{
    return branchesTypeIsSet_;
}

void ReqSettingDto::unsetbranchesType()
{
    branchesTypeIsSet_ = false;
}

std::string ReqSettingDto::getProjectType() const
{
    return projectType_;
}

void ReqSettingDto::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ReqSettingDto::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ReqSettingDto::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

std::string ReqSettingDto::getCategories() const
{
    return categories_;
}

void ReqSettingDto::setCategories(const std::string& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool ReqSettingDto::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void ReqSettingDto::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::string ReqSettingDto::getCategoryCodes() const
{
    return categoryCodes_;
}

void ReqSettingDto::setCategoryCodes(const std::string& value)
{
    categoryCodes_ = value;
    categoryCodesIsSet_ = true;
}

bool ReqSettingDto::categoryCodesIsSet() const
{
    return categoryCodesIsSet_;
}

void ReqSettingDto::unsetcategoryCodes()
{
    categoryCodesIsSet_ = false;
}

std::string ReqSettingDto::getExcludeStatuses() const
{
    return excludeStatuses_;
}

void ReqSettingDto::setExcludeStatuses(const std::string& value)
{
    excludeStatuses_ = value;
    excludeStatusesIsSet_ = true;
}

bool ReqSettingDto::excludeStatusesIsSet() const
{
    return excludeStatusesIsSet_;
}

void ReqSettingDto::unsetexcludeStatuses()
{
    excludeStatusesIsSet_ = false;
}

std::string ReqSettingDto::getExcludeStatusCodes() const
{
    return excludeStatusCodes_;
}

void ReqSettingDto::setExcludeStatusCodes(const std::string& value)
{
    excludeStatusCodes_ = value;
    excludeStatusCodesIsSet_ = true;
}

bool ReqSettingDto::excludeStatusCodesIsSet() const
{
    return excludeStatusCodesIsSet_;
}

void ReqSettingDto::unsetexcludeStatusCodes()
{
    excludeStatusCodesIsSet_ = false;
}

}
}
}
}
}



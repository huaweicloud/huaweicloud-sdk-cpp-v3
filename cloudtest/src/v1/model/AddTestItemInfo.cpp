

#include "huaweicloud/cloudtest/v1/model/AddTestItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestItemInfo::AddTestItemInfo()
{
    comment_ = "";
    commentIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    isFeature_ = "";
    isFeatureIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    ignoreDuplicateName_ = false;
    ignoreDuplicateNameIsSet_ = false;
}

AddTestItemInfo::~AddTestItemInfo() = default;

void AddTestItemInfo::validate()
{
}

web::json::value AddTestItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(isFeatureIsSet_) {
        val[utility::conversions::to_string_t("is_feature")] = ModelBase::toJson(isFeature_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(ignoreDuplicateNameIsSet_) {
        val[utility::conversions::to_string_t("ignore_duplicate_name")] = ModelBase::toJson(ignoreDuplicateName_);
    }

    return val;
}
bool AddTestItemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFeature(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_duplicate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_duplicate_name"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreDuplicateName(refVal);
        }
    }
    return ok;
}


std::string AddTestItemInfo::getComment() const
{
    return comment_;
}

void AddTestItemInfo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool AddTestItemInfo::commentIsSet() const
{
    return commentIsSet_;
}

void AddTestItemInfo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string AddTestItemInfo::getName() const
{
    return name_;
}

void AddTestItemInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddTestItemInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AddTestItemInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AddTestItemInfo::getNumber() const
{
    return number_;
}

void AddTestItemInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool AddTestItemInfo::numberIsSet() const
{
    return numberIsSet_;
}

void AddTestItemInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string AddTestItemInfo::getOwner() const
{
    return owner_;
}

void AddTestItemInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool AddTestItemInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void AddTestItemInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string AddTestItemInfo::getIsFeature() const
{
    return isFeature_;
}

void AddTestItemInfo::setIsFeature(const std::string& value)
{
    isFeature_ = value;
    isFeatureIsSet_ = true;
}

bool AddTestItemInfo::isFeatureIsSet() const
{
    return isFeatureIsSet_;
}

void AddTestItemInfo::unsetisFeature()
{
    isFeatureIsSet_ = false;
}

std::string AddTestItemInfo::getProjectUuid() const
{
    return projectUuid_;
}

void AddTestItemInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool AddTestItemInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void AddTestItemInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string AddTestItemInfo::getParentUri() const
{
    return parentUri_;
}

void AddTestItemInfo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool AddTestItemInfo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void AddTestItemInfo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string AddTestItemInfo::getVersionUri() const
{
    return versionUri_;
}

void AddTestItemInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool AddTestItemInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void AddTestItemInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

bool AddTestItemInfo::isIgnoreDuplicateName() const
{
    return ignoreDuplicateName_;
}

void AddTestItemInfo::setIgnoreDuplicateName(bool value)
{
    ignoreDuplicateName_ = value;
    ignoreDuplicateNameIsSet_ = true;
}

bool AddTestItemInfo::ignoreDuplicateNameIsSet() const
{
    return ignoreDuplicateNameIsSet_;
}

void AddTestItemInfo::unsetignoreDuplicateName()
{
    ignoreDuplicateNameIsSet_ = false;
}

}
}
}
}
}



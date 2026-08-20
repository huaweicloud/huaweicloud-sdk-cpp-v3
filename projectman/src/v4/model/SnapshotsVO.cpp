

#include "huaweicloud/projectman/v4/model/SnapshotsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SnapshotsVO::SnapshotsVO()
{
    title_ = "";
    titleIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    snapshot2workitemIsSet_ = false;
    createdByIsSet_ = false;
    modifiedByIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    snapBaseInfoId_ = "";
    snapBaseInfoIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    parentFullPath_ = "";
    parentFullPathIsSet_ = false;
    parentPath_ = "";
    parentPathIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    versionNumber_ = 0;
    versionNumberIsSet_ = false;
    deletable_ = false;
    deletableIsSet_ = false;
    categoryName_ = "";
    categoryNameIsSet_ = false;
}

SnapshotsVO::~SnapshotsVO() = default;

void SnapshotsVO::validate()
{
}

web::json::value SnapshotsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(snapshot2workitemIsSet_) {
        val[utility::conversions::to_string_t("snapshot2workitem")] = ModelBase::toJson(snapshot2workitem_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(snapBaseInfoIdIsSet_) {
        val[utility::conversions::to_string_t("snap_base_info_id")] = ModelBase::toJson(snapBaseInfoId_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(parentFullPathIsSet_) {
        val[utility::conversions::to_string_t("parent_full_path")] = ModelBase::toJson(parentFullPath_);
    }
    if(parentPathIsSet_) {
        val[utility::conversions::to_string_t("parent_path")] = ModelBase::toJson(parentPath_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(versionNumberIsSet_) {
        val[utility::conversions::to_string_t("version_number")] = ModelBase::toJson(versionNumber_);
    }
    if(deletableIsSet_) {
        val[utility::conversions::to_string_t("deletable")] = ModelBase::toJson(deletable_);
    }
    if(categoryNameIsSet_) {
        val[utility::conversions::to_string_t("category_name")] = ModelBase::toJson(categoryName_);
    }

    return val;
}
bool SnapshotsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot2workitem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot2workitem"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot2workitem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snap_base_info_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snap_base_info_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapBaseInfoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryName(refVal);
        }
    }
    return ok;
}


std::string SnapshotsVO::getTitle() const
{
    return title_;
}

void SnapshotsVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SnapshotsVO::titleIsSet() const
{
    return titleIsSet_;
}

void SnapshotsVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string SnapshotsVO::getIssueId() const
{
    return issueId_;
}

void SnapshotsVO::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool SnapshotsVO::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void SnapshotsVO::unsetissueId()
{
    issueIdIsSet_ = false;
}

Object SnapshotsVO::getSnapshot2workitem() const
{
    return snapshot2workitem_;
}

void SnapshotsVO::setSnapshot2workitem(const Object& value)
{
    snapshot2workitem_ = value;
    snapshot2workitemIsSet_ = true;
}

bool SnapshotsVO::snapshot2workitemIsSet() const
{
    return snapshot2workitemIsSet_;
}

void SnapshotsVO::unsetsnapshot2workitem()
{
    snapshot2workitemIsSet_ = false;
}

UserVO SnapshotsVO::getCreatedBy() const
{
    return createdBy_;
}

void SnapshotsVO::setCreatedBy(const UserVO& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool SnapshotsVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void SnapshotsVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

UserVO SnapshotsVO::getModifiedBy() const
{
    return modifiedBy_;
}

void SnapshotsVO::setModifiedBy(const UserVO& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool SnapshotsVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void SnapshotsVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string SnapshotsVO::getCategory() const
{
    return category_;
}

void SnapshotsVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SnapshotsVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void SnapshotsVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string SnapshotsVO::getDescription() const
{
    return description_;
}

void SnapshotsVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotsVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotsVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SnapshotsVO::getPath() const
{
    return path_;
}

void SnapshotsVO::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SnapshotsVO::pathIsSet() const
{
    return pathIsSet_;
}

void SnapshotsVO::unsetpath()
{
    pathIsSet_ = false;
}

std::string SnapshotsVO::getRegion() const
{
    return region_;
}

void SnapshotsVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool SnapshotsVO::regionIsSet() const
{
    return regionIsSet_;
}

void SnapshotsVO::unsetregion()
{
    regionIsSet_ = false;
}

std::string SnapshotsVO::getId() const
{
    return id_;
}

void SnapshotsVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotsVO::idIsSet() const
{
    return idIsSet_;
}

void SnapshotsVO::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotsVO::getTenantId() const
{
    return tenantId_;
}

void SnapshotsVO::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool SnapshotsVO::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void SnapshotsVO::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string SnapshotsVO::getCreatedDate() const
{
    return createdDate_;
}

void SnapshotsVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool SnapshotsVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void SnapshotsVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string SnapshotsVO::getModifiedDate() const
{
    return modifiedDate_;
}

void SnapshotsVO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool SnapshotsVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void SnapshotsVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string SnapshotsVO::getDomainId() const
{
    return domainId_;
}

void SnapshotsVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SnapshotsVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SnapshotsVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string SnapshotsVO::getType() const
{
    return type_;
}

void SnapshotsVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SnapshotsVO::typeIsSet() const
{
    return typeIsSet_;
}

void SnapshotsVO::unsettype()
{
    typeIsSet_ = false;
}

std::string SnapshotsVO::getSnapBaseInfoId() const
{
    return snapBaseInfoId_;
}

void SnapshotsVO::setSnapBaseInfoId(const std::string& value)
{
    snapBaseInfoId_ = value;
    snapBaseInfoIdIsSet_ = true;
}

bool SnapshotsVO::snapBaseInfoIdIsSet() const
{
    return snapBaseInfoIdIsSet_;
}

void SnapshotsVO::unsetsnapBaseInfoId()
{
    snapBaseInfoIdIsSet_ = false;
}

std::string SnapshotsVO::getIssueCategory() const
{
    return issueCategory_;
}

void SnapshotsVO::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool SnapshotsVO::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void SnapshotsVO::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string SnapshotsVO::getParentId() const
{
    return parentId_;
}

void SnapshotsVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool SnapshotsVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void SnapshotsVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string SnapshotsVO::getRootId() const
{
    return rootId_;
}

void SnapshotsVO::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool SnapshotsVO::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void SnapshotsVO::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string SnapshotsVO::getParentFullPath() const
{
    return parentFullPath_;
}

void SnapshotsVO::setParentFullPath(const std::string& value)
{
    parentFullPath_ = value;
    parentFullPathIsSet_ = true;
}

bool SnapshotsVO::parentFullPathIsSet() const
{
    return parentFullPathIsSet_;
}

void SnapshotsVO::unsetparentFullPath()
{
    parentFullPathIsSet_ = false;
}

std::string SnapshotsVO::getParentPath() const
{
    return parentPath_;
}

void SnapshotsVO::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool SnapshotsVO::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void SnapshotsVO::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string SnapshotsVO::getFullPath() const
{
    return fullPath_;
}

void SnapshotsVO::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool SnapshotsVO::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void SnapshotsVO::unsetfullPath()
{
    fullPathIsSet_ = false;
}

int32_t SnapshotsVO::getVersionNumber() const
{
    return versionNumber_;
}

void SnapshotsVO::setVersionNumber(int32_t value)
{
    versionNumber_ = value;
    versionNumberIsSet_ = true;
}

bool SnapshotsVO::versionNumberIsSet() const
{
    return versionNumberIsSet_;
}

void SnapshotsVO::unsetversionNumber()
{
    versionNumberIsSet_ = false;
}

bool SnapshotsVO::isDeletable() const
{
    return deletable_;
}

void SnapshotsVO::setDeletable(bool value)
{
    deletable_ = value;
    deletableIsSet_ = true;
}

bool SnapshotsVO::deletableIsSet() const
{
    return deletableIsSet_;
}

void SnapshotsVO::unsetdeletable()
{
    deletableIsSet_ = false;
}

std::string SnapshotsVO::getCategoryName() const
{
    return categoryName_;
}

void SnapshotsVO::setCategoryName(const std::string& value)
{
    categoryName_ = value;
    categoryNameIsSet_ = true;
}

bool SnapshotsVO::categoryNameIsSet() const
{
    return categoryNameIsSet_;
}

void SnapshotsVO::unsetcategoryName()
{
    categoryNameIsSet_ = false;
}

}
}
}
}
}



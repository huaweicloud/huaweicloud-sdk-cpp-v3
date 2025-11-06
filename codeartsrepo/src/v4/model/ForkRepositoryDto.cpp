

#include "huaweicloud/codeartsrepo/v4/model/ForkRepositoryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ForkRepositoryDto::ForkRepositoryDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    security_ = "";
    securityIsSet_ = false;
    starCount_ = 0;
    starCountIsSet_ = false;
    forksCount_ = 0;
    forksCountIsSet_ = false;
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    nameWithNamespace_ = "";
    nameWithNamespaceIsSet_ = false;
    lastActivityAt_ = "";
    lastActivityAtIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

ForkRepositoryDto::~ForkRepositoryDto() = default;

void ForkRepositoryDto::validate()
{
}

web::json::value ForkRepositoryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(securityIsSet_) {
        val[utility::conversions::to_string_t("security")] = ModelBase::toJson(security_);
    }
    if(starCountIsSet_) {
        val[utility::conversions::to_string_t("star_count")] = ModelBase::toJson(starCount_);
    }
    if(forksCountIsSet_) {
        val[utility::conversions::to_string_t("forks_count")] = ModelBase::toJson(forksCount_);
    }
    if(openMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("open_merge_requests_count")] = ModelBase::toJson(openMergeRequestsCount_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(nameWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("name_with_namespace")] = ModelBase::toJson(nameWithNamespace_);
    }
    if(lastActivityAtIsSet_) {
        val[utility::conversions::to_string_t("last_activity_at")] = ModelBase::toJson(lastActivityAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool ForkRepositoryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathWithNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("develop_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("star_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("star_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forks_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forks_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForksCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_merge_requests_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_merge_requests_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenMergeRequestsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameWithNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_activity_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_activity_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastActivityAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


int32_t ForkRepositoryDto::getId() const
{
    return id_;
}

void ForkRepositoryDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ForkRepositoryDto::idIsSet() const
{
    return idIsSet_;
}

void ForkRepositoryDto::unsetid()
{
    idIsSet_ = false;
}

std::string ForkRepositoryDto::getName() const
{
    return name_;
}

void ForkRepositoryDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ForkRepositoryDto::nameIsSet() const
{
    return nameIsSet_;
}

void ForkRepositoryDto::unsetname()
{
    nameIsSet_ = false;
}

bool ForkRepositoryDto::isArchived() const
{
    return archived_;
}

void ForkRepositoryDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ForkRepositoryDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void ForkRepositoryDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string ForkRepositoryDto::getProductId() const
{
    return productId_;
}

void ForkRepositoryDto::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ForkRepositoryDto::productIdIsSet() const
{
    return productIdIsSet_;
}

void ForkRepositoryDto::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ForkRepositoryDto::getProductName() const
{
    return productName_;
}

void ForkRepositoryDto::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool ForkRepositoryDto::productNameIsSet() const
{
    return productNameIsSet_;
}

void ForkRepositoryDto::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string ForkRepositoryDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void ForkRepositoryDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool ForkRepositoryDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void ForkRepositoryDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string ForkRepositoryDto::getNamespace() const
{
    return namespace_;
}

void ForkRepositoryDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ForkRepositoryDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ForkRepositoryDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ForkRepositoryDto::getPath() const
{
    return path_;
}

void ForkRepositoryDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ForkRepositoryDto::pathIsSet() const
{
    return pathIsSet_;
}

void ForkRepositoryDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string ForkRepositoryDto::getDevelopMode() const
{
    return developMode_;
}

void ForkRepositoryDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool ForkRepositoryDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void ForkRepositoryDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

std::string ForkRepositoryDto::getVisibility() const
{
    return visibility_;
}

void ForkRepositoryDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ForkRepositoryDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ForkRepositoryDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ForkRepositoryDto::getSecurity() const
{
    return security_;
}

void ForkRepositoryDto::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool ForkRepositoryDto::securityIsSet() const
{
    return securityIsSet_;
}

void ForkRepositoryDto::unsetsecurity()
{
    securityIsSet_ = false;
}

int32_t ForkRepositoryDto::getStarCount() const
{
    return starCount_;
}

void ForkRepositoryDto::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool ForkRepositoryDto::starCountIsSet() const
{
    return starCountIsSet_;
}

void ForkRepositoryDto::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t ForkRepositoryDto::getForksCount() const
{
    return forksCount_;
}

void ForkRepositoryDto::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool ForkRepositoryDto::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void ForkRepositoryDto::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t ForkRepositoryDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void ForkRepositoryDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool ForkRepositoryDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void ForkRepositoryDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

bool ForkRepositoryDto::isStarred() const
{
    return starred_;
}

void ForkRepositoryDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ForkRepositoryDto::starredIsSet() const
{
    return starredIsSet_;
}

void ForkRepositoryDto::unsetstarred()
{
    starredIsSet_ = false;
}

std::string ForkRepositoryDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void ForkRepositoryDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool ForkRepositoryDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void ForkRepositoryDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string ForkRepositoryDto::getLastActivityAt() const
{
    return lastActivityAt_;
}

void ForkRepositoryDto::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool ForkRepositoryDto::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void ForkRepositoryDto::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

std::string ForkRepositoryDto::getCreatedAt() const
{
    return createdAt_;
}

void ForkRepositoryDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ForkRepositoryDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ForkRepositoryDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}



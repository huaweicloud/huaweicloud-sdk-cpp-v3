

#include "huaweicloud/codehub/v4/model/ForkRepositoryBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ForkRepositoryBasicDto::ForkRepositoryBasicDto()
{
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

ForkRepositoryBasicDto::~ForkRepositoryBasicDto() = default;

void ForkRepositoryBasicDto::validate()
{
}

web::json::value ForkRepositoryBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ForkRepositoryBasicDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ForkRepositoryBasicDto::getNamespace() const
{
    return namespace_;
}

void ForkRepositoryBasicDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ForkRepositoryBasicDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ForkRepositoryBasicDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getPath() const
{
    return path_;
}

void ForkRepositoryBasicDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ForkRepositoryBasicDto::pathIsSet() const
{
    return pathIsSet_;
}

void ForkRepositoryBasicDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getDevelopMode() const
{
    return developMode_;
}

void ForkRepositoryBasicDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool ForkRepositoryBasicDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void ForkRepositoryBasicDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getVisibility() const
{
    return visibility_;
}

void ForkRepositoryBasicDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ForkRepositoryBasicDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ForkRepositoryBasicDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getSecurity() const
{
    return security_;
}

void ForkRepositoryBasicDto::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool ForkRepositoryBasicDto::securityIsSet() const
{
    return securityIsSet_;
}

void ForkRepositoryBasicDto::unsetsecurity()
{
    securityIsSet_ = false;
}

int32_t ForkRepositoryBasicDto::getStarCount() const
{
    return starCount_;
}

void ForkRepositoryBasicDto::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool ForkRepositoryBasicDto::starCountIsSet() const
{
    return starCountIsSet_;
}

void ForkRepositoryBasicDto::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t ForkRepositoryBasicDto::getForksCount() const
{
    return forksCount_;
}

void ForkRepositoryBasicDto::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool ForkRepositoryBasicDto::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void ForkRepositoryBasicDto::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t ForkRepositoryBasicDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void ForkRepositoryBasicDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool ForkRepositoryBasicDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void ForkRepositoryBasicDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

bool ForkRepositoryBasicDto::isStarred() const
{
    return starred_;
}

void ForkRepositoryBasicDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ForkRepositoryBasicDto::starredIsSet() const
{
    return starredIsSet_;
}

void ForkRepositoryBasicDto::unsetstarred()
{
    starredIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void ForkRepositoryBasicDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool ForkRepositoryBasicDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void ForkRepositoryBasicDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getLastActivityAt() const
{
    return lastActivityAt_;
}

void ForkRepositoryBasicDto::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool ForkRepositoryBasicDto::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void ForkRepositoryBasicDto::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

std::string ForkRepositoryBasicDto::getCreatedAt() const
{
    return createdAt_;
}

void ForkRepositoryBasicDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ForkRepositoryBasicDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ForkRepositoryBasicDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsartifact/v2/model/ShowProjectRelatedRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectRelatedRepositoryRequest::ShowProjectRelatedRepositoryRequest()
{
    searchName_ = "";
    searchNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
}

ShowProjectRelatedRepositoryRequest::~ShowProjectRelatedRepositoryRequest() = default;

void ShowProjectRelatedRepositoryRequest::validate()
{
}

web::json::value ShowProjectRelatedRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchNameIsSet_) {
        val[utility::conversions::to_string_t("search_name")] = ModelBase::toJson(searchName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }

    return val;
}
bool ShowProjectRelatedRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    return ok;
}


std::string ShowProjectRelatedRepositoryRequest::getSearchName() const
{
    return searchName_;
}

void ShowProjectRelatedRepositoryRequest::setSearchName(const std::string& value)
{
    searchName_ = value;
    searchNameIsSet_ = true;
}

bool ShowProjectRelatedRepositoryRequest::searchNameIsSet() const
{
    return searchNameIsSet_;
}

void ShowProjectRelatedRepositoryRequest::unsetsearchName()
{
    searchNameIsSet_ = false;
}

int32_t ShowProjectRelatedRepositoryRequest::getOffset() const
{
    return offset_;
}

void ShowProjectRelatedRepositoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProjectRelatedRepositoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProjectRelatedRepositoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowProjectRelatedRepositoryRequest::getLimit() const
{
    return limit_;
}

void ShowProjectRelatedRepositoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProjectRelatedRepositoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProjectRelatedRepositoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowProjectRelatedRepositoryRequest::getRepoId() const
{
    return repoId_;
}

void ShowProjectRelatedRepositoryRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowProjectRelatedRepositoryRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowProjectRelatedRepositoryRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

}
}
}
}
}



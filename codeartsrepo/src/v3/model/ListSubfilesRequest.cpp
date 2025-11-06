

#include "huaweicloud/codeartsrepo/v3/model/ListSubfilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListSubfilesRequest::ListSubfilesRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubfilesRequest::~ListSubfilesRequest() = default;

void ListSubfilesRequest::validate()
{
}

web::json::value ListSubfilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubfilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
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
    return ok;
}


std::string ListSubfilesRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ListSubfilesRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ListSubfilesRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ListSubfilesRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string ListSubfilesRequest::getBranchName() const
{
    return branchName_;
}

void ListSubfilesRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ListSubfilesRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ListSubfilesRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string ListSubfilesRequest::getPath() const
{
    return path_;
}

void ListSubfilesRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListSubfilesRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListSubfilesRequest::unsetpath()
{
    pathIsSet_ = false;
}

int32_t ListSubfilesRequest::getOffset() const
{
    return offset_;
}

void ListSubfilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubfilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubfilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubfilesRequest::getLimit() const
{
    return limit_;
}

void ListSubfilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubfilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubfilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



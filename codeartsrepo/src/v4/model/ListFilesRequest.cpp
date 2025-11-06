

#include "huaweicloud/codeartsrepo/v4/model/ListFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListFilesRequest::ListFilesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListFilesRequest::~ListFilesRequest() = default;

void ListFilesRequest::validate()
{
}

web::json::value ListFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
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


int32_t ListFilesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListFilesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListFilesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListFilesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListFilesRequest::getRefName() const
{
    return refName_;
}

void ListFilesRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ListFilesRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ListFilesRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

int32_t ListFilesRequest::getOffset() const
{
    return offset_;
}

void ListFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListFilesRequest::getLimit() const
{
    return limit_;
}

void ListFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



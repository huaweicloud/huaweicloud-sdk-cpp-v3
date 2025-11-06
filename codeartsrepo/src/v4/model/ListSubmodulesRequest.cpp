

#include "huaweicloud/codeartsrepo/v4/model/ListSubmodulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListSubmodulesRequest::ListSubmodulesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubmodulesRequest::~ListSubmodulesRequest() = default;

void ListSubmodulesRequest::validate()
{
}

web::json::value ListSubmodulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubmodulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
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


int32_t ListSubmodulesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListSubmodulesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListSubmodulesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListSubmodulesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListSubmodulesRequest::getSha() const
{
    return sha_;
}

void ListSubmodulesRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ListSubmodulesRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ListSubmodulesRequest::unsetsha()
{
    shaIsSet_ = false;
}

int32_t ListSubmodulesRequest::getOffset() const
{
    return offset_;
}

void ListSubmodulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubmodulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubmodulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubmodulesRequest::getLimit() const
{
    return limit_;
}

void ListSubmodulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubmodulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubmodulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



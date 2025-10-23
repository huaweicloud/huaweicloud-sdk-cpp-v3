

#include "huaweicloud/codehub/v4/model/ListLogsTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListLogsTreeRequest::ListLogsTreeRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLogsTreeRequest::~ListLogsTreeRequest() = default;

void ListLogsTreeRequest::validate()
{
}

web::json::value ListLogsTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListLogsTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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


int32_t ListLogsTreeRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListLogsTreeRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListLogsTreeRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListLogsTreeRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListLogsTreeRequest::getRef() const
{
    return ref_;
}

void ListLogsTreeRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ListLogsTreeRequest::refIsSet() const
{
    return refIsSet_;
}

void ListLogsTreeRequest::unsetref()
{
    refIsSet_ = false;
}

int32_t ListLogsTreeRequest::getOffset() const
{
    return offset_;
}

void ListLogsTreeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLogsTreeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLogsTreeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLogsTreeRequest::getLimit() const
{
    return limit_;
}

void ListLogsTreeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogsTreeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogsTreeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



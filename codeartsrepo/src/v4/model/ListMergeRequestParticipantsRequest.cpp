

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestParticipantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestParticipantsRequest::ListMergeRequestParticipantsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestParticipantsRequest::~ListMergeRequestParticipantsRequest() = default;

void ListMergeRequestParticipantsRequest::validate()
{
}

web::json::value ListMergeRequestParticipantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestParticipantsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
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


int32_t ListMergeRequestParticipantsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestParticipantsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestParticipantsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestParticipantsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestParticipantsRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestParticipantsRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestParticipantsRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestParticipantsRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ListMergeRequestParticipantsRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestParticipantsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestParticipantsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestParticipantsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestParticipantsRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestParticipantsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestParticipantsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestParticipantsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



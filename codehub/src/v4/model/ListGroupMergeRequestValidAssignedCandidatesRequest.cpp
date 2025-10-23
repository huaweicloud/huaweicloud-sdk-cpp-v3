

#include "huaweicloud/codehub/v4/model/ListGroupMergeRequestValidAssignedCandidatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMergeRequestValidAssignedCandidatesRequest::ListGroupMergeRequestValidAssignedCandidatesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupMergeRequestValidAssignedCandidatesRequest::~ListGroupMergeRequestValidAssignedCandidatesRequest() = default;

void ListGroupMergeRequestValidAssignedCandidatesRequest::validate()
{
}

web::json::value ListGroupMergeRequestValidAssignedCandidatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGroupMergeRequestValidAssignedCandidatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


int32_t ListGroupMergeRequestValidAssignedCandidatesRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupMergeRequestValidAssignedCandidatesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupMergeRequestValidAssignedCandidatesRequest::getOffset() const
{
    return offset_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupMergeRequestValidAssignedCandidatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupMergeRequestValidAssignedCandidatesRequest::getLimit() const
{
    return limit_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMergeRequestValidAssignedCandidatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMergeRequestValidAssignedCandidatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



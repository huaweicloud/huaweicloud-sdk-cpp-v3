

#include "huaweicloud/codehub/v4/model/ListGroupMergeRequestCanBeAssignedReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMergeRequestCanBeAssignedReviewersRequest::ListGroupMergeRequestCanBeAssignedReviewersRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupMergeRequestCanBeAssignedReviewersRequest::~ListGroupMergeRequestCanBeAssignedReviewersRequest() = default;

void ListGroupMergeRequestCanBeAssignedReviewersRequest::validate()
{
}

web::json::value ListGroupMergeRequestCanBeAssignedReviewersRequest::toJson() const
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
bool ListGroupMergeRequestCanBeAssignedReviewersRequest::fromJson(const web::json::value& val)
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


int32_t ListGroupMergeRequestCanBeAssignedReviewersRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupMergeRequestCanBeAssignedReviewersRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupMergeRequestCanBeAssignedReviewersRequest::getOffset() const
{
    return offset_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupMergeRequestCanBeAssignedReviewersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupMergeRequestCanBeAssignedReviewersRequest::getLimit() const
{
    return limit_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMergeRequestCanBeAssignedReviewersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMergeRequestCanBeAssignedReviewersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



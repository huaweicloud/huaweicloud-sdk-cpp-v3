

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

}
}
}
}
}



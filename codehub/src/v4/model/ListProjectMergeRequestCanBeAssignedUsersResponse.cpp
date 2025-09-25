

#include "huaweicloud/codehub/v4/model/ListProjectMergeRequestCanBeAssignedUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedUsersResponse::ListProjectMergeRequestCanBeAssignedUsersResponse()
{
    bodyIsSet_ = false;
}

ListProjectMergeRequestCanBeAssignedUsersResponse::~ListProjectMergeRequestCanBeAssignedUsersResponse() = default;

void ListProjectMergeRequestCanBeAssignedUsersResponse::validate()
{
}

web::json::value ListProjectMergeRequestCanBeAssignedUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectMergeRequestCanBeAssignedUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestVoteReviewerDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestVoteReviewerDto>& ListProjectMergeRequestCanBeAssignedUsersResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::setBody(const std::vector<MergeRequestVoteReviewerDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



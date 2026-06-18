

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedReviewersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedReviewersResponse::ListProjectMergeRequestCanBeAssignedReviewersResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectMergeRequestCanBeAssignedReviewersResponse::~ListProjectMergeRequestCanBeAssignedReviewersResponse() = default;

void ListProjectMergeRequestCanBeAssignedReviewersResponse::validate()
{
}

web::json::value ListProjectMergeRequestCanBeAssignedReviewersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListProjectMergeRequestCanBeAssignedReviewersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<UserBasicDto>& ListProjectMergeRequestCanBeAssignedReviewersResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestCanBeAssignedReviewersResponse::setBody(const std::vector<UserBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedReviewersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestCanBeAssignedReviewersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectMergeRequestCanBeAssignedReviewersResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectMergeRequestCanBeAssignedReviewersResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedReviewersResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectMergeRequestCanBeAssignedReviewersResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}



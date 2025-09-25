

#include "huaweicloud/codehub/v4/model/ApprovalReviewerInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ApprovalReviewerInfoDto::ApprovalReviewerInfoDto()
{
    reviewerIds_ = "";
    reviewerIdsIsSet_ = false;
}

ApprovalReviewerInfoDto::~ApprovalReviewerInfoDto() = default;

void ApprovalReviewerInfoDto::validate()
{
}

web::json::value ApprovalReviewerInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("reviewer_ids")] = ModelBase::toJson(reviewerIds_);
    }

    return val;
}
bool ApprovalReviewerInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reviewer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewerIds(refVal);
        }
    }
    return ok;
}


std::string ApprovalReviewerInfoDto::getReviewerIds() const
{
    return reviewerIds_;
}

void ApprovalReviewerInfoDto::setReviewerIds(const std::string& value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool ApprovalReviewerInfoDto::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void ApprovalReviewerInfoDto::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

}
}
}
}
}



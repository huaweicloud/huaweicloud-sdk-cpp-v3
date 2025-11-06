

#include "huaweicloud/codeartsrepo/v3/model/MergeRequestApprovalReviewersDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeRequestApprovalReviewersDto::MergeRequestApprovalReviewersDto()
{
    approvalMergeRequestReviewersIsSet_ = false;
}

MergeRequestApprovalReviewersDto::~MergeRequestApprovalReviewersDto() = default;

void MergeRequestApprovalReviewersDto::validate()
{
}

web::json::value MergeRequestApprovalReviewersDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approvalMergeRequestReviewersIsSet_) {
        val[utility::conversions::to_string_t("approval_merge_request_reviewers")] = ModelBase::toJson(approvalMergeRequestReviewers_);
    }

    return val;
}
bool MergeRequestApprovalReviewersDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approval_merge_request_reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_merge_request_reviewers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApprovalUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalMergeRequestReviewers(refVal);
        }
    }
    return ok;
}


std::vector<ApprovalUserDto>& MergeRequestApprovalReviewersDto::getApprovalMergeRequestReviewers()
{
    return approvalMergeRequestReviewers_;
}

void MergeRequestApprovalReviewersDto::setApprovalMergeRequestReviewers(const std::vector<ApprovalUserDto>& value)
{
    approvalMergeRequestReviewers_ = value;
    approvalMergeRequestReviewersIsSet_ = true;
}

bool MergeRequestApprovalReviewersDto::approvalMergeRequestReviewersIsSet() const
{
    return approvalMergeRequestReviewersIsSet_;
}

void MergeRequestApprovalReviewersDto::unsetapprovalMergeRequestReviewers()
{
    approvalMergeRequestReviewersIsSet_ = false;
}

}
}
}
}
}



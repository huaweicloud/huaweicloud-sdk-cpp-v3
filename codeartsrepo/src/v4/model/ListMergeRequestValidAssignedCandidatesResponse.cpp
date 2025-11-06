

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestValidAssignedCandidatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestValidAssignedCandidatesResponse::ListMergeRequestValidAssignedCandidatesResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestValidAssignedCandidatesResponse::~ListMergeRequestValidAssignedCandidatesResponse() = default;

void ListMergeRequestValidAssignedCandidatesResponse::validate()
{
}

web::json::value ListMergeRequestValidAssignedCandidatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestValidAssignedCandidatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MRVoteReviewerDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MRVoteReviewerDto>& ListMergeRequestValidAssignedCandidatesResponse::getBody()
{
    return body_;
}

void ListMergeRequestValidAssignedCandidatesResponse::setBody(const std::vector<MRVoteReviewerDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestValidAssignedCandidatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



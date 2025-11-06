

#include "huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedMergeRequestsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListCommitAssociatedMergeRequestsResponse::ListCommitAssociatedMergeRequestsResponse()
{
    bodyIsSet_ = false;
}

ListCommitAssociatedMergeRequestsResponse::~ListCommitAssociatedMergeRequestsResponse() = default;

void ListCommitAssociatedMergeRequestsResponse::validate()
{
}

web::json::value ListCommitAssociatedMergeRequestsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCommitAssociatedMergeRequestsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitMergeRequestDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<CommitMergeRequestDto>& ListCommitAssociatedMergeRequestsResponse::getBody()
{
    return body_;
}

void ListCommitAssociatedMergeRequestsResponse::setBody(const std::vector<CommitMergeRequestDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCommitAssociatedMergeRequestsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCommitAssociatedMergeRequestsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codehub/v4/model/ListCommitDiscussionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCommitDiscussionsResponse::ListCommitDiscussionsResponse()
{
    bodyIsSet_ = false;
}

ListCommitDiscussionsResponse::~ListCommitDiscussionsResponse() = default;

void ListCommitDiscussionsResponse::validate()
{
}

web::json::value ListCommitDiscussionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCommitDiscussionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitDiscussionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<CommitDiscussionDto>& ListCommitDiscussionsResponse::getBody()
{
    return body_;
}

void ListCommitDiscussionsResponse::setBody(const std::vector<CommitDiscussionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCommitDiscussionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCommitDiscussionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



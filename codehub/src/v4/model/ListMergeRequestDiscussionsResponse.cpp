

#include "huaweicloud/codehub/v4/model/ListMergeRequestDiscussionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestDiscussionsResponse::ListMergeRequestDiscussionsResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestDiscussionsResponse::~ListMergeRequestDiscussionsResponse() = default;

void ListMergeRequestDiscussionsResponse::validate()
{
}

web::json::value ListMergeRequestDiscussionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestDiscussionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestDiscussionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestDiscussionDto>& ListMergeRequestDiscussionsResponse::getBody()
{
    return body_;
}

void ListMergeRequestDiscussionsResponse::setBody(const std::vector<MergeRequestDiscussionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestDiscussionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestDiscussionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



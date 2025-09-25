

#include "huaweicloud/codehub/v4/model/ListRepositoryMergeRequestsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryMergeRequestsResponse::ListRepositoryMergeRequestsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryMergeRequestsResponse::~ListRepositoryMergeRequestsResponse() = default;

void ListRepositoryMergeRequestsResponse::validate()
{
}

web::json::value ListRepositoryMergeRequestsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryMergeRequestsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestListBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestListBasicDto>& ListRepositoryMergeRequestsResponse::getBody()
{
    return body_;
}

void ListRepositoryMergeRequestsResponse::setBody(const std::vector<MergeRequestListBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryMergeRequestsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryMergeRequestsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



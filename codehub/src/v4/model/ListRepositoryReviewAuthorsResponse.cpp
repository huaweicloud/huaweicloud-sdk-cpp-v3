

#include "huaweicloud/codehub/v4/model/ListRepositoryReviewAuthorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryReviewAuthorsResponse::ListRepositoryReviewAuthorsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryReviewAuthorsResponse::~ListRepositoryReviewAuthorsResponse() = default;

void ListRepositoryReviewAuthorsResponse::validate()
{
}

web::json::value ListRepositoryReviewAuthorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryReviewAuthorsResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<UserBasicDto>& ListRepositoryReviewAuthorsResponse::getBody()
{
    return body_;
}

void ListRepositoryReviewAuthorsResponse::setBody(const std::vector<UserBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryReviewAuthorsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryReviewAuthorsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



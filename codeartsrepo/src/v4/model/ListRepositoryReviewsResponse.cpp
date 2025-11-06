

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryReviewsResponse::ListRepositoryReviewsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryReviewsResponse::~ListRepositoryReviewsResponse() = default;

void ListRepositoryReviewsResponse::validate()
{
}

web::json::value ListRepositoryReviewsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryReviewsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ReviewDto>& ListRepositoryReviewsResponse::getBody()
{
    return body_;
}

void ListRepositoryReviewsResponse::setBody(const std::vector<ReviewDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryReviewsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryReviewsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



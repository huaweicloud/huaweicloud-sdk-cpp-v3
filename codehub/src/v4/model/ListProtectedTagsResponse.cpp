

#include "huaweicloud/codehub/v4/model/ListProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProtectedTagsResponse::ListProtectedTagsResponse()
{
    bodyIsSet_ = false;
}

ListProtectedTagsResponse::~ListProtectedTagsResponse() = default;

void ListProtectedTagsResponse::validate()
{
}

web::json::value ListProtectedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProtectedTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryProtectedTagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryProtectedTagDto>& ListProtectedTagsResponse::getBody()
{
    return body_;
}

void ListProtectedTagsResponse::setBody(const std::vector<RepositoryProtectedTagDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProtectedTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProtectedTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



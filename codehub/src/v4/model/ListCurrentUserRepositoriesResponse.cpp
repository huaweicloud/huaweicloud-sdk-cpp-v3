

#include "huaweicloud/codehub/v4/model/ListCurrentUserRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCurrentUserRepositoriesResponse::ListCurrentUserRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListCurrentUserRepositoriesResponse::~ListCurrentUserRepositoriesResponse() = default;

void ListCurrentUserRepositoriesResponse::validate()
{
}

web::json::value ListCurrentUserRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCurrentUserRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositorySimplestDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositorySimplestDto>& ListCurrentUserRepositoriesResponse::getBody()
{
    return body_;
}

void ListCurrentUserRepositoriesResponse::setBody(const std::vector<RepositorySimplestDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCurrentUserRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCurrentUserRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



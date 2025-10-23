

#include "huaweicloud/codehub/v4/model/ListGroupRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupRepositoriesResponse::ListGroupRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListGroupRepositoriesResponse::~ListGroupRepositoriesResponse() = default;

void ListGroupRepositoriesResponse::validate()
{
}

web::json::value ListGroupRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BasicRepositoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<BasicRepositoryDto>& ListGroupRepositoriesResponse::getBody()
{
    return body_;
}

void ListGroupRepositoriesResponse::setBody(const std::vector<BasicRepositoryDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



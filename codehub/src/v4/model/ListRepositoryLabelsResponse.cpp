

#include "huaweicloud/codehub/v4/model/ListRepositoryLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryLabelsResponse::ListRepositoryLabelsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryLabelsResponse::~ListRepositoryLabelsResponse() = default;

void ListRepositoryLabelsResponse::validate()
{
}

web::json::value ListRepositoryLabelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryLabelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LabelBasicDto>& ListRepositoryLabelsResponse::getBody()
{
    return body_;
}

void ListRepositoryLabelsResponse::setBody(const std::vector<LabelBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryLabelsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryLabelsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



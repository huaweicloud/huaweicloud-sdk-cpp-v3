

#include "huaweicloud/cbr/v1/model/ListFeaturesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListFeaturesResponse::ListFeaturesResponse()
{
    bodyIsSet_ = false;
}

ListFeaturesResponse::~ListFeaturesResponse() = default;

void ListFeaturesResponse::validate()
{
}

web::json::value ListFeaturesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFeaturesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& ListFeaturesResponse::getBody()
{
    return body_;
}

void ListFeaturesResponse::setBody(const std::map<std::string, Object>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFeaturesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFeaturesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



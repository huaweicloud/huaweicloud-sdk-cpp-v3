

#include "huaweicloud/cbr/v1/model/ShowFeatureResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowFeatureResponse::ShowFeatureResponse()
{
    bodyIsSet_ = false;
}

ShowFeatureResponse::~ShowFeatureResponse() = default;

void ShowFeatureResponse::validate()
{
}

web::json::value ShowFeatureResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowFeatureResponse::fromJson(const web::json::value& val)
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


std::map<std::string, Object>& ShowFeatureResponse::getBody()
{
    return body_;
}

void ShowFeatureResponse::setBody(const std::map<std::string, Object>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowFeatureResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowFeatureResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



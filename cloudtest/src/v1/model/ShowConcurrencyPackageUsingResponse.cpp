

#include "huaweicloud/cloudtest/v1/model/ShowConcurrencyPackageUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowConcurrencyPackageUsingResponse::ShowConcurrencyPackageUsingResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowConcurrencyPackageUsingResponse::~ShowConcurrencyPackageUsingResponse() = default;

void ShowConcurrencyPackageUsingResponse::validate()
{
}

web::json::value ShowConcurrencyPackageUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowConcurrencyPackageUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowConcurrencyPackageUsingResponse::getBody() const
{
    return body_;
}

void ShowConcurrencyPackageUsingResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowConcurrencyPackageUsingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowConcurrencyPackageUsingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



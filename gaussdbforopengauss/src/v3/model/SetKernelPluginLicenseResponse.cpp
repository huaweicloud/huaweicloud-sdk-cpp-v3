

#include "huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetKernelPluginLicenseResponse::SetKernelPluginLicenseResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SetKernelPluginLicenseResponse::~SetKernelPluginLicenseResponse() = default;

void SetKernelPluginLicenseResponse::validate()
{
}

web::json::value SetKernelPluginLicenseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetKernelPluginLicenseResponse::fromJson(const web::json::value& val)
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


std::string SetKernelPluginLicenseResponse::getBody() const
{
    return body_;
}

void SetKernelPluginLicenseResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetKernelPluginLicenseResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetKernelPluginLicenseResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



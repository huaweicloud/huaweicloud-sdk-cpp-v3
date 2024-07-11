

#include "huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetKernelPluginLicenseRequestBody::SetKernelPluginLicenseRequestBody()
{
    licenseStr_ = "";
    licenseStrIsSet_ = false;
}

SetKernelPluginLicenseRequestBody::~SetKernelPluginLicenseRequestBody() = default;

void SetKernelPluginLicenseRequestBody::validate()
{
}

web::json::value SetKernelPluginLicenseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(licenseStrIsSet_) {
        val[utility::conversions::to_string_t("license_str")] = ModelBase::toJson(licenseStr_);
    }

    return val;
}
bool SetKernelPluginLicenseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("license_str"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("license_str"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicenseStr(refVal);
        }
    }
    return ok;
}


std::string SetKernelPluginLicenseRequestBody::getLicenseStr() const
{
    return licenseStr_;
}

void SetKernelPluginLicenseRequestBody::setLicenseStr(const std::string& value)
{
    licenseStr_ = value;
    licenseStrIsSet_ = true;
}

bool SetKernelPluginLicenseRequestBody::licenseStrIsSet() const
{
    return licenseStrIsSet_;
}

void SetKernelPluginLicenseRequestBody::unsetlicenseStr()
{
    licenseStrIsSet_ = false;
}

}
}
}
}
}



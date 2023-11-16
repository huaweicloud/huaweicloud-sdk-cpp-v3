

#include "huaweicloud/aad/v1/model/UpdatePackageIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePackageIpRequest::UpdatePackageIpRequest()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePackageIpRequest::~UpdatePackageIpRequest() = default;

void UpdatePackageIpRequest::validate()
{
}

web::json::value UpdatePackageIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePackageIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePackageIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePackageIpRequest::getPackageId() const
{
    return packageId_;
}

void UpdatePackageIpRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool UpdatePackageIpRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void UpdatePackageIpRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

UpdatePackageIpRequestBody UpdatePackageIpRequest::getBody() const
{
    return body_;
}

void UpdatePackageIpRequest::setBody(const UpdatePackageIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePackageIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePackageIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



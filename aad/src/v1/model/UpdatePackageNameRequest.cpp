

#include "huaweicloud/aad/v1/model/UpdatePackageNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePackageNameRequest::UpdatePackageNameRequest()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePackageNameRequest::~UpdatePackageNameRequest() = default;

void UpdatePackageNameRequest::validate()
{
}

web::json::value UpdatePackageNameRequest::toJson() const
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
bool UpdatePackageNameRequest::fromJson(const web::json::value& val)
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
            UpdatePackageNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePackageNameRequest::getPackageId() const
{
    return packageId_;
}

void UpdatePackageNameRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool UpdatePackageNameRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void UpdatePackageNameRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

UpdatePackageNameRequestBody UpdatePackageNameRequest::getBody() const
{
    return body_;
}

void UpdatePackageNameRequest::setBody(const UpdatePackageNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePackageNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePackageNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



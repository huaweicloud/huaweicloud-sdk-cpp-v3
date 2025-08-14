

#include "huaweicloud/metastudio/v1/model/DownloadTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DownloadTemplateRequest::DownloadTemplateRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
}

DownloadTemplateRequest::~DownloadTemplateRequest() = default;

void DownloadTemplateRequest::validate()
{
}

web::json::value DownloadTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool DownloadTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::string DownloadTemplateRequest::getAuthorization() const
{
    return authorization_;
}

void DownloadTemplateRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DownloadTemplateRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DownloadTemplateRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DownloadTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DownloadTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DownloadTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DownloadTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DownloadTemplateRequest::getXProjectId() const
{
    return xProjectId_;
}

void DownloadTemplateRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DownloadTemplateRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DownloadTemplateRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DownloadTemplateRequest::getResource() const
{
    return resource_;
}

void DownloadTemplateRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool DownloadTemplateRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void DownloadTemplateRequest::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}



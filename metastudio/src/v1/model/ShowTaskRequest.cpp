

#include "huaweicloud/metastudio/v1/model/ShowTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTaskRequest::ShowTaskRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowTaskRequest::~ShowTaskRequest() = default;

void ShowTaskRequest::validate()
{
}

web::json::value ShowTaskRequest::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ShowTaskRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTaskRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTaskRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTaskRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTaskRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowTaskRequest::getId() const
{
    return id_;
}

void ShowTaskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowTaskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/DeleteTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTaskRequest::DeleteTaskRequest()
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

DeleteTaskRequest::~DeleteTaskRequest() = default;

void DeleteTaskRequest::validate()
{
}

web::json::value DeleteTaskRequest::toJson() const
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
bool DeleteTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteTaskRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTaskRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteTaskRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteTaskRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteTaskRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteTaskRequest::getId() const
{
    return id_;
}

void DeleteTaskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteTaskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



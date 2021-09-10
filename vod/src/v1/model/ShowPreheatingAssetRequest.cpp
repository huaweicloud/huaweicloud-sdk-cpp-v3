

#include "huaweicloud/vod/v1/model/ShowPreheatingAssetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowPreheatingAssetRequest::ShowPreheatingAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowPreheatingAssetRequest::~ShowPreheatingAssetRequest() = default;

void ShowPreheatingAssetRequest::validate()
{
}

web::json::value ShowPreheatingAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool ShowPreheatingAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ShowPreheatingAssetRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPreheatingAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPreheatingAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPreheatingAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPreheatingAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPreheatingAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPreheatingAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPreheatingAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPreheatingAssetRequest::getTaskId() const
{
    return taskId_;
}

void ShowPreheatingAssetRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowPreheatingAssetRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowPreheatingAssetRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}



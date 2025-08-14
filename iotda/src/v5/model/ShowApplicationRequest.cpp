

#include "huaweicloud/iotda/v5/model/ShowApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowApplicationRequest::ShowApplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ShowApplicationRequest::~ShowApplicationRequest() = default;

void ShowApplicationRequest::validate()
{
}

web::json::value ShowApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool ShowApplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string ShowApplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowApplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowApplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowApplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowApplicationRequest::getAppId() const
{
    return appId_;
}

void ShowApplicationRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowApplicationRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowApplicationRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}



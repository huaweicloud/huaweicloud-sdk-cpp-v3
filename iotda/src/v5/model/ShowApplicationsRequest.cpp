

#include "huaweicloud/iotda/v5/model/ShowApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowApplicationsRequest::ShowApplicationsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    defaultApp_ = false;
    defaultAppIsSet_ = false;
}

ShowApplicationsRequest::~ShowApplicationsRequest() = default;

void ShowApplicationsRequest::validate()
{
}

web::json::value ShowApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(defaultAppIsSet_) {
        val[utility::conversions::to_string_t("default_app")] = ModelBase::toJson(defaultApp_);
    }

    return val;
}
bool ShowApplicationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default_app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_app"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultApp(refVal);
        }
    }
    return ok;
}


std::string ShowApplicationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowApplicationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowApplicationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowApplicationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool ShowApplicationsRequest::isDefaultApp() const
{
    return defaultApp_;
}

void ShowApplicationsRequest::setDefaultApp(bool value)
{
    defaultApp_ = value;
    defaultAppIsSet_ = true;
}

bool ShowApplicationsRequest::defaultAppIsSet() const
{
    return defaultAppIsSet_;
}

void ShowApplicationsRequest::unsetdefaultApp()
{
    defaultAppIsSet_ = false;
}

}
}
}
}
}



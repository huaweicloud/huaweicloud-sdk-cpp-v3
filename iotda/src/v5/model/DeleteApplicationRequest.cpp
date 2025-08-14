

#include "huaweicloud/iotda/v5/model/DeleteApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteApplicationRequest::DeleteApplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteApplicationRequest::~DeleteApplicationRequest() = default;

void DeleteApplicationRequest::validate()
{
}

web::json::value DeleteApplicationRequest::toJson() const
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
bool DeleteApplicationRequest::fromJson(const web::json::value& val)
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


std::string DeleteApplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteApplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteApplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteApplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteApplicationRequest::getAppId() const
{
    return appId_;
}

void DeleteApplicationRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteApplicationRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteApplicationRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}



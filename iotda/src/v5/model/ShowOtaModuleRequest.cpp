

#include "huaweicloud/iotda/v5/model/ShowOtaModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowOtaModuleRequest::ShowOtaModuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
}

ShowOtaModuleRequest::~ShowOtaModuleRequest() = default;

void ShowOtaModuleRequest::validate()
{
}

web::json::value ShowOtaModuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }

    return val;
}
bool ShowOtaModuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    return ok;
}


std::string ShowOtaModuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowOtaModuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowOtaModuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowOtaModuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowOtaModuleRequest::getModuleId() const
{
    return moduleId_;
}

void ShowOtaModuleRequest::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ShowOtaModuleRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ShowOtaModuleRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

}
}
}
}
}



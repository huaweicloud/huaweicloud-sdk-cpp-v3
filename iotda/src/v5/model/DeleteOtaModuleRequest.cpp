

#include "huaweicloud/iotda/v5/model/DeleteOtaModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteOtaModuleRequest::DeleteOtaModuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
}

DeleteOtaModuleRequest::~DeleteOtaModuleRequest() = default;

void DeleteOtaModuleRequest::validate()
{
}

web::json::value DeleteOtaModuleRequest::toJson() const
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
bool DeleteOtaModuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteOtaModuleRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteOtaModuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteOtaModuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteOtaModuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteOtaModuleRequest::getModuleId() const
{
    return moduleId_;
}

void DeleteOtaModuleRequest::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool DeleteOtaModuleRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void DeleteOtaModuleRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

}
}
}
}
}



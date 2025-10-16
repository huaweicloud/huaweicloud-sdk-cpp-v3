

#include "huaweicloud/iotda/v5/model/UpdateOtaModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateOtaModuleRequest::UpdateOtaModuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateOtaModuleRequest::~UpdateOtaModuleRequest() = default;

void UpdateOtaModuleRequest::validate()
{
}

web::json::value UpdateOtaModuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateOtaModuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateOtaModule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateOtaModuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateOtaModuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateOtaModuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateOtaModuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateOtaModuleRequest::getModuleId() const
{
    return moduleId_;
}

void UpdateOtaModuleRequest::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool UpdateOtaModuleRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void UpdateOtaModuleRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

UpdateOtaModule UpdateOtaModuleRequest::getBody() const
{
    return body_;
}

void UpdateOtaModuleRequest::setBody(const UpdateOtaModule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateOtaModuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateOtaModuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



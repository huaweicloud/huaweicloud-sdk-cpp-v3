

#include "huaweicloud/cce/v3/model/RemoveNodesTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RemoveNodesTask::RemoveNodesTask()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

RemoveNodesTask::~RemoveNodesTask() = default;

void RemoveNodesTask::validate()
{
}

web::json::value RemoveNodesTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RemoveNodesTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            RemoveNodesSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            TaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string RemoveNodesTask::getApiVersion() const
{
    return apiVersion_;
}

void RemoveNodesTask::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool RemoveNodesTask::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void RemoveNodesTask::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string RemoveNodesTask::getKind() const
{
    return kind_;
}

void RemoveNodesTask::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool RemoveNodesTask::kindIsSet() const
{
    return kindIsSet_;
}

void RemoveNodesTask::unsetkind()
{
    kindIsSet_ = false;
}

RemoveNodesSpec RemoveNodesTask::getSpec() const
{
    return spec_;
}

void RemoveNodesTask::setSpec(const RemoveNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool RemoveNodesTask::specIsSet() const
{
    return specIsSet_;
}

void RemoveNodesTask::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus RemoveNodesTask::getStatus() const
{
    return status_;
}

void RemoveNodesTask::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoveNodesTask::statusIsSet() const
{
    return statusIsSet_;
}

void RemoveNodesTask::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



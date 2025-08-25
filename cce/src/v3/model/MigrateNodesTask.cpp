

#include "huaweicloud/cce/v3/model/MigrateNodesTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodesTask::MigrateNodesTask()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

MigrateNodesTask::~MigrateNodesTask() = default;

void MigrateNodesTask::validate()
{
}

web::json::value MigrateNodesTask::toJson() const
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
bool MigrateNodesTask::fromJson(const web::json::value& val)
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
            MigrateNodesSpec refVal;
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


std::string MigrateNodesTask::getApiVersion() const
{
    return apiVersion_;
}

void MigrateNodesTask::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool MigrateNodesTask::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void MigrateNodesTask::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string MigrateNodesTask::getKind() const
{
    return kind_;
}

void MigrateNodesTask::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool MigrateNodesTask::kindIsSet() const
{
    return kindIsSet_;
}

void MigrateNodesTask::unsetkind()
{
    kindIsSet_ = false;
}

MigrateNodesSpec MigrateNodesTask::getSpec() const
{
    return spec_;
}

void MigrateNodesTask::setSpec(const MigrateNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool MigrateNodesTask::specIsSet() const
{
    return specIsSet_;
}

void MigrateNodesTask::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus MigrateNodesTask::getStatus() const
{
    return status_;
}

void MigrateNodesTask::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MigrateNodesTask::statusIsSet() const
{
    return statusIsSet_;
}

void MigrateNodesTask::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



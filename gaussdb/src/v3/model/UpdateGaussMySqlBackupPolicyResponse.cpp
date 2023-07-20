

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlBackupPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlBackupPolicyResponse::UpdateGaussMySqlBackupPolicyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

UpdateGaussMySqlBackupPolicyResponse::~UpdateGaussMySqlBackupPolicyResponse() = default;

void UpdateGaussMySqlBackupPolicyResponse::validate()
{
}

web::json::value UpdateGaussMySqlBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}

bool UpdateGaussMySqlBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}

std::string UpdateGaussMySqlBackupPolicyResponse::getStatus() const
{
    return status_;
}

void UpdateGaussMySqlBackupPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateGaussMySqlBackupPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateGaussMySqlBackupPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlBackupPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlBackupPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateGaussMySqlBackupPolicyResponse::getInstanceName() const
{
    return instanceName_;
}

void UpdateGaussMySqlBackupPolicyResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void UpdateGaussMySqlBackupPolicyResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}



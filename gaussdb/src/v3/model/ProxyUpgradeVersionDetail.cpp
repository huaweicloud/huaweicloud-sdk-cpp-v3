

#include "huaweicloud/gaussdb/v3/model/ProxyUpgradeVersionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyUpgradeVersionDetail::ProxyUpgradeVersionDetail()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ProxyUpgradeVersionDetail::~ProxyUpgradeVersionDetail() = default;

void ProxyUpgradeVersionDetail::validate()
{
}

web::json::value ProxyUpgradeVersionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool ProxyUpgradeVersionDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string ProxyUpgradeVersionDetail::getInstanceId() const
{
    return instanceId_;
}

void ProxyUpgradeVersionDetail::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ProxyUpgradeVersionDetail::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ProxyUpgradeVersionDetail::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ProxyUpgradeVersionDetail::getWorkflowId() const
{
    return workflowId_;
}

void ProxyUpgradeVersionDetail::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ProxyUpgradeVersionDetail::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ProxyUpgradeVersionDetail::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ProxyUpgradeVersionDetail::getState() const
{
    return state_;
}

void ProxyUpgradeVersionDetail::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProxyUpgradeVersionDetail::stateIsSet() const
{
    return stateIsSet_;
}

void ProxyUpgradeVersionDetail::unsetstate()
{
    stateIsSet_ = false;
}

std::string ProxyUpgradeVersionDetail::getErrorMessage() const
{
    return errorMessage_;
}

void ProxyUpgradeVersionDetail::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ProxyUpgradeVersionDetail::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ProxyUpgradeVersionDetail::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}



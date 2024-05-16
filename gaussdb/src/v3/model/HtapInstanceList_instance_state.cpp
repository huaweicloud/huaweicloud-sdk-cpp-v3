

#include "huaweicloud/gaussdb/v3/model/HtapInstanceList_instance_state.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapInstanceList_instance_state::HtapInstanceList_instance_state()
{
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    createFailErrorCode_ = "";
    createFailErrorCodeIsSet_ = false;
    failMessage_ = "";
    failMessageIsSet_ = false;
    waitRestartForParams_ = false;
    waitRestartForParamsIsSet_ = false;
}

HtapInstanceList_instance_state::~HtapInstanceList_instance_state() = default;

void HtapInstanceList_instance_state::validate()
{
}

web::json::value HtapInstanceList_instance_state::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(createFailErrorCodeIsSet_) {
        val[utility::conversions::to_string_t("create_fail_error_code")] = ModelBase::toJson(createFailErrorCode_);
    }
    if(failMessageIsSet_) {
        val[utility::conversions::to_string_t("fail_message")] = ModelBase::toJson(failMessage_);
    }
    if(waitRestartForParamsIsSet_) {
        val[utility::conversions::to_string_t("wait_restart_for_params")] = ModelBase::toJson(waitRestartForParams_);
    }

    return val;
}
bool HtapInstanceList_instance_state::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_fail_error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_fail_error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateFailErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_restart_for_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_restart_for_params"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitRestartForParams(refVal);
        }
    }
    return ok;
}


std::string HtapInstanceList_instance_state::getInstanceStatus() const
{
    return instanceStatus_;
}

void HtapInstanceList_instance_state::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool HtapInstanceList_instance_state::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void HtapInstanceList_instance_state::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string HtapInstanceList_instance_state::getCreateFailErrorCode() const
{
    return createFailErrorCode_;
}

void HtapInstanceList_instance_state::setCreateFailErrorCode(const std::string& value)
{
    createFailErrorCode_ = value;
    createFailErrorCodeIsSet_ = true;
}

bool HtapInstanceList_instance_state::createFailErrorCodeIsSet() const
{
    return createFailErrorCodeIsSet_;
}

void HtapInstanceList_instance_state::unsetcreateFailErrorCode()
{
    createFailErrorCodeIsSet_ = false;
}

std::string HtapInstanceList_instance_state::getFailMessage() const
{
    return failMessage_;
}

void HtapInstanceList_instance_state::setFailMessage(const std::string& value)
{
    failMessage_ = value;
    failMessageIsSet_ = true;
}

bool HtapInstanceList_instance_state::failMessageIsSet() const
{
    return failMessageIsSet_;
}

void HtapInstanceList_instance_state::unsetfailMessage()
{
    failMessageIsSet_ = false;
}

bool HtapInstanceList_instance_state::isWaitRestartForParams() const
{
    return waitRestartForParams_;
}

void HtapInstanceList_instance_state::setWaitRestartForParams(bool value)
{
    waitRestartForParams_ = value;
    waitRestartForParamsIsSet_ = true;
}

bool HtapInstanceList_instance_state::waitRestartForParamsIsSet() const
{
    return waitRestartForParamsIsSet_;
}

void HtapInstanceList_instance_state::unsetwaitRestartForParams()
{
    waitRestartForParamsIsSet_ = false;
}

}
}
}
}
}



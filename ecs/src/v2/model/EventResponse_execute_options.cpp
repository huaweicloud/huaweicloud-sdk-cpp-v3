

#include "huaweicloud/ecs/v2/model/EventResponse_execute_options.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




EventResponse_execute_options::EventResponse_execute_options()
{
    device_ = "";
    deviceIsSet_ = false;
    wwn_ = "";
    wwnIsSet_ = false;
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    resizeTargetFlavorId_ = "";
    resizeTargetFlavorIdIsSet_ = false;
    migratePolicy_ = "";
    migratePolicyIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
}

EventResponse_execute_options::~EventResponse_execute_options() = default;

void EventResponse_execute_options::validate()
{
}

web::json::value EventResponse_execute_options::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(wwnIsSet_) {
        val[utility::conversions::to_string_t("wwn")] = ModelBase::toJson(wwn_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(resizeTargetFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("resize_target_flavor_id")] = ModelBase::toJson(resizeTargetFlavorId_);
    }
    if(migratePolicyIsSet_) {
        val[utility::conversions::to_string_t("migrate_policy")] = ModelBase::toJson(migratePolicy_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }

    return val;
}
bool EventResponse_execute_options::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wwn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wwn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWwn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resize_target_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize_target_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResizeTargetFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrate_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrate_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigratePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    return ok;
}


std::string EventResponse_execute_options::getDevice() const
{
    return device_;
}

void EventResponse_execute_options::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool EventResponse_execute_options::deviceIsSet() const
{
    return deviceIsSet_;
}

void EventResponse_execute_options::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string EventResponse_execute_options::getWwn() const
{
    return wwn_;
}

void EventResponse_execute_options::setWwn(const std::string& value)
{
    wwn_ = value;
    wwnIsSet_ = true;
}

bool EventResponse_execute_options::wwnIsSet() const
{
    return wwnIsSet_;
}

void EventResponse_execute_options::unsetwwn()
{
    wwnIsSet_ = false;
}

std::string EventResponse_execute_options::getSerialNumber() const
{
    return serialNumber_;
}

void EventResponse_execute_options::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool EventResponse_execute_options::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void EventResponse_execute_options::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string EventResponse_execute_options::getResizeTargetFlavorId() const
{
    return resizeTargetFlavorId_;
}

void EventResponse_execute_options::setResizeTargetFlavorId(const std::string& value)
{
    resizeTargetFlavorId_ = value;
    resizeTargetFlavorIdIsSet_ = true;
}

bool EventResponse_execute_options::resizeTargetFlavorIdIsSet() const
{
    return resizeTargetFlavorIdIsSet_;
}

void EventResponse_execute_options::unsetresizeTargetFlavorId()
{
    resizeTargetFlavorIdIsSet_ = false;
}

std::string EventResponse_execute_options::getMigratePolicy() const
{
    return migratePolicy_;
}

void EventResponse_execute_options::setMigratePolicy(const std::string& value)
{
    migratePolicy_ = value;
    migratePolicyIsSet_ = true;
}

bool EventResponse_execute_options::migratePolicyIsSet() const
{
    return migratePolicyIsSet_;
}

void EventResponse_execute_options::unsetmigratePolicy()
{
    migratePolicyIsSet_ = false;
}

std::string EventResponse_execute_options::getExecutor() const
{
    return executor_;
}

void EventResponse_execute_options::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool EventResponse_execute_options::executorIsSet() const
{
    return executorIsSet_;
}

void EventResponse_execute_options::unsetexecutor()
{
    executorIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/HarmonySoftBusResponseDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




HarmonySoftBusResponseDTO::HarmonySoftBusResponseDTO()
{
    busId_ = "";
    busIdIsSet_ = false;
    busName_ = "";
    busNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

HarmonySoftBusResponseDTO::~HarmonySoftBusResponseDTO() = default;

void HarmonySoftBusResponseDTO::validate()
{
}

web::json::value HarmonySoftBusResponseDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(busIdIsSet_) {
        val[utility::conversions::to_string_t("bus_id")] = ModelBase::toJson(busId_);
    }
    if(busNameIsSet_) {
        val[utility::conversions::to_string_t("bus_name")] = ModelBase::toJson(busName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool HarmonySoftBusResponseDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bus_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bus_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bus_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bus_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string HarmonySoftBusResponseDTO::getBusId() const
{
    return busId_;
}

void HarmonySoftBusResponseDTO::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool HarmonySoftBusResponseDTO::busIdIsSet() const
{
    return busIdIsSet_;
}

void HarmonySoftBusResponseDTO::unsetbusId()
{
    busIdIsSet_ = false;
}

std::string HarmonySoftBusResponseDTO::getBusName() const
{
    return busName_;
}

void HarmonySoftBusResponseDTO::setBusName(const std::string& value)
{
    busName_ = value;
    busNameIsSet_ = true;
}

bool HarmonySoftBusResponseDTO::busNameIsSet() const
{
    return busNameIsSet_;
}

void HarmonySoftBusResponseDTO::unsetbusName()
{
    busNameIsSet_ = false;
}

std::string HarmonySoftBusResponseDTO::getGroupId() const
{
    return groupId_;
}

void HarmonySoftBusResponseDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool HarmonySoftBusResponseDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void HarmonySoftBusResponseDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string HarmonySoftBusResponseDTO::getAppId() const
{
    return appId_;
}

void HarmonySoftBusResponseDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool HarmonySoftBusResponseDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void HarmonySoftBusResponseDTO::unsetappId()
{
    appIdIsSet_ = false;
}

std::string HarmonySoftBusResponseDTO::getStatus() const
{
    return status_;
}

void HarmonySoftBusResponseDTO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HarmonySoftBusResponseDTO::statusIsSet() const
{
    return statusIsSet_;
}

void HarmonySoftBusResponseDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



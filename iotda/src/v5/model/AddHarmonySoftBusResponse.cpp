

#include "huaweicloud/iotda/v5/model/AddHarmonySoftBusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddHarmonySoftBusResponse::AddHarmonySoftBusResponse()
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

AddHarmonySoftBusResponse::~AddHarmonySoftBusResponse() = default;

void AddHarmonySoftBusResponse::validate()
{
}

web::json::value AddHarmonySoftBusResponse::toJson() const
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
bool AddHarmonySoftBusResponse::fromJson(const web::json::value& val)
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


std::string AddHarmonySoftBusResponse::getBusId() const
{
    return busId_;
}

void AddHarmonySoftBusResponse::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool AddHarmonySoftBusResponse::busIdIsSet() const
{
    return busIdIsSet_;
}

void AddHarmonySoftBusResponse::unsetbusId()
{
    busIdIsSet_ = false;
}

std::string AddHarmonySoftBusResponse::getBusName() const
{
    return busName_;
}

void AddHarmonySoftBusResponse::setBusName(const std::string& value)
{
    busName_ = value;
    busNameIsSet_ = true;
}

bool AddHarmonySoftBusResponse::busNameIsSet() const
{
    return busNameIsSet_;
}

void AddHarmonySoftBusResponse::unsetbusName()
{
    busNameIsSet_ = false;
}

std::string AddHarmonySoftBusResponse::getGroupId() const
{
    return groupId_;
}

void AddHarmonySoftBusResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AddHarmonySoftBusResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AddHarmonySoftBusResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string AddHarmonySoftBusResponse::getAppId() const
{
    return appId_;
}

void AddHarmonySoftBusResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddHarmonySoftBusResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddHarmonySoftBusResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AddHarmonySoftBusResponse::getStatus() const
{
    return status_;
}

void AddHarmonySoftBusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddHarmonySoftBusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddHarmonySoftBusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/AddHarmonySoftBusDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddHarmonySoftBusDTO::AddHarmonySoftBusDTO()
{
    busName_ = "";
    busNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

AddHarmonySoftBusDTO::~AddHarmonySoftBusDTO() = default;

void AddHarmonySoftBusDTO::validate()
{
}

web::json::value AddHarmonySoftBusDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(busNameIsSet_) {
        val[utility::conversions::to_string_t("bus_name")] = ModelBase::toJson(busName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AddHarmonySoftBusDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string AddHarmonySoftBusDTO::getBusName() const
{
    return busName_;
}

void AddHarmonySoftBusDTO::setBusName(const std::string& value)
{
    busName_ = value;
    busNameIsSet_ = true;
}

bool AddHarmonySoftBusDTO::busNameIsSet() const
{
    return busNameIsSet_;
}

void AddHarmonySoftBusDTO::unsetbusName()
{
    busNameIsSet_ = false;
}

std::string AddHarmonySoftBusDTO::getGroupId() const
{
    return groupId_;
}

void AddHarmonySoftBusDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AddHarmonySoftBusDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AddHarmonySoftBusDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string AddHarmonySoftBusDTO::getAppId() const
{
    return appId_;
}

void AddHarmonySoftBusDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddHarmonySoftBusDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddHarmonySoftBusDTO::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/AntiVirusSwitchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AntiVirusSwitchDto::AntiVirusSwitchDto()
{
    antiVirusStatus_ = 0;
    antiVirusStatusIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

AntiVirusSwitchDto::~AntiVirusSwitchDto() = default;

void AntiVirusSwitchDto::validate()
{
}

web::json::value AntiVirusSwitchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(antiVirusStatusIsSet_) {
        val[utility::conversions::to_string_t("anti_virus_status")] = ModelBase::toJson(antiVirusStatus_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool AntiVirusSwitchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("anti_virus_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("anti_virus_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAntiVirusStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    return ok;
}


int32_t AntiVirusSwitchDto::getAntiVirusStatus() const
{
    return antiVirusStatus_;
}

void AntiVirusSwitchDto::setAntiVirusStatus(int32_t value)
{
    antiVirusStatus_ = value;
    antiVirusStatusIsSet_ = true;
}

bool AntiVirusSwitchDto::antiVirusStatusIsSet() const
{
    return antiVirusStatusIsSet_;
}

void AntiVirusSwitchDto::unsetantiVirusStatus()
{
    antiVirusStatusIsSet_ = false;
}

std::string AntiVirusSwitchDto::getObjectId() const
{
    return objectId_;
}

void AntiVirusSwitchDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AntiVirusSwitchDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AntiVirusSwitchDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}



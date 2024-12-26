

#include "huaweicloud/cfw/v1/model/SwitchEipStatusDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchEipStatusDto::SwitchEipStatusDto()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

SwitchEipStatusDto::~SwitchEipStatusDto() = default;

void SwitchEipStatusDto::validate()
{
}

web::json::value SwitchEipStatusDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchEipStatusDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchEipStatusDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void SwitchEipStatusDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool SwitchEipStatusDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void SwitchEipStatusDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string SwitchEipStatusDto::getObjectId() const
{
    return objectId_;
}

void SwitchEipStatusDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool SwitchEipStatusDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void SwitchEipStatusDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t SwitchEipStatusDto::getStatus() const
{
    return status_;
}

void SwitchEipStatusDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchEipStatusDto::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchEipStatusDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



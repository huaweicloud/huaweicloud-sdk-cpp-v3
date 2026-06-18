

#include "huaweicloud/rds/v3/model/BatchResizeFlavorRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchResizeFlavorRequestBody::BatchResizeFlavorRequestBody()
{
    instanceIdsIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
    autoPay_ = false;
    autoPayIsSet_ = false;
    occupyIp_ = false;
    occupyIpIsSet_ = false;
}

BatchResizeFlavorRequestBody::~BatchResizeFlavorRequestBody() = default;

void BatchResizeFlavorRequestBody::validate()
{
}

web::json::value BatchResizeFlavorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(autoPayIsSet_) {
        val[utility::conversions::to_string_t("auto_pay")] = ModelBase::toJson(autoPay_);
    }
    if(occupyIpIsSet_) {
        val[utility::conversions::to_string_t("occupy_ip")] = ModelBase::toJson(occupyIp_);
    }

    return val;
}
bool BatchResizeFlavorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occupy_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occupy_ip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOccupyIp(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchResizeFlavorRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchResizeFlavorRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchResizeFlavorRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchResizeFlavorRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string BatchResizeFlavorRequestBody::getSpecCode() const
{
    return specCode_;
}

void BatchResizeFlavorRequestBody::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool BatchResizeFlavorRequestBody::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void BatchResizeFlavorRequestBody::unsetspecCode()
{
    specCodeIsSet_ = false;
}

bool BatchResizeFlavorRequestBody::isDelay() const
{
    return delay_;
}

void BatchResizeFlavorRequestBody::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool BatchResizeFlavorRequestBody::delayIsSet() const
{
    return delayIsSet_;
}

void BatchResizeFlavorRequestBody::unsetdelay()
{
    delayIsSet_ = false;
}

bool BatchResizeFlavorRequestBody::isAutoPay() const
{
    return autoPay_;
}

void BatchResizeFlavorRequestBody::setAutoPay(bool value)
{
    autoPay_ = value;
    autoPayIsSet_ = true;
}

bool BatchResizeFlavorRequestBody::autoPayIsSet() const
{
    return autoPayIsSet_;
}

void BatchResizeFlavorRequestBody::unsetautoPay()
{
    autoPayIsSet_ = false;
}

bool BatchResizeFlavorRequestBody::isOccupyIp() const
{
    return occupyIp_;
}

void BatchResizeFlavorRequestBody::setOccupyIp(bool value)
{
    occupyIp_ = value;
    occupyIpIsSet_ = true;
}

bool BatchResizeFlavorRequestBody::occupyIpIsSet() const
{
    return occupyIpIsSet_;
}

void BatchResizeFlavorRequestBody::unsetoccupyIp()
{
    occupyIpIsSet_ = false;
}

}
}
}
}
}



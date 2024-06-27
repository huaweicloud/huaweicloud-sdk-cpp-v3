

#include "huaweicloud/gaussdb/v3/model/ClickHouseResizeFlavorRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseResizeFlavorRequestBody::ClickHouseResizeFlavorRequestBody()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ClickHouseResizeFlavorRequestBody::~ClickHouseResizeFlavorRequestBody() = default;

void ClickHouseResizeFlavorRequestBody::validate()
{
}

web::json::value ClickHouseResizeFlavorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ClickHouseResizeFlavorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ClickHouseResizeFlavorRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void ClickHouseResizeFlavorRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ClickHouseResizeFlavorRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ClickHouseResizeFlavorRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

bool ClickHouseResizeFlavorRequestBody::isDelay() const
{
    return delay_;
}

void ClickHouseResizeFlavorRequestBody::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool ClickHouseResizeFlavorRequestBody::delayIsSet() const
{
    return delayIsSet_;
}

void ClickHouseResizeFlavorRequestBody::unsetdelay()
{
    delayIsSet_ = false;
}

std::string ClickHouseResizeFlavorRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ClickHouseResizeFlavorRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ClickHouseResizeFlavorRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ClickHouseResizeFlavorRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}



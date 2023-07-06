

#include "huaweicloud/mpc/v1/model/VideoSaturation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoSaturation::VideoSaturation()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
    saturation_ = "";
    saturationIsSet_ = false;
}

VideoSaturation::~VideoSaturation() = default;

void VideoSaturation::validate()
{
}

web::json::value VideoSaturation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionOrderIsSet_) {
        val[utility::conversions::to_string_t("execution_order")] = ModelBase::toJson(executionOrder_);
    }
    if(saturationIsSet_) {
        val[utility::conversions::to_string_t("saturation")] = ModelBase::toJson(saturation_);
    }

    return val;
}

bool VideoSaturation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("saturation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("saturation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaturation(refVal);
        }
    }
    return ok;
}

std::string VideoSaturation::getName() const
{
    return name_;
}

void VideoSaturation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoSaturation::nameIsSet() const
{
    return nameIsSet_;
}

void VideoSaturation::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoSaturation::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoSaturation::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoSaturation::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoSaturation::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

std::string VideoSaturation::getSaturation() const
{
    return saturation_;
}

void VideoSaturation::setSaturation(const std::string& value)
{
    saturation_ = value;
    saturationIsSet_ = true;
}

bool VideoSaturation::saturationIsSet() const
{
    return saturationIsSet_;
}

void VideoSaturation::unsetsaturation()
{
    saturationIsSet_ = false;
}

}
}
}
}
}



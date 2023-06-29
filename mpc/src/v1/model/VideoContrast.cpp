

#include "huaweicloud/mpc/v1/model/VideoContrast.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoContrast::VideoContrast()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
    contrast_ = "";
    contrastIsSet_ = false;
    brightness_ = "";
    brightnessIsSet_ = false;
}

VideoContrast::~VideoContrast() = default;

void VideoContrast::validate()
{
}

web::json::value VideoContrast::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionOrderIsSet_) {
        val[utility::conversions::to_string_t("execution_order")] = ModelBase::toJson(executionOrder_);
    }
    if(contrastIsSet_) {
        val[utility::conversions::to_string_t("contrast")] = ModelBase::toJson(contrast_);
    }
    if(brightnessIsSet_) {
        val[utility::conversions::to_string_t("brightness")] = ModelBase::toJson(brightness_);
    }

    return val;
}

bool VideoContrast::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("contrast"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contrast"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContrast(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("brightness"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brightness"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBrightness(refVal);
        }
    }
    return ok;
}


std::string VideoContrast::getName() const
{
    return name_;
}

void VideoContrast::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoContrast::nameIsSet() const
{
    return nameIsSet_;
}

void VideoContrast::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoContrast::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoContrast::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoContrast::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoContrast::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

std::string VideoContrast::getContrast() const
{
    return contrast_;
}

void VideoContrast::setContrast(const std::string& value)
{
    contrast_ = value;
    contrastIsSet_ = true;
}

bool VideoContrast::contrastIsSet() const
{
    return contrastIsSet_;
}

void VideoContrast::unsetcontrast()
{
    contrastIsSet_ = false;
}

std::string VideoContrast::getBrightness() const
{
    return brightness_;
}

void VideoContrast::setBrightness(const std::string& value)
{
    brightness_ = value;
    brightnessIsSet_ = true;
}

bool VideoContrast::brightnessIsSet() const
{
    return brightnessIsSet_;
}

void VideoContrast::unsetbrightness()
{
    brightnessIsSet_ = false;
}

}
}
}
}
}



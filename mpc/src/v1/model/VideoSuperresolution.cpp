

#include "huaweicloud/mpc/v1/model/VideoSuperresolution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoSuperresolution::VideoSuperresolution()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
    scale_ = "";
    scaleIsSet_ = false;
}

VideoSuperresolution::~VideoSuperresolution() = default;

void VideoSuperresolution::validate()
{
}

web::json::value VideoSuperresolution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionOrderIsSet_) {
        val[utility::conversions::to_string_t("execution_order")] = ModelBase::toJson(executionOrder_);
    }
    if(scaleIsSet_) {
        val[utility::conversions::to_string_t("scale")] = ModelBase::toJson(scale_);
    }

    return val;
}
bool VideoSuperresolution::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScale(refVal);
        }
    }
    return ok;
}


std::string VideoSuperresolution::getName() const
{
    return name_;
}

void VideoSuperresolution::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoSuperresolution::nameIsSet() const
{
    return nameIsSet_;
}

void VideoSuperresolution::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoSuperresolution::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoSuperresolution::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoSuperresolution::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoSuperresolution::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

std::string VideoSuperresolution::getScale() const
{
    return scale_;
}

void VideoSuperresolution::setScale(const std::string& value)
{
    scale_ = value;
    scaleIsSet_ = true;
}

bool VideoSuperresolution::scaleIsSet() const
{
    return scaleIsSet_;
}

void VideoSuperresolution::unsetscale()
{
    scaleIsSet_ = false;
}

}
}
}
}
}



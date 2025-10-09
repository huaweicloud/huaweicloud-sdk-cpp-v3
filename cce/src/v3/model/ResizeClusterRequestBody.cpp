

#include "huaweicloud/cce/v3/model/ResizeClusterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResizeClusterRequestBody::ResizeClusterRequestBody()
{
    flavorResize_ = "";
    flavorResizeIsSet_ = false;
    skippedTasksIsSet_ = false;
    extendParamIsSet_ = false;
}

ResizeClusterRequestBody::~ResizeClusterRequestBody() = default;

void ResizeClusterRequestBody::validate()
{
}

web::json::value ResizeClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorResizeIsSet_) {
        val[utility::conversions::to_string_t("flavorResize")] = ModelBase::toJson(flavorResize_);
    }
    if(skippedTasksIsSet_) {
        val[utility::conversions::to_string_t("skippedTasks")] = ModelBase::toJson(skippedTasks_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool ResizeClusterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavorResize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorResize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorResize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skippedTasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skippedTasks"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            ResizeClusterRequestBody_extendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::string ResizeClusterRequestBody::getFlavorResize() const
{
    return flavorResize_;
}

void ResizeClusterRequestBody::setFlavorResize(const std::string& value)
{
    flavorResize_ = value;
    flavorResizeIsSet_ = true;
}

bool ResizeClusterRequestBody::flavorResizeIsSet() const
{
    return flavorResizeIsSet_;
}

void ResizeClusterRequestBody::unsetflavorResize()
{
    flavorResizeIsSet_ = false;
}

std::vector<std::string>& ResizeClusterRequestBody::getSkippedTasks()
{
    return skippedTasks_;
}

void ResizeClusterRequestBody::setSkippedTasks(const std::vector<std::string>& value)
{
    skippedTasks_ = value;
    skippedTasksIsSet_ = true;
}

bool ResizeClusterRequestBody::skippedTasksIsSet() const
{
    return skippedTasksIsSet_;
}

void ResizeClusterRequestBody::unsetskippedTasks()
{
    skippedTasksIsSet_ = false;
}

ResizeClusterRequestBody_extendParam ResizeClusterRequestBody::getExtendParam() const
{
    return extendParam_;
}

void ResizeClusterRequestBody::setExtendParam(const ResizeClusterRequestBody_extendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool ResizeClusterRequestBody::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void ResizeClusterRequestBody::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}



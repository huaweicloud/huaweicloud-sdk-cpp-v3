

#include "huaweicloud/ecs/v2/model/ResizePrePaidServerOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePrePaidServerOption::ResizePrePaidServerOption()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
    extendparamIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    cpuOptionsIsSet_ = false;
}

ResizePrePaidServerOption::~ResizePrePaidServerOption() = default;

void ResizePrePaidServerOption::validate()
{
}

web::json::value ResizePrePaidServerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(cpuOptionsIsSet_) {
        val[utility::conversions::to_string_t("cpu_options")] = ModelBase::toJson(cpuOptions_);
    }

    return val;
}
bool ResizePrePaidServerOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            ResizeServerExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_options"));
        if(!fieldValue.is_null())
        {
            CpuOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuOptions(refVal);
        }
    }
    return ok;
}


std::string ResizePrePaidServerOption::getFlavorRef() const
{
    return flavorRef_;
}

void ResizePrePaidServerOption::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ResizePrePaidServerOption::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ResizePrePaidServerOption::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string ResizePrePaidServerOption::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void ResizePrePaidServerOption::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool ResizePrePaidServerOption::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void ResizePrePaidServerOption::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

ResizeServerExtendParam ResizePrePaidServerOption::getExtendparam() const
{
    return extendparam_;
}

void ResizePrePaidServerOption::setExtendparam(const ResizeServerExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool ResizePrePaidServerOption::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void ResizePrePaidServerOption::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::string ResizePrePaidServerOption::getMode() const
{
    return mode_;
}

void ResizePrePaidServerOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ResizePrePaidServerOption::modeIsSet() const
{
    return modeIsSet_;
}

void ResizePrePaidServerOption::unsetmode()
{
    modeIsSet_ = false;
}

CpuOptions ResizePrePaidServerOption::getCpuOptions() const
{
    return cpuOptions_;
}

void ResizePrePaidServerOption::setCpuOptions(const CpuOptions& value)
{
    cpuOptions_ = value;
    cpuOptionsIsSet_ = true;
}

bool ResizePrePaidServerOption::cpuOptionsIsSet() const
{
    return cpuOptionsIsSet_;
}

void ResizePrePaidServerOption::unsetcpuOptions()
{
    cpuOptionsIsSet_ = false;
}

}
}
}
}
}



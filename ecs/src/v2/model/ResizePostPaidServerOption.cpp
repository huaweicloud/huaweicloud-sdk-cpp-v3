

#include "huaweicloud/ecs/v2/model/ResizePostPaidServerOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePostPaidServerOption::ResizePostPaidServerOption()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    cpuOptionsIsSet_ = false;
}

ResizePostPaidServerOption::~ResizePostPaidServerOption() = default;

void ResizePostPaidServerOption::validate()
{
}

web::json::value ResizePostPaidServerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(cpuOptionsIsSet_) {
        val[utility::conversions::to_string_t("cpu_options")] = ModelBase::toJson(cpuOptions_);
    }

    return val;
}
bool ResizePostPaidServerOption::fromJson(const web::json::value& val)
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


std::string ResizePostPaidServerOption::getFlavorRef() const
{
    return flavorRef_;
}

void ResizePostPaidServerOption::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ResizePostPaidServerOption::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ResizePostPaidServerOption::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string ResizePostPaidServerOption::getMode() const
{
    return mode_;
}

void ResizePostPaidServerOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ResizePostPaidServerOption::modeIsSet() const
{
    return modeIsSet_;
}

void ResizePostPaidServerOption::unsetmode()
{
    modeIsSet_ = false;
}

CpuOptions ResizePostPaidServerOption::getCpuOptions() const
{
    return cpuOptions_;
}

void ResizePostPaidServerOption::setCpuOptions(const CpuOptions& value)
{
    cpuOptions_ = value;
    cpuOptionsIsSet_ = true;
}

bool ResizePostPaidServerOption::cpuOptionsIsSet() const
{
    return cpuOptionsIsSet_;
}

void ResizePostPaidServerOption::unsetcpuOptions()
{
    cpuOptionsIsSet_ = false;
}

}
}
}
}
}



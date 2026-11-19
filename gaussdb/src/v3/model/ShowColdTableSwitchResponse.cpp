

#include "huaweicloud/gaussdb/v3/model/ShowColdTableSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowColdTableSwitchResponse::ShowColdTableSwitchResponse()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
    kernelVersion_ = "";
    kernelVersionIsSet_ = false;
}

ShowColdTableSwitchResponse::~ShowColdTableSwitchResponse() = default;

void ShowColdTableSwitchResponse::validate()
{
}

web::json::value ShowColdTableSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }
    if(kernelVersionIsSet_) {
        val[utility::conversions::to_string_t("kernel_version")] = ModelBase::toJson(kernelVersion_);
    }

    return val;
}
bool ShowColdTableSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelVersion(refVal);
        }
    }
    return ok;
}


std::string ShowColdTableSwitchResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void ShowColdTableSwitchResponse::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool ShowColdTableSwitchResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void ShowColdTableSwitchResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

std::string ShowColdTableSwitchResponse::getKernelVersion() const
{
    return kernelVersion_;
}

void ShowColdTableSwitchResponse::setKernelVersion(const std::string& value)
{
    kernelVersion_ = value;
    kernelVersionIsSet_ = true;
}

bool ShowColdTableSwitchResponse::kernelVersionIsSet() const
{
    return kernelVersionIsSet_;
}

void ShowColdTableSwitchResponse::unsetkernelVersion()
{
    kernelVersionIsSet_ = false;
}

}
}
}
}
}



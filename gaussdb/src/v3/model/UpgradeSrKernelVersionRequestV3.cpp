

#include "huaweicloud/gaussdb/v3/model/UpgradeSrKernelVersionRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeSrKernelVersionRequestV3::UpgradeSrKernelVersionRequestV3()
{
    delay_ = "";
    delayIsSet_ = false;
    isSkipValidate_ = "";
    isSkipValidateIsSet_ = false;
}

UpgradeSrKernelVersionRequestV3::~UpgradeSrKernelVersionRequestV3() = default;

void UpgradeSrKernelVersionRequestV3::validate()
{
}

web::json::value UpgradeSrKernelVersionRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(isSkipValidateIsSet_) {
        val[utility::conversions::to_string_t("is_skip_validate")] = ModelBase::toJson(isSkipValidate_);
    }

    return val;
}
bool UpgradeSrKernelVersionRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_skip_validate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_skip_validate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSkipValidate(refVal);
        }
    }
    return ok;
}


std::string UpgradeSrKernelVersionRequestV3::getDelay() const
{
    return delay_;
}

void UpgradeSrKernelVersionRequestV3::setDelay(const std::string& value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool UpgradeSrKernelVersionRequestV3::delayIsSet() const
{
    return delayIsSet_;
}

void UpgradeSrKernelVersionRequestV3::unsetdelay()
{
    delayIsSet_ = false;
}

std::string UpgradeSrKernelVersionRequestV3::getIsSkipValidate() const
{
    return isSkipValidate_;
}

void UpgradeSrKernelVersionRequestV3::setIsSkipValidate(const std::string& value)
{
    isSkipValidate_ = value;
    isSkipValidateIsSet_ = true;
}

bool UpgradeSrKernelVersionRequestV3::isSkipValidateIsSet() const
{
    return isSkipValidateIsSet_;
}

void UpgradeSrKernelVersionRequestV3::unsetisSkipValidate()
{
    isSkipValidateIsSet_ = false;
}

}
}
}
}
}



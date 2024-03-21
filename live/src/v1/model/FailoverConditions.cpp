

#include "huaweicloud/live/v1/model/FailoverConditions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FailoverConditions::FailoverConditions()
{
    inputLossThresholdMsec_ = 0;
    inputLossThresholdMsecIsSet_ = false;
    inputPreference_ = "";
    inputPreferenceIsSet_ = false;
}

FailoverConditions::~FailoverConditions() = default;

void FailoverConditions::validate()
{
}

web::json::value FailoverConditions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputLossThresholdMsecIsSet_) {
        val[utility::conversions::to_string_t("input_loss_threshold_msec")] = ModelBase::toJson(inputLossThresholdMsec_);
    }
    if(inputPreferenceIsSet_) {
        val[utility::conversions::to_string_t("input_preference")] = ModelBase::toJson(inputPreference_);
    }

    return val;
}
bool FailoverConditions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input_loss_threshold_msec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_loss_threshold_msec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputLossThresholdMsec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_preference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_preference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputPreference(refVal);
        }
    }
    return ok;
}


int32_t FailoverConditions::getInputLossThresholdMsec() const
{
    return inputLossThresholdMsec_;
}

void FailoverConditions::setInputLossThresholdMsec(int32_t value)
{
    inputLossThresholdMsec_ = value;
    inputLossThresholdMsecIsSet_ = true;
}

bool FailoverConditions::inputLossThresholdMsecIsSet() const
{
    return inputLossThresholdMsecIsSet_;
}

void FailoverConditions::unsetinputLossThresholdMsec()
{
    inputLossThresholdMsecIsSet_ = false;
}

std::string FailoverConditions::getInputPreference() const
{
    return inputPreference_;
}

void FailoverConditions::setInputPreference(const std::string& value)
{
    inputPreference_ = value;
    inputPreferenceIsSet_ = true;
}

bool FailoverConditions::inputPreferenceIsSet() const
{
    return inputPreferenceIsSet_;
}

void FailoverConditions::unsetinputPreference()
{
    inputPreferenceIsSet_ = false;
}

}
}
}
}
}



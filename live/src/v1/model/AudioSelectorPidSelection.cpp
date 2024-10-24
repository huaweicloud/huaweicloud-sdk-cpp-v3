

#include "huaweicloud/live/v1/model/AudioSelectorPidSelection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AudioSelectorPidSelection::AudioSelectorPidSelection()
{
    pid_ = 0;
    pidIsSet_ = false;
}

AudioSelectorPidSelection::~AudioSelectorPidSelection() = default;

void AudioSelectorPidSelection::validate()
{
}

web::json::value AudioSelectorPidSelection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }

    return val;
}
bool AudioSelectorPidSelection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    return ok;
}


int32_t AudioSelectorPidSelection::getPid() const
{
    return pid_;
}

void AudioSelectorPidSelection::setPid(int32_t value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool AudioSelectorPidSelection::pidIsSet() const
{
    return pidIsSet_;
}

void AudioSelectorPidSelection::unsetpid()
{
    pidIsSet_ = false;
}

}
}
}
}
}



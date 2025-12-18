

#include "huaweicloud/meeting/v1/model/PauseConferenceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PauseConferenceReq::PauseConferenceReq()
{
    pause_ = 0;
    pauseIsSet_ = false;
}

PauseConferenceReq::~PauseConferenceReq() = default;

void PauseConferenceReq::validate()
{
}

web::json::value PauseConferenceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pauseIsSet_) {
        val[utility::conversions::to_string_t("pause")] = ModelBase::toJson(pause_);
    }

    return val;
}
bool PauseConferenceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pause"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPause(refVal);
        }
    }
    return ok;
}


int32_t PauseConferenceReq::getPause() const
{
    return pause_;
}

void PauseConferenceReq::setPause(int32_t value)
{
    pause_ = value;
    pauseIsSet_ = true;
}

bool PauseConferenceReq::pauseIsSet() const
{
    return pauseIsSet_;
}

void PauseConferenceReq::unsetpause()
{
    pauseIsSet_ = false;
}

}
}
}
}
}



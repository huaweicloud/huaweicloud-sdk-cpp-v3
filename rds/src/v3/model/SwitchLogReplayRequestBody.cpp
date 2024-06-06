

#include "huaweicloud/rds/v3/model/SwitchLogReplayRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchLogReplayRequestBody::SwitchLogReplayRequestBody()
{
    pauseLogReplay_ = "";
    pauseLogReplayIsSet_ = false;
}

SwitchLogReplayRequestBody::~SwitchLogReplayRequestBody() = default;

void SwitchLogReplayRequestBody::validate()
{
}

web::json::value SwitchLogReplayRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pauseLogReplayIsSet_) {
        val[utility::conversions::to_string_t("pause_log_replay")] = ModelBase::toJson(pauseLogReplay_);
    }

    return val;
}
bool SwitchLogReplayRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pause_log_replay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pause_log_replay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPauseLogReplay(refVal);
        }
    }
    return ok;
}


std::string SwitchLogReplayRequestBody::getPauseLogReplay() const
{
    return pauseLogReplay_;
}

void SwitchLogReplayRequestBody::setPauseLogReplay(const std::string& value)
{
    pauseLogReplay_ = value;
    pauseLogReplayIsSet_ = true;
}

bool SwitchLogReplayRequestBody::pauseLogReplayIsSet() const
{
    return pauseLogReplayIsSet_;
}

void SwitchLogReplayRequestBody::unsetpauseLogReplay()
{
    pauseLogReplayIsSet_ = false;
}

}
}
}
}
}



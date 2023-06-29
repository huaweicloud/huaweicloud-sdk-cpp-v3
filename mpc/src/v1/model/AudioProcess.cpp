

#include "huaweicloud/mpc/v1/model/AudioProcess.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AudioProcess::AudioProcess()
{
    volume_ = "";
    volumeIsSet_ = false;
    volumeExpr_ = 0;
    volumeExprIsSet_ = false;
}

AudioProcess::~AudioProcess() = default;

void AudioProcess::validate()
{
}

web::json::value AudioProcess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(volumeExprIsSet_) {
        val[utility::conversions::to_string_t("volume_expr")] = ModelBase::toJson(volumeExpr_);
    }

    return val;
}

bool AudioProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_expr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_expr"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeExpr(refVal);
        }
    }
    return ok;
}


std::string AudioProcess::getVolume() const
{
    return volume_;
}

void AudioProcess::setVolume(const std::string& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool AudioProcess::volumeIsSet() const
{
    return volumeIsSet_;
}

void AudioProcess::unsetvolume()
{
    volumeIsSet_ = false;
}

int32_t AudioProcess::getVolumeExpr() const
{
    return volumeExpr_;
}

void AudioProcess::setVolumeExpr(int32_t value)
{
    volumeExpr_ = value;
    volumeExprIsSet_ = true;
}

bool AudioProcess::volumeExprIsSet() const
{
    return volumeExprIsSet_;
}

void AudioProcess::unsetvolumeExpr()
{
    volumeExprIsSet_ = false;
}

}
}
}
}
}



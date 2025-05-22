

#include "huaweicloud/live/v1/model/VideoDescriptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




VideoDescriptions::VideoDescriptions()
{
    gopDurationSeconds_ = 0;
    gopDurationSecondsIsSet_ = false;
}

VideoDescriptions::~VideoDescriptions() = default;

void VideoDescriptions::validate()
{
}

web::json::value VideoDescriptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gopDurationSecondsIsSet_) {
        val[utility::conversions::to_string_t("gop_duration_seconds")] = ModelBase::toJson(gopDurationSeconds_);
    }

    return val;
}
bool VideoDescriptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gop_duration_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gop_duration_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGopDurationSeconds(refVal);
        }
    }
    return ok;
}


int32_t VideoDescriptions::getGopDurationSeconds() const
{
    return gopDurationSeconds_;
}

void VideoDescriptions::setGopDurationSeconds(int32_t value)
{
    gopDurationSeconds_ = value;
    gopDurationSecondsIsSet_ = true;
}

bool VideoDescriptions::gopDurationSecondsIsSet() const
{
    return gopDurationSecondsIsSet_;
}

void VideoDescriptions::unsetgopDurationSeconds()
{
    gopDurationSecondsIsSet_ = false;
}

}
}
}
}
}



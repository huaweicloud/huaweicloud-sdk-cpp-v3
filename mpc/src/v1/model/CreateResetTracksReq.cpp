

#include "huaweicloud/mpc/v1/model/CreateResetTracksReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateResetTracksReq::CreateResetTracksReq()
{
    audioFileIsSet_ = false;
}

CreateResetTracksReq::~CreateResetTracksReq() = default;

void CreateResetTracksReq::validate()
{
}

web::json::value CreateResetTracksReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFileIsSet_) {
        val[utility::conversions::to_string_t("audio_file")] = ModelBase::toJson(audioFile_);
    }

    return val;
}

bool CreateResetTracksReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file"));
        if(!fieldValue.is_null())
        {
            SubAudioFile refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFile(refVal);
        }
    }
    return ok;
}

SubAudioFile CreateResetTracksReq::getAudioFile() const
{
    return audioFile_;
}

void CreateResetTracksReq::setAudioFile(const SubAudioFile& value)
{
    audioFile_ = value;
    audioFileIsSet_ = true;
}

bool CreateResetTracksReq::audioFileIsSet() const
{
    return audioFileIsSet_;
}

void CreateResetTracksReq::unsetaudioFile()
{
    audioFileIsSet_ = false;
}

}
}
}
}
}



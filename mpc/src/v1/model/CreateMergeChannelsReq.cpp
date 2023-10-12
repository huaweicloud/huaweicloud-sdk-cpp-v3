

#include "huaweicloud/mpc/v1/model/CreateMergeChannelsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMergeChannelsReq::CreateMergeChannelsReq()
{
    multiAudioIsSet_ = false;
}

CreateMergeChannelsReq::~CreateMergeChannelsReq() = default;

void CreateMergeChannelsReq::validate()
{
}

web::json::value CreateMergeChannelsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(multiAudioIsSet_) {
        val[utility::conversions::to_string_t("multi_audio")] = ModelBase::toJson(multiAudio_);
    }

    return val;
}
bool CreateMergeChannelsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("multi_audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_audio"));
        if(!fieldValue.is_null())
        {
            MpcMultiAudio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiAudio(refVal);
        }
    }
    return ok;
}


MpcMultiAudio CreateMergeChannelsReq::getMultiAudio() const
{
    return multiAudio_;
}

void CreateMergeChannelsReq::setMultiAudio(const MpcMultiAudio& value)
{
    multiAudio_ = value;
    multiAudioIsSet_ = true;
}

bool CreateMergeChannelsReq::multiAudioIsSet() const
{
    return multiAudioIsSet_;
}

void CreateMergeChannelsReq::unsetmultiAudio()
{
    multiAudioIsSet_ = false;
}

}
}
}
}
}



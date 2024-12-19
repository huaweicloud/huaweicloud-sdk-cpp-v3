

#include "huaweicloud/evs/v2/model/UnsubscribeVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UnsubscribeVolumeRequestBody::UnsubscribeVolumeRequestBody()
{
    volumeIdsIsSet_ = false;
}

UnsubscribeVolumeRequestBody::~UnsubscribeVolumeRequestBody() = default;

void UnsubscribeVolumeRequestBody::validate()
{
}

web::json::value UnsubscribeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }

    return val;
}
bool UnsubscribeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UnsubscribeVolumeRequestBody::getVolumeIds()
{
    return volumeIds_;
}

void UnsubscribeVolumeRequestBody::setVolumeIds(const std::vector<std::string>& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool UnsubscribeVolumeRequestBody::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void UnsubscribeVolumeRequestBody::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

}
}
}
}
}



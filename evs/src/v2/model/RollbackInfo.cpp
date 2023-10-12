

#include "huaweicloud/evs/v2/model/RollbackInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackInfo::RollbackInfo()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

RollbackInfo::~RollbackInfo() = default;

void RollbackInfo::validate()
{
}

web::json::value RollbackInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool RollbackInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string RollbackInfo::getVolumeId() const
{
    return volumeId_;
}

void RollbackInfo::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool RollbackInfo::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void RollbackInfo::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/modelarts/v1/model/AttachServerVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachServerVolumeRequest::AttachServerVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

AttachServerVolumeRequest::~AttachServerVolumeRequest() = default;

void AttachServerVolumeRequest::validate()
{
}

web::json::value AttachServerVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool AttachServerVolumeRequest::fromJson(const web::json::value& val)
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


std::string AttachServerVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void AttachServerVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool AttachServerVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void AttachServerVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}



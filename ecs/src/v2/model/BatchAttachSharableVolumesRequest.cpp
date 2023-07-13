

#include "huaweicloud/ecs/v2/model/BatchAttachSharableVolumesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAttachSharableVolumesRequest::BatchAttachSharableVolumesRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAttachSharableVolumesRequest::~BatchAttachSharableVolumesRequest() = default;

void BatchAttachSharableVolumesRequest::validate()
{
}

web::json::value BatchAttachSharableVolumesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchAttachSharableVolumesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAttachSharableVolumesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchAttachSharableVolumesRequest::getVolumeId() const
{
    return volumeId_;
}

void BatchAttachSharableVolumesRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BatchAttachSharableVolumesRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BatchAttachSharableVolumesRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

BatchAttachSharableVolumesRequestBody BatchAttachSharableVolumesRequest::getBody() const
{
    return body_;
}

void BatchAttachSharableVolumesRequest::setBody(const BatchAttachSharableVolumesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAttachSharableVolumesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAttachSharableVolumesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



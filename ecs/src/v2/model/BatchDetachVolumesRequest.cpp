

#include "huaweicloud/ecs/v2/model/BatchDetachVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDetachVolumesRequest::BatchDetachVolumesRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDetachVolumesRequest::~BatchDetachVolumesRequest() = default;

void BatchDetachVolumesRequest::validate()
{
}

web::json::value BatchDetachVolumesRequest::toJson() const
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
bool BatchDetachVolumesRequest::fromJson(const web::json::value& val)
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
            VolumeBatchDetachRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDetachVolumesRequest::getVolumeId() const
{
    return volumeId_;
}

void BatchDetachVolumesRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BatchDetachVolumesRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BatchDetachVolumesRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

VolumeBatchDetachRequest BatchDetachVolumesRequest::getBody() const
{
    return body_;
}

void BatchDetachVolumesRequest::setBody(const VolumeBatchDetachRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDetachVolumesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDetachVolumesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



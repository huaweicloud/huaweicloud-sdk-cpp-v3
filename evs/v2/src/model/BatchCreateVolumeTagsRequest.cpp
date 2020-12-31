

#include "huaweicloud/evs/model/BatchCreateVolumeTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchCreateVolumeTagsRequest::BatchCreateVolumeTagsRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateVolumeTagsRequest::~BatchCreateVolumeTagsRequest() = default;

void BatchCreateVolumeTagsRequest::validate()
{
}

web::json::value BatchCreateVolumeTagsRequest::toJson() const
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

bool BatchCreateVolumeTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreateVolumeTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateVolumeTagsRequest::getVolumeId() const
{
    return volumeId_;
}

void BatchCreateVolumeTagsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BatchCreateVolumeTagsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BatchCreateVolumeTagsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

BatchCreateVolumeTagsRequestBody BatchCreateVolumeTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateVolumeTagsRequest::setBody(const BatchCreateVolumeTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateVolumeTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateVolumeTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



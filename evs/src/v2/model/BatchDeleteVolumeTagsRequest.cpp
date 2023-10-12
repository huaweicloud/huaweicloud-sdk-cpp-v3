

#include "huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchDeleteVolumeTagsRequest::BatchDeleteVolumeTagsRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteVolumeTagsRequest::~BatchDeleteVolumeTagsRequest() = default;

void BatchDeleteVolumeTagsRequest::validate()
{
}

web::json::value BatchDeleteVolumeTagsRequest::toJson() const
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
bool BatchDeleteVolumeTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteVolumeTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteVolumeTagsRequest::getVolumeId() const
{
    return volumeId_;
}

void BatchDeleteVolumeTagsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BatchDeleteVolumeTagsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BatchDeleteVolumeTagsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

BatchDeleteVolumeTagsRequestBody BatchDeleteVolumeTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteVolumeTagsRequest::setBody(const BatchDeleteVolumeTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteVolumeTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteVolumeTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



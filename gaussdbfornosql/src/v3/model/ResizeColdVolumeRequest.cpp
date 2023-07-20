

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeColdVolumeRequest::ResizeColdVolumeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeColdVolumeRequest::~ResizeColdVolumeRequest() = default;

void ResizeColdVolumeRequest::validate()
{
}

web::json::value ResizeColdVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ResizeColdVolumeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResizeColdVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ResizeColdVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeColdVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeColdVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeColdVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResizeColdVolumeRequestBody ResizeColdVolumeRequest::getBody() const
{
    return body_;
}

void ResizeColdVolumeRequest::setBody(const ResizeColdVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeColdVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeColdVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



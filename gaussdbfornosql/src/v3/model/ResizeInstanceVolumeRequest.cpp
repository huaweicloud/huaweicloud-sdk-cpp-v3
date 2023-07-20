

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeInstanceVolumeRequest::ResizeInstanceVolumeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeInstanceVolumeRequest::~ResizeInstanceVolumeRequest() = default;

void ResizeInstanceVolumeRequest::validate()
{
}

web::json::value ResizeInstanceVolumeRequest::toJson() const
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

bool ResizeInstanceVolumeRequest::fromJson(const web::json::value& val)
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
            ResizeInstanceVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ResizeInstanceVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeInstanceVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeInstanceVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeInstanceVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResizeInstanceVolumeRequestBody ResizeInstanceVolumeRequest::getBody() const
{
    return body_;
}

void ResizeInstanceVolumeRequest::setBody(const ResizeInstanceVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeInstanceVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeInstanceVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



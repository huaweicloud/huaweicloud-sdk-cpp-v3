

#include "huaweicloud/dds/v3/model/DownloadErrorlogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DownloadErrorlogRequest::DownloadErrorlogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadErrorlogRequest::~DownloadErrorlogRequest() = default;

void DownloadErrorlogRequest::validate()
{
}

web::json::value DownloadErrorlogRequest::toJson() const
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

bool DownloadErrorlogRequest::fromJson(const web::json::value& val)
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
            DownloadErrorlogRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DownloadErrorlogRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadErrorlogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadErrorlogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadErrorlogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DownloadErrorlogRequestBody DownloadErrorlogRequest::getBody() const
{
    return body_;
}

void DownloadErrorlogRequest::setBody(const DownloadErrorlogRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadErrorlogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadErrorlogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



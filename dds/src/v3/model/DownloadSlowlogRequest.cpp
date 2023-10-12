

#include "huaweicloud/dds/v3/model/DownloadSlowlogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DownloadSlowlogRequest::DownloadSlowlogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadSlowlogRequest::~DownloadSlowlogRequest() = default;

void DownloadSlowlogRequest::validate()
{
}

web::json::value DownloadSlowlogRequest::toJson() const
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
bool DownloadSlowlogRequest::fromJson(const web::json::value& val)
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
            DownloadSlowlogRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DownloadSlowlogRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadSlowlogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadSlowlogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadSlowlogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DownloadSlowlogRequestBody DownloadSlowlogRequest::getBody() const
{
    return body_;
}

void DownloadSlowlogRequest::setBody(const DownloadSlowlogRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadSlowlogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadSlowlogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdb/v3/model/DownloadDdlLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadDdlLogsRequest::DownloadDdlLogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadDdlLogsRequest::~DownloadDdlLogsRequest() = default;

void DownloadDdlLogsRequest::validate()
{
}

web::json::value DownloadDdlLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DownloadDdlLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            DownloadDdlLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DownloadDdlLogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadDdlLogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadDdlLogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadDdlLogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadDdlLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadDdlLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadDdlLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadDdlLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DownloadDdlLogsRequestBody DownloadDdlLogsRequest::getBody() const
{
    return body_;
}

void DownloadDdlLogsRequest::setBody(const DownloadDdlLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadDdlLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadDdlLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



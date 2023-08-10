

#include "huaweicloud/rds/v3/model/CreateXelLogDownloadRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateXelLogDownloadRequest::CreateXelLogDownloadRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateXelLogDownloadRequest::~CreateXelLogDownloadRequest() = default;

void CreateXelLogDownloadRequest::validate()
{
}

web::json::value CreateXelLogDownloadRequest::toJson() const
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

bool CreateXelLogDownloadRequest::fromJson(const web::json::value& val)
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
            CreateXelLogDownloadRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateXelLogDownloadRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateXelLogDownloadRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateXelLogDownloadRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateXelLogDownloadRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateXelLogDownloadRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateXelLogDownloadRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateXelLogDownloadRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateXelLogDownloadRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateXelLogDownloadRequestBody CreateXelLogDownloadRequest::getBody() const
{
    return body_;
}

void CreateXelLogDownloadRequest::setBody(const CreateXelLogDownloadRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateXelLogDownloadRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateXelLogDownloadRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/UploadHistorySessionAnalyaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UploadHistorySessionAnalyaseRequest::UploadHistorySessionAnalyaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UploadHistorySessionAnalyaseRequest::~UploadHistorySessionAnalyaseRequest() = default;

void UploadHistorySessionAnalyaseRequest::validate()
{
}

web::json::value UploadHistorySessionAnalyaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadHistorySessionAnalyaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadHistorySessionAnalyaseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadHistorySessionAnalyaseRequest::getInstanceId() const
{
    return instanceId_;
}

void UploadHistorySessionAnalyaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UploadHistorySessionAnalyaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UploadHistorySessionAnalyaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UploadHistorySessionAnalyaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void UploadHistorySessionAnalyaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UploadHistorySessionAnalyaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UploadHistorySessionAnalyaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UploadHistorySessionAnalyaseBody UploadHistorySessionAnalyaseRequest::getBody() const
{
    return body_;
}

void UploadHistorySessionAnalyaseRequest::setBody(const UploadHistorySessionAnalyaseBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadHistorySessionAnalyaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadHistorySessionAnalyaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



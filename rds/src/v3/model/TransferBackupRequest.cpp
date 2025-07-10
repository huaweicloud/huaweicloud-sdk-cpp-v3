

#include "huaweicloud/rds/v3/model/TransferBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferBackupRequest::TransferBackupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

TransferBackupRequest::~TransferBackupRequest() = default;

void TransferBackupRequest::validate()
{
}

web::json::value TransferBackupRequest::toJson() const
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
bool TransferBackupRequest::fromJson(const web::json::value& val)
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
            TransferBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string TransferBackupRequest::getInstanceId() const
{
    return instanceId_;
}

void TransferBackupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TransferBackupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TransferBackupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TransferBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void TransferBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool TransferBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void TransferBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

TransferBackupRequestBody TransferBackupRequest::getBody() const
{
    return body_;
}

void TransferBackupRequest::setBody(const TransferBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransferBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransferBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



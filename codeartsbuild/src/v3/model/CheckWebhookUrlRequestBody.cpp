

#include "huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckWebhookUrlRequestBody::CheckWebhookUrlRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    noticeType_ = "";
    noticeTypeIsSet_ = false;
    webhookUrl_ = "";
    webhookUrlIsSet_ = false;
}

CheckWebhookUrlRequestBody::~CheckWebhookUrlRequestBody() = default;

void CheckWebhookUrlRequestBody::validate()
{
}

web::json::value CheckWebhookUrlRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(noticeTypeIsSet_) {
        val[utility::conversions::to_string_t("notice_type")] = ModelBase::toJson(noticeType_);
    }
    if(webhookUrlIsSet_) {
        val[utility::conversions::to_string_t("webhook_url")] = ModelBase::toJson(webhookUrl_);
    }

    return val;
}
bool CheckWebhookUrlRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notice_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notice_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoticeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhook_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhook_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebhookUrl(refVal);
        }
    }
    return ok;
}


std::string CheckWebhookUrlRequestBody::getJobId() const
{
    return jobId_;
}

void CheckWebhookUrlRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CheckWebhookUrlRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CheckWebhookUrlRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CheckWebhookUrlRequestBody::getNoticeType() const
{
    return noticeType_;
}

void CheckWebhookUrlRequestBody::setNoticeType(const std::string& value)
{
    noticeType_ = value;
    noticeTypeIsSet_ = true;
}

bool CheckWebhookUrlRequestBody::noticeTypeIsSet() const
{
    return noticeTypeIsSet_;
}

void CheckWebhookUrlRequestBody::unsetnoticeType()
{
    noticeTypeIsSet_ = false;
}

std::string CheckWebhookUrlRequestBody::getWebhookUrl() const
{
    return webhookUrl_;
}

void CheckWebhookUrlRequestBody::setWebhookUrl(const std::string& value)
{
    webhookUrl_ = value;
    webhookUrlIsSet_ = true;
}

bool CheckWebhookUrlRequestBody::webhookUrlIsSet() const
{
    return webhookUrlIsSet_;
}

void CheckWebhookUrlRequestBody::unsetwebhookUrl()
{
    webhookUrlIsSet_ = false;
}

}
}
}
}
}



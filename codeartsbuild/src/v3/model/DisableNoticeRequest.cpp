

#include "huaweicloud/codeartsbuild/v3/model/DisableNoticeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableNoticeRequest::DisableNoticeRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    noticeType_ = "";
    noticeTypeIsSet_ = false;
}

DisableNoticeRequest::~DisableNoticeRequest() = default;

void DisableNoticeRequest::validate()
{
}

web::json::value DisableNoticeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(noticeTypeIsSet_) {
        val[utility::conversions::to_string_t("notice_type")] = ModelBase::toJson(noticeType_);
    }

    return val;
}
bool DisableNoticeRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DisableNoticeRequest::getJobId() const
{
    return jobId_;
}

void DisableNoticeRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DisableNoticeRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DisableNoticeRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DisableNoticeRequest::getNoticeType() const
{
    return noticeType_;
}

void DisableNoticeRequest::setNoticeType(const std::string& value)
{
    noticeType_ = value;
    noticeTypeIsSet_ = true;
}

bool DisableNoticeRequest::noticeTypeIsSet() const
{
    return noticeTypeIsSet_;
}

void DisableNoticeRequest::unsetnoticeType()
{
    noticeTypeIsSet_ = false;
}

}
}
}
}
}



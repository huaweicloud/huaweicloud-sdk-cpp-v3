

#include "huaweicloud/metastudio/v1/model/ShowUserReviewAttachmentUploadingAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowUserReviewAttachmentUploadingAddressRequest::ShowUserReviewAttachmentUploadingAddressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    startNumber_ = 0;
    startNumberIsSet_ = false;
    endNumber_ = 0;
    endNumberIsSet_ = false;
}

ShowUserReviewAttachmentUploadingAddressRequest::~ShowUserReviewAttachmentUploadingAddressRequest() = default;

void ShowUserReviewAttachmentUploadingAddressRequest::validate()
{
}

web::json::value ShowUserReviewAttachmentUploadingAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(startNumberIsSet_) {
        val[utility::conversions::to_string_t("start_number")] = ModelBase::toJson(startNumber_);
    }
    if(endNumberIsSet_) {
        val[utility::conversions::to_string_t("end_number")] = ModelBase::toJson(endNumber_);
    }

    return val;
}
bool ShowUserReviewAttachmentUploadingAddressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndNumber(refVal);
        }
    }
    return ok;
}


std::string ShowUserReviewAttachmentUploadingAddressRequest::getJobId() const
{
    return jobId_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowUserReviewAttachmentUploadingAddressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowUserReviewAttachmentUploadingAddressRequest::getStartNumber() const
{
    return startNumber_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::setStartNumber(int32_t value)
{
    startNumber_ = value;
    startNumberIsSet_ = true;
}

bool ShowUserReviewAttachmentUploadingAddressRequest::startNumberIsSet() const
{
    return startNumberIsSet_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::unsetstartNumber()
{
    startNumberIsSet_ = false;
}

int32_t ShowUserReviewAttachmentUploadingAddressRequest::getEndNumber() const
{
    return endNumber_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::setEndNumber(int32_t value)
{
    endNumber_ = value;
    endNumberIsSet_ = true;
}

bool ShowUserReviewAttachmentUploadingAddressRequest::endNumberIsSet() const
{
    return endNumberIsSet_;
}

void ShowUserReviewAttachmentUploadingAddressRequest::unsetendNumber()
{
    endNumberIsSet_ = false;
}

}
}
}
}
}



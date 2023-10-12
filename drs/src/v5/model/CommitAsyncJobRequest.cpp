

#include "huaweicloud/drs/v5/model/CommitAsyncJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CommitAsyncJobRequest::CommitAsyncJobRequest()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

CommitAsyncJobRequest::~CommitAsyncJobRequest() = default;

void CommitAsyncJobRequest::validate()
{
}

web::json::value CommitAsyncJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool CommitAsyncJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
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
    return ok;
}


std::string CommitAsyncJobRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void CommitAsyncJobRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool CommitAsyncJobRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void CommitAsyncJobRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string CommitAsyncJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CommitAsyncJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CommitAsyncJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CommitAsyncJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/drs/v5/model/ShowReplicationJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplicationJobRequest::ShowReplicationJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowReplicationJobRequest::~ShowReplicationJobRequest() = default;

void ShowReplicationJobRequest::validate()
{
}

web::json::value ShowReplicationJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowReplicationJobRequest::fromJson(const web::json::value& val)
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


std::string ShowReplicationJobRequest::getJobId() const
{
    return jobId_;
}

void ShowReplicationJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplicationJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplicationJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplicationJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplicationJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplicationJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplicationJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/drs/v5/model/DeleteJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteJobRequest::DeleteJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteJobRequest::~DeleteJobRequest() = default;

void DeleteJobRequest::validate()
{
}

web::json::value DeleteJobRequest::toJson() const
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
bool DeleteJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}



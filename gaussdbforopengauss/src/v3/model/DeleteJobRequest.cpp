

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteJobRequest::DeleteJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteJobRequest::~DeleteJobRequest() = default;

void DeleteJobRequest::validate()
{
}

web::json::value DeleteJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
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

}
}
}
}
}



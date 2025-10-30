

#include "huaweicloud/drs/v3/model/QueryTuningParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryTuningParamsRequest::QueryTuningParamsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

QueryTuningParamsRequest::~QueryTuningParamsRequest() = default;

void QueryTuningParamsRequest::validate()
{
}

web::json::value QueryTuningParamsRequest::toJson() const
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
bool QueryTuningParamsRequest::fromJson(const web::json::value& val)
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


std::string QueryTuningParamsRequest::getJobId() const
{
    return jobId_;
}

void QueryTuningParamsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryTuningParamsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryTuningParamsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryTuningParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void QueryTuningParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool QueryTuningParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void QueryTuningParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/UploadHistorySessionAnalyaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UploadHistorySessionAnalyaseResponse::UploadHistorySessionAnalyaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UploadHistorySessionAnalyaseResponse::~UploadHistorySessionAnalyaseResponse() = default;

void UploadHistorySessionAnalyaseResponse::validate()
{
}

web::json::value UploadHistorySessionAnalyaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UploadHistorySessionAnalyaseResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UploadHistorySessionAnalyaseResponse::getJobId() const
{
    return jobId_;
}

void UploadHistorySessionAnalyaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UploadHistorySessionAnalyaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UploadHistorySessionAnalyaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}



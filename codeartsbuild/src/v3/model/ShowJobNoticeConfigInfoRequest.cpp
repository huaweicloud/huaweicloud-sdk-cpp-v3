

#include "huaweicloud/codeartsbuild/v3/model/ShowJobNoticeConfigInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobNoticeConfigInfoRequest::ShowJobNoticeConfigInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobNoticeConfigInfoRequest::~ShowJobNoticeConfigInfoRequest() = default;

void ShowJobNoticeConfigInfoRequest::validate()
{
}

web::json::value ShowJobNoticeConfigInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobNoticeConfigInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowJobNoticeConfigInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowJobNoticeConfigInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobNoticeConfigInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobNoticeConfigInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/drs/v3/model/SelectGroupAndStreamRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SelectGroupAndStreamRequest::SelectGroupAndStreamRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

SelectGroupAndStreamRequest::~SelectGroupAndStreamRequest() = default;

void SelectGroupAndStreamRequest::validate()
{
}

web::json::value SelectGroupAndStreamRequest::toJson() const
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
bool SelectGroupAndStreamRequest::fromJson(const web::json::value& val)
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


std::string SelectGroupAndStreamRequest::getXLanguage() const
{
    return xLanguage_;
}

void SelectGroupAndStreamRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SelectGroupAndStreamRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SelectGroupAndStreamRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SelectGroupAndStreamRequest::getJobId() const
{
    return jobId_;
}

void SelectGroupAndStreamRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SelectGroupAndStreamRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SelectGroupAndStreamRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}



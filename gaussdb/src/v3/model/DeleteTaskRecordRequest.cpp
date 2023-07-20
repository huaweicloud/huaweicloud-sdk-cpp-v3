

#include "huaweicloud/gaussdb/v3/model/DeleteTaskRecordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteTaskRecordRequest::DeleteTaskRecordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteTaskRecordRequest::~DeleteTaskRecordRequest() = default;

void DeleteTaskRecordRequest::validate()
{
}

web::json::value DeleteTaskRecordRequest::toJson() const
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

bool DeleteTaskRecordRequest::fromJson(const web::json::value& val)
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

std::string DeleteTaskRecordRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteTaskRecordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteTaskRecordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteTaskRecordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteTaskRecordRequest::getJobId() const
{
    return jobId_;
}

void DeleteTaskRecordRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteTaskRecordRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteTaskRecordRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}



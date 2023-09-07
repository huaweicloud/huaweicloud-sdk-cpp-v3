

#include "huaweicloud/drs/v5/model/ExportOperationInfoRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportOperationInfoRequest::ExportOperationInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ExportOperationInfoRequest::~ExportOperationInfoRequest() = default;

void ExportOperationInfoRequest::validate()
{
}

web::json::value ExportOperationInfoRequest::toJson() const
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

bool ExportOperationInfoRequest::fromJson(const web::json::value& val)
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

std::string ExportOperationInfoRequest::getJobId() const
{
    return jobId_;
}

void ExportOperationInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExportOperationInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExportOperationInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExportOperationInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportOperationInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportOperationInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportOperationInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}



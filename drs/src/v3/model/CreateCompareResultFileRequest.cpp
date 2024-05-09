

#include "huaweicloud/drs/v3/model/CreateCompareResultFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareResultFileRequest::CreateCompareResultFileRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCompareResultFileRequest::~CreateCompareResultFileRequest() = default;

void CreateCompareResultFileRequest::validate()
{
}

web::json::value CreateCompareResultFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("Region")] = ModelBase::toJson(region_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCompareResultFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportCompareResultReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCompareResultFileRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateCompareResultFileRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateCompareResultFileRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateCompareResultFileRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateCompareResultFileRequest::getRegion() const
{
    return region_;
}

void CreateCompareResultFileRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateCompareResultFileRequest::regionIsSet() const
{
    return regionIsSet_;
}

void CreateCompareResultFileRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateCompareResultFileRequest::getJobId() const
{
    return jobId_;
}

void CreateCompareResultFileRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateCompareResultFileRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateCompareResultFileRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

ExportCompareResultReq CreateCompareResultFileRequest::getBody() const
{
    return body_;
}

void CreateCompareResultFileRequest::setBody(const ExportCompareResultReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCompareResultFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCompareResultFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



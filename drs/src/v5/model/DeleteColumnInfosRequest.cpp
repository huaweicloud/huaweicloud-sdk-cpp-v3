

#include "huaweicloud/drs/v5/model/DeleteColumnInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteColumnInfosRequest::DeleteColumnInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteColumnInfosRequest::~DeleteColumnInfosRequest() = default;

void DeleteColumnInfosRequest::validate()
{
}

web::json::value DeleteColumnInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteColumnInfosRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteColumnInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteColumnInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteColumnInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteColumnInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteColumnInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteColumnInfosRequest::getJobId() const
{
    return jobId_;
}

void DeleteColumnInfosRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteColumnInfosRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteColumnInfosRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

DeleteColumnInfoReq DeleteColumnInfosRequest::getBody() const
{
    return body_;
}

void DeleteColumnInfosRequest::setBody(const DeleteColumnInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteColumnInfosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteColumnInfosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



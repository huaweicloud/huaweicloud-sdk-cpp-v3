

#include "huaweicloud/drs/v5/model/BatchTagActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchTagActionRequest::BatchTagActionRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchTagActionRequest::~BatchTagActionRequest() = default;

void BatchTagActionRequest::validate()
{
}

web::json::value BatchTagActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchTagActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDealResourceTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchTagActionRequest::getResourceType() const
{
    return resourceType_;
}

void BatchTagActionRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchTagActionRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchTagActionRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchTagActionRequest::getJobId() const
{
    return jobId_;
}

void BatchTagActionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchTagActionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchTagActionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchTagActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchTagActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchTagActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchTagActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchDealResourceTagReq BatchTagActionRequest::getBody() const
{
    return body_;
}

void BatchTagActionRequest::setBody(const BatchDealResourceTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchTagActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchTagActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



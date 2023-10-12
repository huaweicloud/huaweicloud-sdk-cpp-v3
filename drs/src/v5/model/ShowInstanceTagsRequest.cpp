

#include "huaweicloud/drs/v5/model/ShowInstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowInstanceTagsRequest::ShowInstanceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowInstanceTagsRequest::~ShowInstanceTagsRequest() = default;

void ShowInstanceTagsRequest::validate()
{
}

web::json::value ShowInstanceTagsRequest::toJson() const
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

    return val;
}
bool ShowInstanceTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInstanceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ShowInstanceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowInstanceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowInstanceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowInstanceTagsRequest::getJobId() const
{
    return jobId_;
}

void ShowInstanceTagsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowInstanceTagsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowInstanceTagsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowInstanceTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/UploadCacheFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadCacheFileRequest::UploadCacheFileRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    override_ = false;
    overrideIsSet_ = false;
    parentType_ = "";
    parentTypeIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    bodyIsSet_ = false;
}

UploadCacheFileRequest::~UploadCacheFileRequest() = default;

void UploadCacheFileRequest::validate()
{
}

web::json::value UploadCacheFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(overrideIsSet_) {
        val[utility::conversions::to_string_t("override")] = ModelBase::toJson(override_);
    }
    if(parentTypeIsSet_) {
        val[utility::conversions::to_string_t("parent_type")] = ModelBase::toJson(parentType_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadCacheFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("override"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("override"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverride(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadCacheFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadCacheFileRequest::getProjectId() const
{
    return projectId_;
}

void UploadCacheFileRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadCacheFileRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadCacheFileRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool UploadCacheFileRequest::isOverride() const
{
    return override_;
}

void UploadCacheFileRequest::setOverride(bool value)
{
    override_ = value;
    overrideIsSet_ = true;
}

bool UploadCacheFileRequest::overrideIsSet() const
{
    return overrideIsSet_;
}

void UploadCacheFileRequest::unsetoverride()
{
    overrideIsSet_ = false;
}

std::string UploadCacheFileRequest::getParentType() const
{
    return parentType_;
}

void UploadCacheFileRequest::setParentType(const std::string& value)
{
    parentType_ = value;
    parentTypeIsSet_ = true;
}

bool UploadCacheFileRequest::parentTypeIsSet() const
{
    return parentTypeIsSet_;
}

void UploadCacheFileRequest::unsetparentType()
{
    parentTypeIsSet_ = false;
}

std::string UploadCacheFileRequest::getParentUri() const
{
    return parentUri_;
}

void UploadCacheFileRequest::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool UploadCacheFileRequest::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void UploadCacheFileRequest::unsetparentUri()
{
    parentUriIsSet_ = false;
}

UploadCacheFileRequestBody UploadCacheFileRequest::getBody() const
{
    return body_;
}

void UploadCacheFileRequest::setBody(const UploadCacheFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadCacheFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadCacheFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



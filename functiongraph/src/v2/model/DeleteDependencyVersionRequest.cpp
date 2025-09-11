

#include "huaweicloud/functiongraph/v2/model/DeleteDependencyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteDependencyVersionRequest::DeleteDependencyVersionRequest()
{
    dependId_ = "";
    dependIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteDependencyVersionRequest::~DeleteDependencyVersionRequest() = default;

void DeleteDependencyVersionRequest::validate()
{
}

web::json::value DeleteDependencyVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dependIdIsSet_) {
        val[utility::conversions::to_string_t("depend_id")] = ModelBase::toJson(dependId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DeleteDependencyVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("depend_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DeleteDependencyVersionRequest::getDependId() const
{
    return dependId_;
}

void DeleteDependencyVersionRequest::setDependId(const std::string& value)
{
    dependId_ = value;
    dependIdIsSet_ = true;
}

bool DeleteDependencyVersionRequest::dependIdIsSet() const
{
    return dependIdIsSet_;
}

void DeleteDependencyVersionRequest::unsetdependId()
{
    dependIdIsSet_ = false;
}

std::string DeleteDependencyVersionRequest::getVersion() const
{
    return version_;
}

void DeleteDependencyVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeleteDependencyVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void DeleteDependencyVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string DeleteDependencyVersionRequest::getContentType() const
{
    return contentType_;
}

void DeleteDependencyVersionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteDependencyVersionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteDependencyVersionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}



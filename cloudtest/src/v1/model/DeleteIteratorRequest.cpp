

#include "huaweicloud/cloudtest/v1/model/DeleteIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteIteratorRequest::DeleteIteratorRequest()
{
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    isAsync_ = false;
    isAsyncIsSet_ = false;
}

DeleteIteratorRequest::~DeleteIteratorRequest() = default;

void DeleteIteratorRequest::validate()
{
}

web::json::value DeleteIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(isAsyncIsSet_) {
        val[utility::conversions::to_string_t("is_async")] = ModelBase::toJson(isAsync_);
    }

    return val;
}
bool DeleteIteratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_async"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsync(refVal);
        }
    }
    return ok;
}


std::string DeleteIteratorRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void DeleteIteratorRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool DeleteIteratorRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void DeleteIteratorRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

std::string DeleteIteratorRequest::getProjectUuid() const
{
    return projectUuid_;
}

void DeleteIteratorRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool DeleteIteratorRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void DeleteIteratorRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

bool DeleteIteratorRequest::isIsAsync() const
{
    return isAsync_;
}

void DeleteIteratorRequest::setIsAsync(bool value)
{
    isAsync_ = value;
    isAsyncIsSet_ = true;
}

bool DeleteIteratorRequest::isAsyncIsSet() const
{
    return isAsyncIsSet_;
}

void DeleteIteratorRequest::unsetisAsync()
{
    isAsyncIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ShowIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorRequest::ShowIteratorRequest()
{
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ShowIteratorRequest::~ShowIteratorRequest() = default;

void ShowIteratorRequest::validate()
{
}

web::json::value ShowIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ShowIteratorRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowIteratorRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void ShowIteratorRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool ShowIteratorRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void ShowIteratorRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

std::string ShowIteratorRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowIteratorRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowIteratorRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowIteratorRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}



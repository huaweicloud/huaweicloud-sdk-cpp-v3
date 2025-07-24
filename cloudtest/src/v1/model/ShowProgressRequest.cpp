

#include "huaweicloud/cloudtest/v1/model/ShowProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowProgressRequest::ShowProgressRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    operationUri_ = "";
    operationUriIsSet_ = false;
}

ShowProgressRequest::~ShowProgressRequest() = default;

void ShowProgressRequest::validate()
{
}

web::json::value ShowProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(operationUriIsSet_) {
        val[utility::conversions::to_string_t("operation_uri")] = ModelBase::toJson(operationUri_);
    }

    return val;
}
bool ShowProgressRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationUri(refVal);
        }
    }
    return ok;
}


std::string ShowProgressRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowProgressRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowProgressRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowProgressRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowProgressRequest::getOperationUri() const
{
    return operationUri_;
}

void ShowProgressRequest::setOperationUri(const std::string& value)
{
    operationUri_ = value;
    operationUriIsSet_ = true;
}

bool ShowProgressRequest::operationUriIsSet() const
{
    return operationUriIsSet_;
}

void ShowProgressRequest::unsetoperationUri()
{
    operationUriIsSet_ = false;
}

}
}
}
}
}



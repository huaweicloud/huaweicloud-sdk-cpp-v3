

#include "huaweicloud/cloudtest/v1/model/ShowIteratorDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorDetailRequest::ShowIteratorDetailRequest()
{
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ShowIteratorDetailRequest::~ShowIteratorDetailRequest() = default;

void ShowIteratorDetailRequest::validate()
{
}

web::json::value ShowIteratorDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorIdIsSet_) {
        val[utility::conversions::to_string_t("iterator_id")] = ModelBase::toJson(iteratorId_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ShowIteratorDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iterator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorId(refVal);
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


std::string ShowIteratorDetailRequest::getIteratorId() const
{
    return iteratorId_;
}

void ShowIteratorDetailRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool ShowIteratorDetailRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void ShowIteratorDetailRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

std::string ShowIteratorDetailRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowIteratorDetailRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowIteratorDetailRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowIteratorDetailRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}



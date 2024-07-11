

#include "huaweicloud/codeartsdeploy/v2/model/CheckIsDuplicateAppNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckIsDuplicateAppNameRequest::CheckIsDuplicateAppNameRequest()
{
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

CheckIsDuplicateAppNameRequest::~CheckIsDuplicateAppNameRequest() = default;

void CheckIsDuplicateAppNameRequest::validate()
{
}

web::json::value CheckIsDuplicateAppNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool CheckIsDuplicateAppNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string CheckIsDuplicateAppNameRequest::getName() const
{
    return name_;
}

void CheckIsDuplicateAppNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckIsDuplicateAppNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CheckIsDuplicateAppNameRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckIsDuplicateAppNameRequest::getProjectId() const
{
    return projectId_;
}

void CheckIsDuplicateAppNameRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckIsDuplicateAppNameRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckIsDuplicateAppNameRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsbuild/v3/model/ShowAvailableInnerSpecRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowAvailableInnerSpecRequest::ShowAvailableInnerSpecRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
}

ShowAvailableInnerSpecRequest::~ShowAvailableInnerSpecRequest() = default;

void ShowAvailableInnerSpecRequest::validate()
{
}

web::json::value ShowAvailableInnerSpecRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }

    return val;
}
bool ShowAvailableInnerSpecRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    return ok;
}


std::string ShowAvailableInnerSpecRequest::getProjectId() const
{
    return projectId_;
}

void ShowAvailableInnerSpecRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAvailableInnerSpecRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAvailableInnerSpecRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowAvailableInnerSpecRequest::getArch() const
{
    return arch_;
}

void ShowAvailableInnerSpecRequest::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ShowAvailableInnerSpecRequest::archIsSet() const
{
    return archIsSet_;
}

void ShowAvailableInnerSpecRequest::unsetarch()
{
    archIsSet_ = false;
}

}
}
}
}
}



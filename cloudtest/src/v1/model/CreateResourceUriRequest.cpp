

#include "huaweicloud/cloudtest/v1/model/CreateResourceUriRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateResourceUriRequest::CreateResourceUriRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

CreateResourceUriRequest::~CreateResourceUriRequest() = default;

void CreateResourceUriRequest::validate()
{
}

web::json::value CreateResourceUriRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool CreateResourceUriRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateResourceUriRequest::getProjectId() const
{
    return projectId_;
}

void CreateResourceUriRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateResourceUriRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateResourceUriRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



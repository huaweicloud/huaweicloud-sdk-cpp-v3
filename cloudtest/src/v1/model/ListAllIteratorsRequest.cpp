

#include "huaweicloud/cloudtest/v1/model/ListAllIteratorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllIteratorsRequest::ListAllIteratorsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListAllIteratorsRequest::~ListAllIteratorsRequest() = default;

void ListAllIteratorsRequest::validate()
{
}

web::json::value ListAllIteratorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListAllIteratorsRequest::fromJson(const web::json::value& val)
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


std::string ListAllIteratorsRequest::getProjectId() const
{
    return projectId_;
}

void ListAllIteratorsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAllIteratorsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAllIteratorsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



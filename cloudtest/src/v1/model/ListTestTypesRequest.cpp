

#include "huaweicloud/cloudtest/v1/model/ListTestTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestTypesRequest::ListTestTypesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListTestTypesRequest::~ListTestTypesRequest() = default;

void ListTestTypesRequest::validate()
{
}

web::json::value ListTestTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListTestTypesRequest::fromJson(const web::json::value& val)
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


std::string ListTestTypesRequest::getProjectId() const
{
    return projectId_;
}

void ListTestTypesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestTypesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestTypesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



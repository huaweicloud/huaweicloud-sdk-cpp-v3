

#include "huaweicloud/cloudtest/v1/model/ListProjectTestCaseFieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListProjectTestCaseFieldsRequest::ListProjectTestCaseFieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectTestCaseFieldsRequest::~ListProjectTestCaseFieldsRequest() = default;

void ListProjectTestCaseFieldsRequest::validate()
{
}

web::json::value ListProjectTestCaseFieldsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectTestCaseFieldsRequest::fromJson(const web::json::value& val)
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


std::string ListProjectTestCaseFieldsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectTestCaseFieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectTestCaseFieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectTestCaseFieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



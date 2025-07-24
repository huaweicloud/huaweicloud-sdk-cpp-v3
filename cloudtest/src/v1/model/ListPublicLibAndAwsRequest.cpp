

#include "huaweicloud/cloudtest/v1/model/ListPublicLibAndAwsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListPublicLibAndAwsRequest::ListPublicLibAndAwsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListPublicLibAndAwsRequest::~ListPublicLibAndAwsRequest() = default;

void ListPublicLibAndAwsRequest::validate()
{
}

web::json::value ListPublicLibAndAwsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListPublicLibAndAwsRequest::fromJson(const web::json::value& val)
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


std::string ListPublicLibAndAwsRequest::getProjectId() const
{
    return projectId_;
}

void ListPublicLibAndAwsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPublicLibAndAwsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPublicLibAndAwsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



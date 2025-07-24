

#include "huaweicloud/cloudtest/v1/model/ListDomainVisibleServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListDomainVisibleServicesRequest::ListDomainVisibleServicesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListDomainVisibleServicesRequest::~ListDomainVisibleServicesRequest() = default;

void ListDomainVisibleServicesRequest::validate()
{
}

web::json::value ListDomainVisibleServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListDomainVisibleServicesRequest::fromJson(const web::json::value& val)
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


std::string ListDomainVisibleServicesRequest::getProjectId() const
{
    return projectId_;
}

void ListDomainVisibleServicesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDomainVisibleServicesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDomainVisibleServicesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



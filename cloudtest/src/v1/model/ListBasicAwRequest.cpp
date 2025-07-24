

#include "huaweicloud/cloudtest/v1/model/ListBasicAwRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBasicAwRequest::ListBasicAwRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    awId_ = "";
    awIdIsSet_ = false;
}

ListBasicAwRequest::~ListBasicAwRequest() = default;

void ListBasicAwRequest::validate()
{
}

web::json::value ListBasicAwRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(awIdIsSet_) {
        val[utility::conversions::to_string_t("aw_id")] = ModelBase::toJson(awId_);
    }

    return val;
}
bool ListBasicAwRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("aw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwId(refVal);
        }
    }
    return ok;
}


std::string ListBasicAwRequest::getProjectId() const
{
    return projectId_;
}

void ListBasicAwRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBasicAwRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBasicAwRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListBasicAwRequest::getAwId() const
{
    return awId_;
}

void ListBasicAwRequest::setAwId(const std::string& value)
{
    awId_ = value;
    awIdIsSet_ = true;
}

bool ListBasicAwRequest::awIdIsSet() const
{
    return awIdIsSet_;
}

void ListBasicAwRequest::unsetawId()
{
    awIdIsSet_ = false;
}

}
}
}
}
}



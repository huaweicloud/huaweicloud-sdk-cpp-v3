

#include "huaweicloud/cloudtest/v1/model/ListUserPopupInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserPopupInfoRequest::ListUserPopupInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListUserPopupInfoRequest::~ListUserPopupInfoRequest() = default;

void ListUserPopupInfoRequest::validate()
{
}

web::json::value ListUserPopupInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListUserPopupInfoRequest::fromJson(const web::json::value& val)
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


std::string ListUserPopupInfoRequest::getProjectId() const
{
    return projectId_;
}

void ListUserPopupInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListUserPopupInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListUserPopupInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



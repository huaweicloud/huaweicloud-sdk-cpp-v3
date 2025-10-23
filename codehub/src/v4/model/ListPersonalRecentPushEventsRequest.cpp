

#include "huaweicloud/codehub/v4/model/ListPersonalRecentPushEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListPersonalRecentPushEventsRequest::ListPersonalRecentPushEventsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListPersonalRecentPushEventsRequest::~ListPersonalRecentPushEventsRequest() = default;

void ListPersonalRecentPushEventsRequest::validate()
{
}

web::json::value ListPersonalRecentPushEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListPersonalRecentPushEventsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ListPersonalRecentPushEventsRequest::getProjectId() const
{
    return projectId_;
}

void ListPersonalRecentPushEventsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPersonalRecentPushEventsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPersonalRecentPushEventsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListPersonalRecentPushEventsRequest::getSize() const
{
    return size_;
}

void ListPersonalRecentPushEventsRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListPersonalRecentPushEventsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListPersonalRecentPushEventsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}



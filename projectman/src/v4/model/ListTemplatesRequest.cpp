

#include "huaweicloud/projectman/v4/model/ListTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListTemplatesRequest::ListTemplatesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
}

ListTemplatesRequest::~ListTemplatesRequest() = default;

void ListTemplatesRequest::validate()
{
}

web::json::value ListTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }

    return val;
}
bool ListTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    return ok;
}


std::string ListTemplatesRequest::getProjectId() const
{
    return projectId_;
}

void ListTemplatesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTemplatesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTemplatesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTemplatesRequest::getTrackerId() const
{
    return trackerId_;
}

void ListTemplatesRequest::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ListTemplatesRequest::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ListTemplatesRequest::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

}
}
}
}
}



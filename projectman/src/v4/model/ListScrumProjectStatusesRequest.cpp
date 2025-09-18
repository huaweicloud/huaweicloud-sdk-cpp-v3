

#include "huaweicloud/projectman/v4/model/ListScrumProjectStatusesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListScrumProjectStatusesRequest::ListScrumProjectStatusesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
}

ListScrumProjectStatusesRequest::~ListScrumProjectStatusesRequest() = default;

void ListScrumProjectStatusesRequest::validate()
{
}

web::json::value ListScrumProjectStatusesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }

    return val;
}
bool ListScrumProjectStatusesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    return ok;
}


std::string ListScrumProjectStatusesRequest::getProjectId() const
{
    return projectId_;
}

void ListScrumProjectStatusesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListScrumProjectStatusesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListScrumProjectStatusesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListScrumProjectStatusesRequest::getOffset() const
{
    return offset_;
}

void ListScrumProjectStatusesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScrumProjectStatusesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScrumProjectStatusesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScrumProjectStatusesRequest::getLimit() const
{
    return limit_;
}

void ListScrumProjectStatusesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScrumProjectStatusesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScrumProjectStatusesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListScrumProjectStatusesRequest::getTrackerId() const
{
    return trackerId_;
}

void ListScrumProjectStatusesRequest::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ListScrumProjectStatusesRequest::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ListScrumProjectStatusesRequest::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

}
}
}
}
}



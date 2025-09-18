

#include "huaweicloud/projectman/v4/model/ListStatusStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListStatusStatisticRequest::ListStatusStatisticRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
}

ListStatusStatisticRequest::~ListStatusStatisticRequest() = default;

void ListStatusStatisticRequest::validate()
{
}

web::json::value ListStatusStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }

    return val;
}
bool ListStatusStatisticRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    return ok;
}


std::string ListStatusStatisticRequest::getProjectId() const
{
    return projectId_;
}

void ListStatusStatisticRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListStatusStatisticRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListStatusStatisticRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListStatusStatisticRequest::getIterationId() const
{
    return iterationId_;
}

void ListStatusStatisticRequest::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool ListStatusStatisticRequest::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void ListStatusStatisticRequest::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

int32_t ListStatusStatisticRequest::getTrackerId() const
{
    return trackerId_;
}

void ListStatusStatisticRequest::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ListStatusStatisticRequest::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ListStatusStatisticRequest::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

int32_t ListStatusStatisticRequest::getStatusId() const
{
    return statusId_;
}

void ListStatusStatisticRequest::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ListStatusStatisticRequest::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ListStatusStatisticRequest::unsetstatusId()
{
    statusIdIsSet_ = false;
}

}
}
}
}
}



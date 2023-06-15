

#include "huaweicloud/live/v2/model/ListSnapshotDataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSnapshotDataRequest::ListSnapshotDataRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListSnapshotDataRequest::~ListSnapshotDataRequest() = default;

void ListSnapshotDataRequest::validate()
{
}

web::json::value ListSnapshotDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListSnapshotDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListSnapshotDataRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListSnapshotDataRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListSnapshotDataRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListSnapshotDataRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListSnapshotDataRequest::getStartTime() const
{
    return startTime_;
}

void ListSnapshotDataRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSnapshotDataRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSnapshotDataRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSnapshotDataRequest::getEndTime() const
{
    return endTime_;
}

void ListSnapshotDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSnapshotDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSnapshotDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



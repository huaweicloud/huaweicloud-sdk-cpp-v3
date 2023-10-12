

#include "huaweicloud/rds/v3/model/ListPostgresqlHbaInfoHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlHbaInfoHistoryRequest::ListPostgresqlHbaInfoHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
}

ListPostgresqlHbaInfoHistoryRequest::~ListPostgresqlHbaInfoHistoryRequest() = default;

void ListPostgresqlHbaInfoHistoryRequest::validate()
{
}

web::json::value ListPostgresqlHbaInfoHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListPostgresqlHbaInfoHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListPostgresqlHbaInfoHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPostgresqlHbaInfoHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPostgresqlHbaInfoHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPostgresqlHbaInfoHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

utility::datetime ListPostgresqlHbaInfoHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ListPostgresqlHbaInfoHistoryRequest::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPostgresqlHbaInfoHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPostgresqlHbaInfoHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ListPostgresqlHbaInfoHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ListPostgresqlHbaInfoHistoryRequest::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPostgresqlHbaInfoHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPostgresqlHbaInfoHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



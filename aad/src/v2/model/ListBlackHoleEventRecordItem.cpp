

#include "huaweicloud/aad/v2/model/ListBlackHoleEventRecordItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListBlackHoleEventRecordItem::ListBlackHoleEventRecordItem()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    vip_ = "";
    vipIsSet_ = false;
    vipId_ = "";
    vipIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
}

ListBlackHoleEventRecordItem::~ListBlackHoleEventRecordItem() = default;

void ListBlackHoleEventRecordItem::validate()
{
}

web::json::value ListBlackHoleEventRecordItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(vipIsSet_) {
        val[utility::conversions::to_string_t("vip")] = ModelBase::toJson(vip_);
    }
    if(vipIdIsSet_) {
        val[utility::conversions::to_string_t("vip_id")] = ModelBase::toJson(vipId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListBlackHoleEventRecordItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListBlackHoleEventRecordItem::getProjectId() const
{
    return projectId_;
}

void ListBlackHoleEventRecordItem::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBlackHoleEventRecordItem::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListBlackHoleEventRecordItem::getTenantName() const
{
    return tenantName_;
}

void ListBlackHoleEventRecordItem::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ListBlackHoleEventRecordItem::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ListBlackHoleEventRecordItem::getVip() const
{
    return vip_;
}

void ListBlackHoleEventRecordItem::setVip(const std::string& value)
{
    vip_ = value;
    vipIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::vipIsSet() const
{
    return vipIsSet_;
}

void ListBlackHoleEventRecordItem::unsetvip()
{
    vipIsSet_ = false;
}

std::string ListBlackHoleEventRecordItem::getVipId() const
{
    return vipId_;
}

void ListBlackHoleEventRecordItem::setVipId(const std::string& value)
{
    vipId_ = value;
    vipIdIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::vipIdIsSet() const
{
    return vipIdIsSet_;
}

void ListBlackHoleEventRecordItem::unsetvipId()
{
    vipIdIsSet_ = false;
}

std::string ListBlackHoleEventRecordItem::getInstanceId() const
{
    return instanceId_;
}

void ListBlackHoleEventRecordItem::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBlackHoleEventRecordItem::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBlackHoleEventRecordItem::getEventType() const
{
    return eventType_;
}

void ListBlackHoleEventRecordItem::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void ListBlackHoleEventRecordItem::unseteventType()
{
    eventTypeIsSet_ = false;
}

int32_t ListBlackHoleEventRecordItem::getStartTime() const
{
    return startTime_;
}

void ListBlackHoleEventRecordItem::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBlackHoleEventRecordItem::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ListBlackHoleEventRecordItem::getEndTime() const
{
    return endTime_;
}

void ListBlackHoleEventRecordItem::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBlackHoleEventRecordItem::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBlackHoleEventRecordItem::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



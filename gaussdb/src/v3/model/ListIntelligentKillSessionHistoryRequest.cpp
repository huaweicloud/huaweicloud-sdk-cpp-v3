

#include "huaweicloud/gaussdb/v3/model/ListIntelligentKillSessionHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListIntelligentKillSessionHistoryRequest::ListIntelligentKillSessionHistoryRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ListIntelligentKillSessionHistoryRequest::~ListIntelligentKillSessionHistoryRequest() = default;

void ListIntelligentKillSessionHistoryRequest::validate()
{
}

web::json::value ListIntelligentKillSessionHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListIntelligentKillSessionHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListIntelligentKillSessionHistoryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListIntelligentKillSessionHistoryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListIntelligentKillSessionHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListIntelligentKillSessionHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListIntelligentKillSessionHistoryRequest::getNodeId() const
{
    return nodeId_;
}

void ListIntelligentKillSessionHistoryRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int64_t ListIntelligentKillSessionHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ListIntelligentKillSessionHistoryRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListIntelligentKillSessionHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ListIntelligentKillSessionHistoryRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListIntelligentKillSessionHistoryRequest::getLimit() const
{
    return limit_;
}

void ListIntelligentKillSessionHistoryRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListIntelligentKillSessionHistoryRequest::getOffset() const
{
    return offset_;
}

void ListIntelligentKillSessionHistoryRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIntelligentKillSessionHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



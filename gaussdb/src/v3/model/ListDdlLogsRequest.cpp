

#include "huaweicloud/gaussdb/v3/model/ListDdlLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListDdlLogsRequest::ListDdlLogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListDdlLogsRequest::~ListDdlLogsRequest() = default;

void ListDdlLogsRequest::validate()
{
}

web::json::value ListDdlLogsRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListDdlLogsRequest::fromJson(const web::json::value& val)
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


std::string ListDdlLogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDdlLogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDdlLogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDdlLogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDdlLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDdlLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDdlLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDdlLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDdlLogsRequest::getNodeId() const
{
    return nodeId_;
}

void ListDdlLogsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListDdlLogsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListDdlLogsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListDdlLogsRequest::getOffset() const
{
    return offset_;
}

void ListDdlLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDdlLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDdlLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDdlLogsRequest::getLimit() const
{
    return limit_;
}

void ListDdlLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDdlLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDdlLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDdlLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListDdlLogsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDdlLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDdlLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDdlLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListDdlLogsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDdlLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDdlLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



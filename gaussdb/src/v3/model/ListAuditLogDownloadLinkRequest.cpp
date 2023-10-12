

#include "huaweicloud/gaussdb/v3/model/ListAuditLogDownloadLinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListAuditLogDownloadLinkRequest::ListAuditLogDownloadLinkRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    lastFileName_ = "";
    lastFileNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListAuditLogDownloadLinkRequest::~ListAuditLogDownloadLinkRequest() = default;

void ListAuditLogDownloadLinkRequest::validate()
{
}

web::json::value ListAuditLogDownloadLinkRequest::toJson() const
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
    if(lastFileNameIsSet_) {
        val[utility::conversions::to_string_t("last_file_name")] = ModelBase::toJson(lastFileName_);
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
bool ListAuditLogDownloadLinkRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("last_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastFileName(refVal);
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


std::string ListAuditLogDownloadLinkRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAuditLogDownloadLinkRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAuditLogDownloadLinkRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditLogDownloadLinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditLogDownloadLinkRequest::getNodeId() const
{
    return nodeId_;
}

void ListAuditLogDownloadLinkRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListAuditLogDownloadLinkRequest::getLastFileName() const
{
    return lastFileName_;
}

void ListAuditLogDownloadLinkRequest::setLastFileName(const std::string& value)
{
    lastFileName_ = value;
    lastFileNameIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::lastFileNameIsSet() const
{
    return lastFileNameIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetlastFileName()
{
    lastFileNameIsSet_ = false;
}

int32_t ListAuditLogDownloadLinkRequest::getLimit() const
{
    return limit_;
}

void ListAuditLogDownloadLinkRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAuditLogDownloadLinkRequest::getStartTime() const
{
    return startTime_;
}

void ListAuditLogDownloadLinkRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAuditLogDownloadLinkRequest::getEndTime() const
{
    return endTime_;
}

void ListAuditLogDownloadLinkRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAuditLogDownloadLinkRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAuditLogDownloadLinkRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



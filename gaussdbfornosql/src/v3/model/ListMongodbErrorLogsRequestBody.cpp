

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbErrorLogsRequestBody::ListMongodbErrorLogsRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    keywordsIsSet_ = false;
}

ListMongodbErrorLogsRequestBody::~ListMongodbErrorLogsRequestBody() = default;

void ListMongodbErrorLogsRequestBody::validate()
{
}

web::json::value ListMongodbErrorLogsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }

    return val;
}
bool ListMongodbErrorLogsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
        }
    }
    return ok;
}


std::string ListMongodbErrorLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListMongodbErrorLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListMongodbErrorLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListMongodbErrorLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListMongodbErrorLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListMongodbErrorLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMongodbErrorLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListMongodbErrorLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListMongodbErrorLogsRequestBody::getSeverity() const
{
    return severity_;
}

void ListMongodbErrorLogsRequestBody::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::severityIsSet() const
{
    return severityIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ListMongodbErrorLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListMongodbErrorLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListMongodbErrorLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListMongodbErrorLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListMongodbErrorLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListMongodbErrorLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

}
}
}
}
}



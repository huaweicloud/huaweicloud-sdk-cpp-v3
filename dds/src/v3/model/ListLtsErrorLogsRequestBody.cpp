

#include "huaweicloud/dds/v3/model/ListLtsErrorLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsErrorLogsRequestBody::ListLtsErrorLogsRequestBody()
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
    searchType_ = "";
    searchTypeIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    keywordsIsSet_ = false;
}

ListLtsErrorLogsRequestBody::~ListLtsErrorLogsRequestBody() = default;

void ListLtsErrorLogsRequestBody::validate()
{
}

web::json::value ListLtsErrorLogsRequestBody::toJson() const
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
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }

    return val;
}
bool ListLtsErrorLogsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
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


std::string ListLtsErrorLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListLtsErrorLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListLtsErrorLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListLtsErrorLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListLtsErrorLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListLtsErrorLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLtsErrorLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListLtsErrorLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListLtsErrorLogsRequestBody::getSeverity() const
{
    return severity_;
}

void ListLtsErrorLogsRequestBody::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::severityIsSet() const
{
    return severityIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ListLtsErrorLogsRequestBody::getSearchType() const
{
    return searchType_;
}

void ListLtsErrorLogsRequestBody::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string ListLtsErrorLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListLtsErrorLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListLtsErrorLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListLtsErrorLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListLtsErrorLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListLtsErrorLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

}
}
}
}
}



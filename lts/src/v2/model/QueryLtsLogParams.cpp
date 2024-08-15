

#include "huaweicloud/lts/v2/model/QueryLtsLogParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




QueryLtsLogParams::QueryLtsLogParams()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    labelsIsSet_ = false;
    isCount_ = false;
    isCountIsSet_ = false;
    keywords_ = "";
    keywordsIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    isDesc_ = false;
    isDescIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    highlight_ = false;
    highlightIsSet_ = false;
    isIterative_ = false;
    isIterativeIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    isAnalysisQuery_ = false;
    isAnalysisQueryIsSet_ = false;
}

QueryLtsLogParams::~QueryLtsLogParams() = default;

void QueryLtsLogParams::validate()
{
}

web::json::value QueryLtsLogParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(isCountIsSet_) {
        val[utility::conversions::to_string_t("is_count")] = ModelBase::toJson(isCount_);
    }
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("__time__")] = ModelBase::toJson(time_);
    }
    if(isDescIsSet_) {
        val[utility::conversions::to_string_t("is_desc")] = ModelBase::toJson(isDesc_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(highlightIsSet_) {
        val[utility::conversions::to_string_t("highlight")] = ModelBase::toJson(highlight_);
    }
    if(isIterativeIsSet_) {
        val[utility::conversions::to_string_t("is_iterative")] = ModelBase::toJson(isIterative_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(isAnalysisQueryIsSet_) {
        val[utility::conversions::to_string_t("is_analysis_query")] = ModelBase::toJson(isAnalysisQuery_);
    }

    return val;
}
bool QueryLtsLogParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_count"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__time__"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__time__"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_desc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDesc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("highlight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("highlight"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighlight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_iterative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_iterative"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIterative(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_analysis_query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_analysis_query"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAnalysisQuery(refVal);
        }
    }
    return ok;
}


std::string QueryLtsLogParams::getStartTime() const
{
    return startTime_;
}

void QueryLtsLogParams::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QueryLtsLogParams::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QueryLtsLogParams::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string QueryLtsLogParams::getEndTime() const
{
    return endTime_;
}

void QueryLtsLogParams::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryLtsLogParams::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryLtsLogParams::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::map<std::string, std::string>& QueryLtsLogParams::getLabels()
{
    return labels_;
}

void QueryLtsLogParams::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool QueryLtsLogParams::labelsIsSet() const
{
    return labelsIsSet_;
}

void QueryLtsLogParams::unsetlabels()
{
    labelsIsSet_ = false;
}

bool QueryLtsLogParams::isIsCount() const
{
    return isCount_;
}

void QueryLtsLogParams::setIsCount(bool value)
{
    isCount_ = value;
    isCountIsSet_ = true;
}

bool QueryLtsLogParams::isCountIsSet() const
{
    return isCountIsSet_;
}

void QueryLtsLogParams::unsetisCount()
{
    isCountIsSet_ = false;
}

std::string QueryLtsLogParams::getKeywords() const
{
    return keywords_;
}

void QueryLtsLogParams::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool QueryLtsLogParams::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void QueryLtsLogParams::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string QueryLtsLogParams::getLineNum() const
{
    return lineNum_;
}

void QueryLtsLogParams::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool QueryLtsLogParams::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void QueryLtsLogParams::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string QueryLtsLogParams::getTime() const
{
    return time_;
}

void QueryLtsLogParams::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool QueryLtsLogParams::timeIsSet() const
{
    return timeIsSet_;
}

void QueryLtsLogParams::unsettime()
{
    timeIsSet_ = false;
}

bool QueryLtsLogParams::isIsDesc() const
{
    return isDesc_;
}

void QueryLtsLogParams::setIsDesc(bool value)
{
    isDesc_ = value;
    isDescIsSet_ = true;
}

bool QueryLtsLogParams::isDescIsSet() const
{
    return isDescIsSet_;
}

void QueryLtsLogParams::unsetisDesc()
{
    isDescIsSet_ = false;
}

std::string QueryLtsLogParams::getSearchType() const
{
    return searchType_;
}

void QueryLtsLogParams::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool QueryLtsLogParams::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void QueryLtsLogParams::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

int32_t QueryLtsLogParams::getLimit() const
{
    return limit_;
}

void QueryLtsLogParams::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryLtsLogParams::limitIsSet() const
{
    return limitIsSet_;
}

void QueryLtsLogParams::unsetlimit()
{
    limitIsSet_ = false;
}

bool QueryLtsLogParams::isHighlight() const
{
    return highlight_;
}

void QueryLtsLogParams::setHighlight(bool value)
{
    highlight_ = value;
    highlightIsSet_ = true;
}

bool QueryLtsLogParams::highlightIsSet() const
{
    return highlightIsSet_;
}

void QueryLtsLogParams::unsethighlight()
{
    highlightIsSet_ = false;
}

bool QueryLtsLogParams::isIsIterative() const
{
    return isIterative_;
}

void QueryLtsLogParams::setIsIterative(bool value)
{
    isIterative_ = value;
    isIterativeIsSet_ = true;
}

bool QueryLtsLogParams::isIterativeIsSet() const
{
    return isIterativeIsSet_;
}

void QueryLtsLogParams::unsetisIterative()
{
    isIterativeIsSet_ = false;
}

std::string QueryLtsLogParams::getQuery() const
{
    return query_;
}

void QueryLtsLogParams::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool QueryLtsLogParams::queryIsSet() const
{
    return queryIsSet_;
}

void QueryLtsLogParams::unsetquery()
{
    queryIsSet_ = false;
}

bool QueryLtsLogParams::isIsAnalysisQuery() const
{
    return isAnalysisQuery_;
}

void QueryLtsLogParams::setIsAnalysisQuery(bool value)
{
    isAnalysisQuery_ = value;
    isAnalysisQueryIsSet_ = true;
}

bool QueryLtsLogParams::isAnalysisQueryIsSet() const
{
    return isAnalysisQueryIsSet_;
}

void QueryLtsLogParams::unsetisAnalysisQuery()
{
    isAnalysisQueryIsSet_ = false;
}

}
}
}
}
}



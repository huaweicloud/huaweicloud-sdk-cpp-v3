

#include "huaweicloud/codeartspipeline/v2/model/LogQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




LogQuery::LogQuery()
{
    startOffset_ = 0L;
    startOffsetIsSet_ = false;
    endOffset_ = 0L;
    endOffsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

LogQuery::~LogQuery() = default;

void LogQuery::validate()
{
}

web::json::value LogQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startOffsetIsSet_) {
        val[utility::conversions::to_string_t("start_offset")] = ModelBase::toJson(startOffset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool LogQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


int64_t LogQuery::getStartOffset() const
{
    return startOffset_;
}

void LogQuery::setStartOffset(int64_t value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool LogQuery::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void LogQuery::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

int64_t LogQuery::getEndOffset() const
{
    return endOffset_;
}

void LogQuery::setEndOffset(int64_t value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool LogQuery::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void LogQuery::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

int64_t LogQuery::getLimit() const
{
    return limit_;
}

void LogQuery::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool LogQuery::limitIsSet() const
{
    return limitIsSet_;
}

void LogQuery::unsetlimit()
{
    limitIsSet_ = false;
}

std::string LogQuery::getSort() const
{
    return sort_;
}

void LogQuery::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool LogQuery::sortIsSet() const
{
    return sortIsSet_;
}

void LogQuery::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/tics/v1/model/ListSqlJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListSqlJobRequest::ListSqlJobRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSqlJobRequest::~ListSqlJobRequest() = default;

void ListSqlJobRequest::validate()
{
}

web::json::value ListSqlJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListSqlJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListSqlJobRequest::getLeagueId() const
{
    return leagueId_;
}

void ListSqlJobRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListSqlJobRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListSqlJobRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListSqlJobRequest::getLimit() const
{
    return limit_;
}

void ListSqlJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSqlJobRequest::getOffset() const
{
    return offset_;
}

void ListSqlJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



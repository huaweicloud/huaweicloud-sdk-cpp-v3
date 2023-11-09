

#include "huaweicloud/tics/v1/model/ListFlJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListFlJobRequest::ListFlJobRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFlJobRequest::~ListFlJobRequest() = default;

void ListFlJobRequest::validate()
{
}

web::json::value ListFlJobRequest::toJson() const
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
bool ListFlJobRequest::fromJson(const web::json::value& val)
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


std::string ListFlJobRequest::getLeagueId() const
{
    return leagueId_;
}

void ListFlJobRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListFlJobRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListFlJobRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListFlJobRequest::getLimit() const
{
    return limit_;
}

void ListFlJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFlJobRequest::getOffset() const
{
    return offset_;
}

void ListFlJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



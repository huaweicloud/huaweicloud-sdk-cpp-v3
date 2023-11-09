

#include "huaweicloud/tics/v1/model/ListAuditInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListAuditInfoRequest::ListAuditInfoRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListAuditInfoRequest::~ListAuditInfoRequest() = default;

void ListAuditInfoRequest::validate()
{
}

web::json::value ListAuditInfoRequest::toJson() const
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
bool ListAuditInfoRequest::fromJson(const web::json::value& val)
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


std::string ListAuditInfoRequest::getLeagueId() const
{
    return leagueId_;
}

void ListAuditInfoRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListAuditInfoRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListAuditInfoRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListAuditInfoRequest::getLimit() const
{
    return limit_;
}

void ListAuditInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAuditInfoRequest::getOffset() const
{
    return offset_;
}

void ListAuditInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



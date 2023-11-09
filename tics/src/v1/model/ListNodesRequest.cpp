

#include "huaweicloud/tics/v1/model/ListNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListNodesRequest::ListNodesRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListNodesRequest::~ListNodesRequest() = default;

void ListNodesRequest::validate()
{
}

web::json::value ListNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListNodesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListNodesRequest::getLeagueId() const
{
    return leagueId_;
}

void ListNodesRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListNodesRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListNodesRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListNodesRequest::getOffset() const
{
    return offset_;
}

void ListNodesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNodesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNodesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListNodesRequest::getLimit() const
{
    return limit_;
}

void ListNodesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNodesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNodesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



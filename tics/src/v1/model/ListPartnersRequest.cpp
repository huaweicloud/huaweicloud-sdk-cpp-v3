

#include "huaweicloud/tics/v1/model/ListPartnersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListPartnersRequest::ListPartnersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
}

ListPartnersRequest::~ListPartnersRequest() = default;

void ListPartnersRequest::validate()
{
}

web::json::value ListPartnersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }

    return val;
}
bool ListPartnersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    return ok;
}


int32_t ListPartnersRequest::getLimit() const
{
    return limit_;
}

void ListPartnersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPartnersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPartnersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPartnersRequest::getOffset() const
{
    return offset_;
}

void ListPartnersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPartnersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPartnersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPartnersRequest::getLeagueId() const
{
    return leagueId_;
}

void ListPartnersRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListPartnersRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListPartnersRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/tics/v1/model/UpdateLeagueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




UpdateLeagueRequest::UpdateLeagueRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLeagueRequest::~UpdateLeagueRequest() = default;

void UpdateLeagueRequest::validate()
{
}

web::json::value UpdateLeagueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLeagueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LeagueUpdateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLeagueRequest::getLeagueId() const
{
    return leagueId_;
}

void UpdateLeagueRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool UpdateLeagueRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void UpdateLeagueRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

LeagueUpdateVo UpdateLeagueRequest::getBody() const
{
    return body_;
}

void UpdateLeagueRequest::setBody(const LeagueUpdateVo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLeagueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLeagueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



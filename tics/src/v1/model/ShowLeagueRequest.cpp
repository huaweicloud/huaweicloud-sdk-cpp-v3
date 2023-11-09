

#include "huaweicloud/tics/v1/model/ShowLeagueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowLeagueRequest::ShowLeagueRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
}

ShowLeagueRequest::~ShowLeagueRequest() = default;

void ShowLeagueRequest::validate()
{
}

web::json::value ShowLeagueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }

    return val;
}
bool ShowLeagueRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLeagueRequest::getLeagueId() const
{
    return leagueId_;
}

void ShowLeagueRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ShowLeagueRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ShowLeagueRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

}
}
}
}
}



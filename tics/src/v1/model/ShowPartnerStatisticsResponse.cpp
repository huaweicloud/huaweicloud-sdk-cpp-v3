

#include "huaweicloud/tics/v1/model/ShowPartnerStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowPartnerStatisticsResponse::ShowPartnerStatisticsResponse()
{
    bodyIsSet_ = false;
}

ShowPartnerStatisticsResponse::~ShowPartnerStatisticsResponse() = default;

void ShowPartnerStatisticsResponse::validate()
{
}

web::json::value ShowPartnerStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPartnerStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LeaguePartnerStatisticsVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LeaguePartnerStatisticsVo>& ShowPartnerStatisticsResponse::getBody()
{
    return body_;
}

void ShowPartnerStatisticsResponse::setBody(const std::vector<LeaguePartnerStatisticsVo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPartnerStatisticsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPartnerStatisticsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



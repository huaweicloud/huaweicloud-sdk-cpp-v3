

#include "huaweicloud/tics/v1/model/ShowDatasetStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowDatasetStatisticsResponse::ShowDatasetStatisticsResponse()
{
    bodyIsSet_ = false;
}

ShowDatasetStatisticsResponse::~ShowDatasetStatisticsResponse() = default;

void ShowDatasetStatisticsResponse::validate()
{
}

web::json::value ShowDatasetStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowDatasetStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LeagueDatasetStatisticsVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LeagueDatasetStatisticsVo>& ShowDatasetStatisticsResponse::getBody()
{
    return body_;
}

void ShowDatasetStatisticsResponse::setBody(const std::vector<LeagueDatasetStatisticsVo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDatasetStatisticsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDatasetStatisticsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



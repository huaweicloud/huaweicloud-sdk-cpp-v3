

#include "huaweicloud/rds/v3/model/ResetViewSqlStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResetViewSqlStatisticsResponse::ResetViewSqlStatisticsResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

ResetViewSqlStatisticsResponse::~ResetViewSqlStatisticsResponse() = default;

void ResetViewSqlStatisticsResponse::validate()
{
}

web::json::value ResetViewSqlStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool ResetViewSqlStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}


std::string ResetViewSqlStatisticsResponse::getResp() const
{
    return resp_;
}

void ResetViewSqlStatisticsResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool ResetViewSqlStatisticsResponse::respIsSet() const
{
    return respIsSet_;
}

void ResetViewSqlStatisticsResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}



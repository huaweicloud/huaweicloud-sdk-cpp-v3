

#include "huaweicloud/rds/v3/model/UpdateStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateStatisticsResponse::UpdateStatisticsResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateStatisticsResponse::~UpdateStatisticsResponse() = default;

void UpdateStatisticsResponse::validate()
{
}

web::json::value UpdateStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateStatisticsResponse::fromJson(const web::json::value& val)
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


std::string UpdateStatisticsResponse::getResp() const
{
    return resp_;
}

void UpdateStatisticsResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateStatisticsResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateStatisticsResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dbss/v1/model/SetSqlRuleRankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSqlRuleRankResponse::SetSqlRuleRankResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetSqlRuleRankResponse::~SetSqlRuleRankResponse() = default;

void SetSqlRuleRankResponse::validate()
{
}

web::json::value SetSqlRuleRankResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetSqlRuleRankResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetSqlRuleRankResponse::getStatus() const
{
    return status_;
}

void SetSqlRuleRankResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetSqlRuleRankResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetSqlRuleRankResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



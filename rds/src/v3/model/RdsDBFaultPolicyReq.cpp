

#include "huaweicloud/rds/v3/model/RdsDBFaultPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RdsDBFaultPolicyReq::RdsDBFaultPolicyReq()
{
    dbPolicy_ = "";
    dbPolicyIsSet_ = false;
}

RdsDBFaultPolicyReq::~RdsDBFaultPolicyReq() = default;

void RdsDBFaultPolicyReq::validate()
{
}

web::json::value RdsDBFaultPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbPolicyIsSet_) {
        val[utility::conversions::to_string_t("db_policy")] = ModelBase::toJson(dbPolicy_);
    }

    return val;
}
bool RdsDBFaultPolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPolicy(refVal);
        }
    }
    return ok;
}


std::string RdsDBFaultPolicyReq::getDbPolicy() const
{
    return dbPolicy_;
}

void RdsDBFaultPolicyReq::setDbPolicy(const std::string& value)
{
    dbPolicy_ = value;
    dbPolicyIsSet_ = true;
}

bool RdsDBFaultPolicyReq::dbPolicyIsSet() const
{
    return dbPolicyIsSet_;
}

void RdsDBFaultPolicyReq::unsetdbPolicy()
{
    dbPolicyIsSet_ = false;
}

}
}
}
}
}



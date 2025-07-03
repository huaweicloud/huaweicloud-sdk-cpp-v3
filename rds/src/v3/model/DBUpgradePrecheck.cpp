

#include "huaweicloud/rds/v3/model/DBUpgradePrecheck.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DBUpgradePrecheck::DBUpgradePrecheck()
{
    result_ = 0;
    resultIsSet_ = false;
    checksPerformedIsSet_ = false;
}

DBUpgradePrecheck::~DBUpgradePrecheck() = default;

void DBUpgradePrecheck::validate()
{
}

web::json::value DBUpgradePrecheck::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(checksPerformedIsSet_) {
        val[utility::conversions::to_string_t("checks_performed")] = ModelBase::toJson(checksPerformed_);
    }

    return val;
}
bool DBUpgradePrecheck::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checks_performed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checks_performed"));
        if(!fieldValue.is_null())
        {
            std::vector<DBCheckDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChecksPerformed(refVal);
        }
    }
    return ok;
}


int32_t DBUpgradePrecheck::getResult() const
{
    return result_;
}

void DBUpgradePrecheck::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DBUpgradePrecheck::resultIsSet() const
{
    return resultIsSet_;
}

void DBUpgradePrecheck::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<DBCheckDetail>& DBUpgradePrecheck::getChecksPerformed()
{
    return checksPerformed_;
}

void DBUpgradePrecheck::setChecksPerformed(const std::vector<DBCheckDetail>& value)
{
    checksPerformed_ = value;
    checksPerformedIsSet_ = true;
}

bool DBUpgradePrecheck::checksPerformedIsSet() const
{
    return checksPerformedIsSet_;
}

void DBUpgradePrecheck::unsetchecksPerformed()
{
    checksPerformedIsSet_ = false;
}

}
}
}
}
}



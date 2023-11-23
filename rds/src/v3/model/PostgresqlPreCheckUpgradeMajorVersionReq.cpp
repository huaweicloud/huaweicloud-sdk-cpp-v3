

#include "huaweicloud/rds/v3/model/PostgresqlPreCheckUpgradeMajorVersionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlPreCheckUpgradeMajorVersionReq::PostgresqlPreCheckUpgradeMajorVersionReq()
{
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

PostgresqlPreCheckUpgradeMajorVersionReq::~PostgresqlPreCheckUpgradeMajorVersionReq() = default;

void PostgresqlPreCheckUpgradeMajorVersionReq::validate()
{
}

web::json::value PostgresqlPreCheckUpgradeMajorVersionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool PostgresqlPreCheckUpgradeMajorVersionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::string PostgresqlPreCheckUpgradeMajorVersionReq::getTargetVersion() const
{
    return targetVersion_;
}

void PostgresqlPreCheckUpgradeMajorVersionReq::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool PostgresqlPreCheckUpgradeMajorVersionReq::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void PostgresqlPreCheckUpgradeMajorVersionReq::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}



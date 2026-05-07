

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradePathsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradePathsResult::UpgradePathsResult()
{
    startVersion_ = "";
    startVersionIsSet_ = false;
    endVersion_ = "";
    endVersionIsSet_ = false;
}

UpgradePathsResult::~UpgradePathsResult() = default;

void UpgradePathsResult::validate()
{
}

web::json::value UpgradePathsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startVersionIsSet_) {
        val[utility::conversions::to_string_t("start_version")] = ModelBase::toJson(startVersion_);
    }
    if(endVersionIsSet_) {
        val[utility::conversions::to_string_t("end_version")] = ModelBase::toJson(endVersion_);
    }

    return val;
}
bool UpgradePathsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndVersion(refVal);
        }
    }
    return ok;
}


std::string UpgradePathsResult::getStartVersion() const
{
    return startVersion_;
}

void UpgradePathsResult::setStartVersion(const std::string& value)
{
    startVersion_ = value;
    startVersionIsSet_ = true;
}

bool UpgradePathsResult::startVersionIsSet() const
{
    return startVersionIsSet_;
}

void UpgradePathsResult::unsetstartVersion()
{
    startVersionIsSet_ = false;
}

std::string UpgradePathsResult::getEndVersion() const
{
    return endVersion_;
}

void UpgradePathsResult::setEndVersion(const std::string& value)
{
    endVersion_ = value;
    endVersionIsSet_ = true;
}

bool UpgradePathsResult::endVersionIsSet() const
{
    return endVersionIsSet_;
}

void UpgradePathsResult::unsetendVersion()
{
    endVersionIsSet_ = false;
}

}
}
}
}
}



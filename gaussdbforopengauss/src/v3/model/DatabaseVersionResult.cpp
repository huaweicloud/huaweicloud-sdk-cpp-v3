

#include "huaweicloud/gaussdbforopengauss/v3/model/DatabaseVersionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatabaseVersionResult::DatabaseVersionResult()
{
    softwareVersion_ = "";
    softwareVersionIsSet_ = false;
    hotfixesIsSet_ = false;
}

DatabaseVersionResult::~DatabaseVersionResult() = default;

void DatabaseVersionResult::validate()
{
}

web::json::value DatabaseVersionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(softwareVersionIsSet_) {
        val[utility::conversions::to_string_t("software_version")] = ModelBase::toJson(softwareVersion_);
    }
    if(hotfixesIsSet_) {
        val[utility::conversions::to_string_t("hotfixes")] = ModelBase::toJson(hotfixes_);
    }

    return val;
}
bool DatabaseVersionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("software_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("software_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSoftwareVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfixes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfixes"));
        if(!fieldValue.is_null())
        {
            std::vector<DbHotfixInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixes(refVal);
        }
    }
    return ok;
}


std::string DatabaseVersionResult::getSoftwareVersion() const
{
    return softwareVersion_;
}

void DatabaseVersionResult::setSoftwareVersion(const std::string& value)
{
    softwareVersion_ = value;
    softwareVersionIsSet_ = true;
}

bool DatabaseVersionResult::softwareVersionIsSet() const
{
    return softwareVersionIsSet_;
}

void DatabaseVersionResult::unsetsoftwareVersion()
{
    softwareVersionIsSet_ = false;
}

std::vector<DbHotfixInfoResult>& DatabaseVersionResult::getHotfixes()
{
    return hotfixes_;
}

void DatabaseVersionResult::setHotfixes(const std::vector<DbHotfixInfoResult>& value)
{
    hotfixes_ = value;
    hotfixesIsSet_ = true;
}

bool DatabaseVersionResult::hotfixesIsSet() const
{
    return hotfixesIsSet_;
}

void DatabaseVersionResult::unsethotfixes()
{
    hotfixesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ShowAvailableVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAvailableVersionResponse::ShowAvailableVersionResponse()
{
    availableVersionsIsSet_ = false;
}

ShowAvailableVersionResponse::~ShowAvailableVersionResponse() = default;

void ShowAvailableVersionResponse::validate()
{
}

web::json::value ShowAvailableVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availableVersionsIsSet_) {
        val[utility::conversions::to_string_t("available_versions")] = ModelBase::toJson(availableVersions_);
    }

    return val;
}
bool ShowAvailableVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("available_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableVersions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowAvailableVersionResponse::getAvailableVersions()
{
    return availableVersions_;
}

void ShowAvailableVersionResponse::setAvailableVersions(const std::vector<std::string>& value)
{
    availableVersions_ = value;
    availableVersionsIsSet_ = true;
}

bool ShowAvailableVersionResponse::availableVersionsIsSet() const
{
    return availableVersionsIsSet_;
}

void ShowAvailableVersionResponse::unsetavailableVersions()
{
    availableVersionsIsSet_ = false;
}

}
}
}
}
}



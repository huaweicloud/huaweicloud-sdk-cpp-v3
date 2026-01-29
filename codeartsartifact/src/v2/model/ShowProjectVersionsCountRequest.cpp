

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectVersionsCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectVersionsCountRequest::ShowProjectVersionsCountRequest()
{
    buildVersion_ = "";
    buildVersionIsSet_ = false;
}

ShowProjectVersionsCountRequest::~ShowProjectVersionsCountRequest() = default;

void ShowProjectVersionsCountRequest::validate()
{
}

web::json::value ShowProjectVersionsCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildVersionIsSet_) {
        val[utility::conversions::to_string_t("build_version")] = ModelBase::toJson(buildVersion_);
    }

    return val;
}
bool ShowProjectVersionsCountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildVersion(refVal);
        }
    }
    return ok;
}


std::string ShowProjectVersionsCountRequest::getBuildVersion() const
{
    return buildVersion_;
}

void ShowProjectVersionsCountRequest::setBuildVersion(const std::string& value)
{
    buildVersion_ = value;
    buildVersionIsSet_ = true;
}

bool ShowProjectVersionsCountRequest::buildVersionIsSet() const
{
    return buildVersionIsSet_;
}

void ShowProjectVersionsCountRequest::unsetbuildVersion()
{
    buildVersionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdbfornosql/v3/model/ShowApiVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApiVersionRequest::ShowApiVersionRequest()
{
    version_ = "";
    versionIsSet_ = false;
}

ShowApiVersionRequest::~ShowApiVersionRequest() = default;

void ShowApiVersionRequest::validate()
{
}

web::json::value ShowApiVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ShowApiVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}

std::string ShowApiVersionRequest::getVersion() const
{
    return version_;
}

void ShowApiVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowApiVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ShowApiVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



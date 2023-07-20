

#include "huaweicloud/gaussdbfornosql/v3/model/ShowApiVersionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApiVersionResponse::ShowApiVersionResponse()
{
    versionIsSet_ = false;
}

ShowApiVersionResponse::~ShowApiVersionResponse() = default;

void ShowApiVersionResponse::validate()
{
}

web::json::value ShowApiVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ShowApiVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            ApiVersionResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}

ApiVersionResponse ShowApiVersionResponse::getVersion() const
{
    return version_;
}

void ShowApiVersionResponse::setVersion(const ApiVersionResponse& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowApiVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowApiVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



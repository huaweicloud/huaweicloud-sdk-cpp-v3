

#include "huaweicloud/ecs/v2/model/NovaShowVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowVersionResponse::NovaShowVersionResponse()
{
    versionIsSet_ = false;
}

NovaShowVersionResponse::~NovaShowVersionResponse() = default;

void NovaShowVersionResponse::validate()
{
}

web::json::value NovaShowVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool NovaShowVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            NovaVersionDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


NovaVersionDetail NovaShowVersionResponse::getVersion() const
{
    return version_;
}

void NovaShowVersionResponse::setVersion(const NovaVersionDetail& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NovaShowVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void NovaShowVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



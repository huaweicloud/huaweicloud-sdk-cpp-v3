

#include "huaweicloud/sdrs/v1/model/ShowSpecifiedApiVersionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowSpecifiedApiVersionResponse::ShowSpecifiedApiVersionResponse()
{
    versionIsSet_ = false;
}

ShowSpecifiedApiVersionResponse::~ShowSpecifiedApiVersionResponse() = default;

void ShowSpecifiedApiVersionResponse::validate()
{
}

web::json::value ShowSpecifiedApiVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ShowSpecifiedApiVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            ShowApiVersionParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


ShowApiVersionParams ShowSpecifiedApiVersionResponse::getVersion() const
{
    return version_;
}

void ShowSpecifiedApiVersionResponse::setVersion(const ShowApiVersionParams& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowSpecifiedApiVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowSpecifiedApiVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



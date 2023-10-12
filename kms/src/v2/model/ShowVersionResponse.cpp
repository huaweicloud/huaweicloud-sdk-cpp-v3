

#include "huaweicloud/kms/v2/model/ShowVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowVersionResponse::ShowVersionResponse()
{
    versionIsSet_ = false;
}

ShowVersionResponse::~ShowVersionResponse() = default;

void ShowVersionResponse::validate()
{
}

web::json::value ShowVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


Object ShowVersionResponse::getVersion() const
{
    return version_;
}

void ShowVersionResponse::setVersion(const Object& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dbss/v1/model/ShowServerVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowServerVersionResponse::ShowServerVersionResponse()
{
    version_ = "";
    versionIsSet_ = false;
}

ShowServerVersionResponse::~ShowServerVersionResponse() = default;

void ShowServerVersionResponse::validate()
{
}

web::json::value ShowServerVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowServerVersionResponse::fromJson(const web::json::value& val)
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


std::string ShowServerVersionResponse::getVersion() const
{
    return version_;
}

void ShowServerVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowServerVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowServerVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



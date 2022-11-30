

#include "huaweicloud/ims/v2/model/ShowVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowVersionRequest::ShowVersionRequest()
{
    version_ = "";
    versionIsSet_ = false;
}

ShowVersionRequest::~ShowVersionRequest() = default;

void ShowVersionRequest::validate()
{
}

web::json::value ShowVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ShowVersionRequest::fromJson(const web::json::value& val)
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


std::string ShowVersionRequest::getVersion() const
{
    return version_;
}

void ShowVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ShowVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



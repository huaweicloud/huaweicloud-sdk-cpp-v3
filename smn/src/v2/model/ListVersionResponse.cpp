

#include "huaweicloud/smn/v2/model/ListVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListVersionResponse::ListVersionResponse()
{
    versionIsSet_ = false;
}

ListVersionResponse::~ListVersionResponse() = default;

void ListVersionResponse::validate()
{
}

web::json::value ListVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ListVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            VersionItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


VersionItem ListVersionResponse::getVersion() const
{
    return version_;
}

void ListVersionResponse::setVersion(const VersionItem& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ListVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}



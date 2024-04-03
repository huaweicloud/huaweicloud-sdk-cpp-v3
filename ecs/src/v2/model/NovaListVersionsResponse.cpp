

#include "huaweicloud/ecs/v2/model/NovaListVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListVersionsResponse::NovaListVersionsResponse()
{
    versionsIsSet_ = false;
}

NovaListVersionsResponse::~NovaListVersionsResponse() = default;

void NovaListVersionsResponse::validate()
{
}

web::json::value NovaListVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool NovaListVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaVersion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::vector<NovaVersion>& NovaListVersionsResponse::getVersions()
{
    return versions_;
}

void NovaListVersionsResponse::setVersions(const std::vector<NovaVersion>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool NovaListVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void NovaListVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



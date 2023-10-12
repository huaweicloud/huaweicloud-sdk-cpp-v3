

#include "huaweicloud/evs/v2/model/ShowVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVersionResponse::ShowVersionResponse()
{
    versionsIsSet_ = false;
}

ShowVersionResponse::~ShowVersionResponse() = default;

void ShowVersionResponse::validate()
{
}

web::json::value ShowVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool ShowVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<Versions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::vector<Versions>& ShowVersionResponse::getVersions()
{
    return versions_;
}

void ShowVersionResponse::setVersions(const std::vector<Versions>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ShowVersionResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ShowVersionResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



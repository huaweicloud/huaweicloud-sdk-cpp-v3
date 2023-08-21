

#include "huaweicloud/kms/v2/model/ShowVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowVersionsResponse::ShowVersionsResponse()
{
    versionsIsSet_ = false;
}

ShowVersionsResponse::~ShowVersionsResponse() = default;

void ShowVersionsResponse::validate()
{
}

web::json::value ShowVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ShowVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiVersionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}

std::vector<ApiVersionDetail>& ShowVersionsResponse::getVersions()
{
    return versions_;
}

void ShowVersionsResponse::setVersions(const std::vector<ApiVersionDetail>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ShowVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ShowVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



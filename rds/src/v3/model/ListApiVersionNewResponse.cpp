

#include "huaweicloud/rds/v3/model/ListApiVersionNewResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListApiVersionNewResponse::ListApiVersionNewResponse()
{
    versionsIsSet_ = false;
}

ListApiVersionNewResponse::~ListApiVersionNewResponse() = default;

void ListApiVersionNewResponse::validate()
{
}

web::json::value ListApiVersionNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ListApiVersionNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiVersion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}

std::vector<ApiVersion>& ListApiVersionNewResponse::getVersions()
{
    return versions_;
}

void ListApiVersionNewResponse::setVersions(const std::vector<ApiVersion>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListApiVersionNewResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListApiVersionNewResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



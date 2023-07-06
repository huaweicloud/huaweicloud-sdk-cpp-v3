

#include "huaweicloud/ims/v2/model/ListVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListVersionsResponse::ListVersionsResponse()
{
    versionsIsSet_ = false;
}

ListVersionsResponse::~ListVersionsResponse() = default;

void ListVersionsResponse::validate()
{
}

web::json::value ListVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ListVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<OsVersionResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}

std::vector<OsVersionResponse>& ListVersionsResponse::getVersions()
{
    return versions_;
}

void ListVersionsResponse::setVersions(const std::vector<OsVersionResponse>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



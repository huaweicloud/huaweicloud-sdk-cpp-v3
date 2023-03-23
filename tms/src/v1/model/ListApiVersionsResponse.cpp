

#include "huaweicloud/tms/v1/model/ListApiVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListApiVersionsResponse::ListApiVersionsResponse()
{
    versionsIsSet_ = false;
}

ListApiVersionsResponse::~ListApiVersionsResponse() = default;

void ListApiVersionsResponse::validate()
{
}

web::json::value ListApiVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ListApiVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<VersionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::vector<VersionDetail>& ListApiVersionsResponse::getVersions()
{
    return versions_;
}

void ListApiVersionsResponse::setVersions(const std::vector<VersionDetail>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListApiVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListApiVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



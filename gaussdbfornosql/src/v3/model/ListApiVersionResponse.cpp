

#include "huaweicloud/gaussdbfornosql/v3/model/ListApiVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListApiVersionResponse::ListApiVersionResponse()
{
    versionsIsSet_ = false;
}

ListApiVersionResponse::~ListApiVersionResponse() = default;

void ListApiVersionResponse::validate()
{
}

web::json::value ListApiVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool ListApiVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiVersionResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::vector<ApiVersionResponse>& ListApiVersionResponse::getVersions()
{
    return versions_;
}

void ListApiVersionResponse::setVersions(const std::vector<ApiVersionResponse>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListApiVersionResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListApiVersionResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



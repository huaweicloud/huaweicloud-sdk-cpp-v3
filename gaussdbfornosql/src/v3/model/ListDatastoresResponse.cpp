

#include "huaweicloud/gaussdbfornosql/v3/model/ListDatastoresResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDatastoresResponse::ListDatastoresResponse()
{
    versionsIsSet_ = false;
}

ListDatastoresResponse::~ListDatastoresResponse() = default;

void ListDatastoresResponse::validate()
{
}

web::json::value ListDatastoresResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ListDatastoresResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ListDatastoresResponse::getVersions()
{
    return versions_;
}

void ListDatastoresResponse::setVersions(const std::vector<std::string>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListDatastoresResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListDatastoresResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



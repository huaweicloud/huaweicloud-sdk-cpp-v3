

#include "huaweicloud/dds/v3/model/ListDatastoreVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListDatastoreVersionsResponse::ListDatastoreVersionsResponse()
{
    versionsIsSet_ = false;
}

ListDatastoreVersionsResponse::~ListDatastoreVersionsResponse() = default;

void ListDatastoreVersionsResponse::validate()
{
}

web::json::value ListDatastoreVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}

bool ListDatastoreVersionsResponse::fromJson(const web::json::value& val)
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

std::vector<std::string>& ListDatastoreVersionsResponse::getVersions()
{
    return versions_;
}

void ListDatastoreVersionsResponse::setVersions(const std::vector<std::string>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListDatastoreVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListDatastoreVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}



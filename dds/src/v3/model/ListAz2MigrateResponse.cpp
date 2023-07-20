

#include "huaweicloud/dds/v3/model/ListAz2MigrateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAz2MigrateResponse::ListAz2MigrateResponse()
{
    azListIsSet_ = false;
}

ListAz2MigrateResponse::~ListAz2MigrateResponse() = default;

void ListAz2MigrateResponse::validate()
{
}

web::json::value ListAz2MigrateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azListIsSet_) {
        val[utility::conversions::to_string_t("az_list")] = ModelBase::toJson(azList_);
    }

    return val;
}

bool ListAz2MigrateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Az2Migrate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzList(refVal);
        }
    }
    return ok;
}

std::vector<Az2Migrate>& ListAz2MigrateResponse::getAzList()
{
    return azList_;
}

void ListAz2MigrateResponse::setAzList(const std::vector<Az2Migrate>& value)
{
    azList_ = value;
    azListIsSet_ = true;
}

bool ListAz2MigrateResponse::azListIsSet() const
{
    return azListIsSet_;
}

void ListAz2MigrateResponse::unsetazList()
{
    azListIsSet_ = false;
}

}
}
}
}
}



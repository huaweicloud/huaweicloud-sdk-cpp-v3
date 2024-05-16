

#include "huaweicloud/gaussdb/v3/model/ListHtapStorageTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapStorageTypeResponse::ListHtapStorageTypeResponse()
{
    storageTypeIsSet_ = false;
}

ListHtapStorageTypeResponse::~ListHtapStorageTypeResponse() = default;

void ListHtapStorageTypeResponse::validate()
{
}

web::json::value ListHtapStorageTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }

    return val;
}
bool ListHtapStorageTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_type"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapStorageType_storage_type> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    return ok;
}


std::vector<HtapStorageType_storage_type>& ListHtapStorageTypeResponse::getStorageType()
{
    return storageType_;
}

void ListHtapStorageTypeResponse::setStorageType(const std::vector<HtapStorageType_storage_type>& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool ListHtapStorageTypeResponse::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void ListHtapStorageTypeResponse::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

}
}
}
}
}



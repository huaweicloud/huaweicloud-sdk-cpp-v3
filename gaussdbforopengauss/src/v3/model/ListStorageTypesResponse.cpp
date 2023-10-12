

#include "huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListStorageTypesResponse::ListStorageTypesResponse()
{
    storageTypeIsSet_ = false;
}

ListStorageTypesResponse::~ListStorageTypesResponse() = default;

void ListStorageTypesResponse::validate()
{
}

web::json::value ListStorageTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }

    return val;
}
bool ListStorageTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_type"));
        if(!fieldValue.is_null())
        {
            std::vector<Storage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    return ok;
}


std::vector<Storage>& ListStorageTypesResponse::getStorageType()
{
    return storageType_;
}

void ListStorageTypesResponse::setStorageType(const std::vector<Storage>& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool ListStorageTypesResponse::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void ListStorageTypesResponse::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

}
}
}
}
}



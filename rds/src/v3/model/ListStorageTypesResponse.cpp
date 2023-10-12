

#include "huaweicloud/rds/v3/model/ListStorageTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListStorageTypesResponse::ListStorageTypesResponse()
{
    storageTypeIsSet_ = false;
    dsspoolInfoIsSet_ = false;
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
    if(dsspoolInfoIsSet_) {
        val[utility::conversions::to_string_t("dsspool_info")] = ModelBase::toJson(dsspoolInfo_);
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
    if(val.has_field(utility::conversions::to_string_t("dsspool_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DssPoolInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolInfo(refVal);
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

std::vector<DssPoolInfo>& ListStorageTypesResponse::getDsspoolInfo()
{
    return dsspoolInfo_;
}

void ListStorageTypesResponse::setDsspoolInfo(const std::vector<DssPoolInfo>& value)
{
    dsspoolInfo_ = value;
    dsspoolInfoIsSet_ = true;
}

bool ListStorageTypesResponse::dsspoolInfoIsSet() const
{
    return dsspoolInfoIsSet_;
}

void ListStorageTypesResponse::unsetdsspoolInfo()
{
    dsspoolInfoIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dds/v3/model/ListStorageTypeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListStorageTypeResponse::ListStorageTypeResponse()
{
    storageTypeIsSet_ = false;
    dssPoolInfoIsSet_ = false;
}

ListStorageTypeResponse::~ListStorageTypeResponse() = default;

void ListStorageTypeResponse::validate()
{
}

web::json::value ListStorageTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }
    if(dssPoolInfoIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_info")] = ModelBase::toJson(dssPoolInfo_);
    }

    return val;
}

bool ListStorageTypeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dss_pool_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DssPoolInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolInfo(refVal);
        }
    }
    return ok;
}

std::vector<Storage>& ListStorageTypeResponse::getStorageType()
{
    return storageType_;
}

void ListStorageTypeResponse::setStorageType(const std::vector<Storage>& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool ListStorageTypeResponse::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void ListStorageTypeResponse::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::vector<DssPoolInfo>& ListStorageTypeResponse::getDssPoolInfo()
{
    return dssPoolInfo_;
}

void ListStorageTypeResponse::setDssPoolInfo(const std::vector<DssPoolInfo>& value)
{
    dssPoolInfo_ = value;
    dssPoolInfoIsSet_ = true;
}

bool ListStorageTypeResponse::dssPoolInfoIsSet() const
{
    return dssPoolInfoIsSet_;
}

void ListStorageTypeResponse::unsetdssPoolInfo()
{
    dssPoolInfoIsSet_ = false;
}

}
}
}
}
}



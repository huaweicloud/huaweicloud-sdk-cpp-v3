

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumeResponse::ListDatabaseVolumeResponse()
{
    databaseVolumesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseVolumeResponse::~ListDatabaseVolumeResponse() = default;

void ListDatabaseVolumeResponse::validate()
{
}

web::json::value ListDatabaseVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseVolumesIsSet_) {
        val[utility::conversions::to_string_t("database_volumes")] = ModelBase::toJson(databaseVolumes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDatabaseVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseVolumeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseVolumeResult>& ListDatabaseVolumeResponse::getDatabaseVolumes()
{
    return databaseVolumes_;
}

void ListDatabaseVolumeResponse::setDatabaseVolumes(const std::vector<DatabaseVolumeResult>& value)
{
    databaseVolumes_ = value;
    databaseVolumesIsSet_ = true;
}

bool ListDatabaseVolumeResponse::databaseVolumesIsSet() const
{
    return databaseVolumesIsSet_;
}

void ListDatabaseVolumeResponse::unsetdatabaseVolumes()
{
    databaseVolumesIsSet_ = false;
}

int32_t ListDatabaseVolumeResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseVolumeResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseVolumeResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseVolumeResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



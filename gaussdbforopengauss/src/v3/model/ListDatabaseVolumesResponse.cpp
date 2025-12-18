

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumesResponse::ListDatabaseVolumesResponse()
{
    databaseVolumesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseVolumesResponse::~ListDatabaseVolumesResponse() = default;

void ListDatabaseVolumesResponse::validate()
{
}

web::json::value ListDatabaseVolumesResponse::toJson() const
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
bool ListDatabaseVolumesResponse::fromJson(const web::json::value& val)
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


std::vector<DatabaseVolumeResult>& ListDatabaseVolumesResponse::getDatabaseVolumes()
{
    return databaseVolumes_;
}

void ListDatabaseVolumesResponse::setDatabaseVolumes(const std::vector<DatabaseVolumeResult>& value)
{
    databaseVolumes_ = value;
    databaseVolumesIsSet_ = true;
}

bool ListDatabaseVolumesResponse::databaseVolumesIsSet() const
{
    return databaseVolumesIsSet_;
}

void ListDatabaseVolumesResponse::unsetdatabaseVolumes()
{
    databaseVolumesIsSet_ = false;
}

int32_t ListDatabaseVolumesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseVolumesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseVolumesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseVolumesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



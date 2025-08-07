

#include "huaweicloud/eps/v1/model/ListMigrationRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListMigrationRecordResponse::ListMigrationRecordResponse()
{
    recordsIsSet_ = false;
}

ListMigrationRecordResponse::~ListMigrationRecordResponse() = default;

void ListMigrationRecordResponse::validate()
{
}

web::json::value ListMigrationRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool ListMigrationRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceMigrateRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


std::vector<ResourceMigrateRecord>& ListMigrationRecordResponse::getRecords()
{
    return records_;
}

void ListMigrationRecordResponse::setRecords(const std::vector<ResourceMigrateRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListMigrationRecordResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListMigrationRecordResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



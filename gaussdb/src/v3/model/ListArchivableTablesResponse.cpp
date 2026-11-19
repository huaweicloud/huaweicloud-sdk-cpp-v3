

#include "huaweicloud/gaussdb/v3/model/ListArchivableTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListArchivableTablesResponse::ListArchivableTablesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    archivableTablesIsSet_ = false;
}

ListArchivableTablesResponse::~ListArchivableTablesResponse() = default;

void ListArchivableTablesResponse::validate()
{
}

web::json::value ListArchivableTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(archivableTablesIsSet_) {
        val[utility::conversions::to_string_t("archivable_tables")] = ModelBase::toJson(archivableTables_);
    }

    return val;
}
bool ListArchivableTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archivable_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archivable_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<ArchivableTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchivableTables(refVal);
        }
    }
    return ok;
}


int32_t ListArchivableTablesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListArchivableTablesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListArchivableTablesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListArchivableTablesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ArchivableTable>& ListArchivableTablesResponse::getArchivableTables()
{
    return archivableTables_;
}

void ListArchivableTablesResponse::setArchivableTables(const std::vector<ArchivableTable>& value)
{
    archivableTables_ = value;
    archivableTablesIsSet_ = true;
}

bool ListArchivableTablesResponse::archivableTablesIsSet() const
{
    return archivableTablesIsSet_;
}

void ListArchivableTablesResponse::unsetarchivableTables()
{
    archivableTablesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsartifact/v2/model/BasePaginationResponseEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BasePaginationResponseEntity::BasePaginationResponseEntity()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
}

BasePaginationResponseEntity::~BasePaginationResponseEntity() = default;

void BasePaginationResponseEntity::validate()
{
}

web::json::value BasePaginationResponseEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("totalRecords")] = ModelBase::toJson(totalRecords_);
    }
    if(totalPagesIsSet_) {
        val[utility::conversions::to_string_t("totalPages")] = ModelBase::toJson(totalPages_);
    }

    return val;
}
bool BasePaginationResponseEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("totalRecords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalRecords"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalPages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalPages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPages(refVal);
        }
    }
    return ok;
}


int32_t BasePaginationResponseEntity::getTotalRecords() const
{
    return totalRecords_;
}

void BasePaginationResponseEntity::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool BasePaginationResponseEntity::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void BasePaginationResponseEntity::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t BasePaginationResponseEntity::getTotalPages() const
{
    return totalPages_;
}

void BasePaginationResponseEntity::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool BasePaginationResponseEntity::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void BasePaginationResponseEntity::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

}
}
}
}
}



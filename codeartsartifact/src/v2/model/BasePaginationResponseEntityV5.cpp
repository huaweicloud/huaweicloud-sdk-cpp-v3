

#include "huaweicloud/codeartsartifact/v2/model/BasePaginationResponseEntityV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BasePaginationResponseEntityV5::BasePaginationResponseEntityV5()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
}

BasePaginationResponseEntityV5::~BasePaginationResponseEntityV5() = default;

void BasePaginationResponseEntityV5::validate()
{
}

web::json::value BasePaginationResponseEntityV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("total_records")] = ModelBase::toJson(totalRecords_);
    }
    if(totalPagesIsSet_) {
        val[utility::conversions::to_string_t("total_pages")] = ModelBase::toJson(totalPages_);
    }

    return val;
}
bool BasePaginationResponseEntityV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_records"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPages(refVal);
        }
    }
    return ok;
}


int32_t BasePaginationResponseEntityV5::getTotalRecords() const
{
    return totalRecords_;
}

void BasePaginationResponseEntityV5::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool BasePaginationResponseEntityV5::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void BasePaginationResponseEntityV5::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t BasePaginationResponseEntityV5::getTotalPages() const
{
    return totalPages_;
}

void BasePaginationResponseEntityV5::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool BasePaginationResponseEntityV5::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void BasePaginationResponseEntityV5::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

}
}
}
}
}



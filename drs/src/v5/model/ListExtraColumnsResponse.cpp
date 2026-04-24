

#include "huaweicloud/drs/v5/model/ListExtraColumnsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListExtraColumnsResponse::ListExtraColumnsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    columnProcessObjectsIsSet_ = false;
}

ListExtraColumnsResponse::~ListExtraColumnsResponse() = default;

void ListExtraColumnsResponse::validate()
{
}

web::json::value ListExtraColumnsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(columnProcessObjectsIsSet_) {
        val[utility::conversions::to_string_t("column_process_objects")] = ModelBase::toJson(columnProcessObjects_);
    }

    return val;
}
bool ListExtraColumnsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("column_process_objects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_process_objects"));
        if(!fieldValue.is_null())
        {
            std::vector<ColumnProcessObjects> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnProcessObjects(refVal);
        }
    }
    return ok;
}


int32_t ListExtraColumnsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListExtraColumnsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListExtraColumnsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListExtraColumnsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ColumnProcessObjects>& ListExtraColumnsResponse::getColumnProcessObjects()
{
    return columnProcessObjects_;
}

void ListExtraColumnsResponse::setColumnProcessObjects(const std::vector<ColumnProcessObjects>& value)
{
    columnProcessObjects_ = value;
    columnProcessObjectsIsSet_ = true;
}

bool ListExtraColumnsResponse::columnProcessObjectsIsSet() const
{
    return columnProcessObjectsIsSet_;
}

void ListExtraColumnsResponse::unsetcolumnProcessObjects()
{
    columnProcessObjectsIsSet_ = false;
}

}
}
}
}
}



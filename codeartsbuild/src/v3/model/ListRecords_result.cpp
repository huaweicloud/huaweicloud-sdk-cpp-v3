

#include "huaweicloud/codeartsbuild/v3/model/ListRecords_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecords_result::ListRecords_result()
{
    paginationIsSet_ = false;
    dataIsSet_ = false;
}

ListRecords_result::~ListRecords_result() = default;

void ListRecords_result::validate()
{
}

web::json::value ListRecords_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paginationIsSet_) {
        val[utility::conversions::to_string_t("pagination")] = ModelBase::toJson(pagination_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListRecords_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pagination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pagination"));
        if(!fieldValue.is_null())
        {
            ListRecords_result_pagination refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPagination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListRecords_result_pagination ListRecords_result::getPagination() const
{
    return pagination_;
}

void ListRecords_result::setPagination(const ListRecords_result_pagination& value)
{
    pagination_ = value;
    paginationIsSet_ = true;
}

bool ListRecords_result::paginationIsSet() const
{
    return paginationIsSet_;
}

void ListRecords_result::unsetpagination()
{
    paginationIsSet_ = false;
}

std::vector<BuildRecord>& ListRecords_result::getData()
{
    return data_;
}

void ListRecords_result::setData(const std::vector<BuildRecord>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRecords_result::dataIsSet() const
{
    return dataIsSet_;
}

void ListRecords_result::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



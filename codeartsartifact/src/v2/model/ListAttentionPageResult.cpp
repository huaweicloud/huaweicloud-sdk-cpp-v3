

#include "huaweicloud/codeartsartifact/v2/model/ListAttentionPageResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAttentionPageResult::ListAttentionPageResult()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
    dataIsSet_ = false;
}

ListAttentionPageResult::~ListAttentionPageResult() = default;

void ListAttentionPageResult::validate()
{
}

web::json::value ListAttentionPageResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("totalRecords")] = ModelBase::toJson(totalRecords_);
    }
    if(totalPagesIsSet_) {
        val[utility::conversions::to_string_t("totalPages")] = ModelBase::toJson(totalPages_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAttentionPageResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAttentionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListAttentionPageResult::getTotalRecords() const
{
    return totalRecords_;
}

void ListAttentionPageResult::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool ListAttentionPageResult::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void ListAttentionPageResult::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t ListAttentionPageResult::getTotalPages() const
{
    return totalPages_;
}

void ListAttentionPageResult::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool ListAttentionPageResult::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void ListAttentionPageResult::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

std::vector<ListAttentionResult>& ListAttentionPageResult::getData()
{
    return data_;
}

void ListAttentionPageResult::setData(const std::vector<ListAttentionResult>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAttentionPageResult::dataIsSet() const
{
    return dataIsSet_;
}

void ListAttentionPageResult::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



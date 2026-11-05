

#include "huaweicloud/rds/v3/model/ListSupabaseApplicationApiKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSupabaseApplicationApiKeysResponse::ListSupabaseApplicationApiKeysResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    dataIsSet_ = false;
}

ListSupabaseApplicationApiKeysResponse::~ListSupabaseApplicationApiKeysResponse() = default;

void ListSupabaseApplicationApiKeysResponse::validate()
{
}

web::json::value ListSupabaseApplicationApiKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListSupabaseApplicationApiKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<SupabaseApplicationApiKeyRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int64_t ListSupabaseApplicationApiKeysResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSupabaseApplicationApiKeysResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSupabaseApplicationApiKeysResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<SupabaseApplicationApiKeyRecord>& ListSupabaseApplicationApiKeysResponse::getData()
{
    return data_;
}

void ListSupabaseApplicationApiKeysResponse::setData(const std::vector<SupabaseApplicationApiKeyRecord>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListSupabaseApplicationApiKeysResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ListSmallVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSmallVersionResponse::ListSmallVersionResponse()
{
    dataStoresIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListSmallVersionResponse::~ListSmallVersionResponse() = default;

void ListSmallVersionResponse::validate()
{
}

web::json::value ListSmallVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataStoresIsSet_) {
        val[utility::conversions::to_string_t("data_stores")] = ModelBase::toJson(dataStores_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListSmallVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_stores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_stores"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseSmallVersion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataStores(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseSmallVersion>& ListSmallVersionResponse::getDataStores()
{
    return dataStores_;
}

void ListSmallVersionResponse::setDataStores(const std::vector<DatabaseSmallVersion>& value)
{
    dataStores_ = value;
    dataStoresIsSet_ = true;
}

bool ListSmallVersionResponse::dataStoresIsSet() const
{
    return dataStoresIsSet_;
}

void ListSmallVersionResponse::unsetdataStores()
{
    dataStoresIsSet_ = false;
}

int32_t ListSmallVersionResponse::getCount() const
{
    return count_;
}

void ListSmallVersionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmallVersionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmallVersionResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}



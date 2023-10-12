

#include "huaweicloud/rds/v3/model/ListDatastoresResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDatastoresResponse::ListDatastoresResponse()
{
    dataStoresIsSet_ = false;
}

ListDatastoresResponse::~ListDatastoresResponse() = default;

void ListDatastoresResponse::validate()
{
}

web::json::value ListDatastoresResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataStoresIsSet_) {
        val[utility::conversions::to_string_t("dataStores")] = ModelBase::toJson(dataStores_);
    }

    return val;
}
bool ListDatastoresResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataStores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataStores"));
        if(!fieldValue.is_null())
        {
            std::vector<LDatastore> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataStores(refVal);
        }
    }
    return ok;
}


std::vector<LDatastore>& ListDatastoresResponse::getDataStores()
{
    return dataStores_;
}

void ListDatastoresResponse::setDataStores(const std::vector<LDatastore>& value)
{
    dataStores_ = value;
    dataStoresIsSet_ = true;
}

bool ListDatastoresResponse::dataStoresIsSet() const
{
    return dataStoresIsSet_;
}

void ListDatastoresResponse::unsetdataStores()
{
    dataStoresIsSet_ = false;
}

}
}
}
}
}



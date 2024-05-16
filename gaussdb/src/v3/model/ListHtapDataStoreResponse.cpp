

#include "huaweicloud/gaussdb/v3/model/ListHtapDataStoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapDataStoreResponse::ListHtapDataStoreResponse()
{
    datastoresIsSet_ = false;
}

ListHtapDataStoreResponse::~ListHtapDataStoreResponse() = default;

void ListHtapDataStoreResponse::validate()
{
}

web::json::value ListHtapDataStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoresIsSet_) {
        val[utility::conversions::to_string_t("datastores")] = ModelBase::toJson(datastores_);
    }

    return val;
}
bool ListHtapDataStoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastores"));
        if(!fieldValue.is_null())
        {
            std::vector<SrDataStores_datastores> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastores(refVal);
        }
    }
    return ok;
}


std::vector<SrDataStores_datastores>& ListHtapDataStoreResponse::getDatastores()
{
    return datastores_;
}

void ListHtapDataStoreResponse::setDatastores(const std::vector<SrDataStores_datastores>& value)
{
    datastores_ = value;
    datastoresIsSet_ = true;
}

bool ListHtapDataStoreResponse::datastoresIsSet() const
{
    return datastoresIsSet_;
}

void ListHtapDataStoreResponse::unsetdatastores()
{
    datastoresIsSet_ = false;
}

}
}
}
}
}



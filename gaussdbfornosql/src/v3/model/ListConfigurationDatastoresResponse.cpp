

#include "huaweicloud/gaussdbfornosql/v3/model/ListConfigurationDatastoresResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListConfigurationDatastoresResponse::ListConfigurationDatastoresResponse()
{
    datastoresIsSet_ = false;
}

ListConfigurationDatastoresResponse::~ListConfigurationDatastoresResponse() = default;

void ListConfigurationDatastoresResponse::validate()
{
}

web::json::value ListConfigurationDatastoresResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoresIsSet_) {
        val[utility::conversions::to_string_t("datastores")] = ModelBase::toJson(datastores_);
    }

    return val;
}

bool ListConfigurationDatastoresResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastores"));
        if(!fieldValue.is_null())
        {
            std::vector<DataStoreList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastores(refVal);
        }
    }
    return ok;
}

std::vector<DataStoreList>& ListConfigurationDatastoresResponse::getDatastores()
{
    return datastores_;
}

void ListConfigurationDatastoresResponse::setDatastores(const std::vector<DataStoreList>& value)
{
    datastores_ = value;
    datastoresIsSet_ = true;
}

bool ListConfigurationDatastoresResponse::datastoresIsSet() const
{
    return datastoresIsSet_;
}

void ListConfigurationDatastoresResponse::unsetdatastores()
{
    datastoresIsSet_ = false;
}

}
}
}
}
}



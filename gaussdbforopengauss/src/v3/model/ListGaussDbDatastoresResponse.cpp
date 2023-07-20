

#include "huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListGaussDbDatastoresResponse::ListGaussDbDatastoresResponse()
{
    datastoresIsSet_ = false;
}

ListGaussDbDatastoresResponse::~ListGaussDbDatastoresResponse() = default;

void ListGaussDbDatastoresResponse::validate()
{
}

web::json::value ListGaussDbDatastoresResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoresIsSet_) {
        val[utility::conversions::to_string_t("datastores")] = ModelBase::toJson(datastores_);
    }

    return val;
}

bool ListGaussDbDatastoresResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastores"));
        if(!fieldValue.is_null())
        {
            std::vector<DatastoresResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastores(refVal);
        }
    }
    return ok;
}

std::vector<DatastoresResult>& ListGaussDbDatastoresResponse::getDatastores()
{
    return datastores_;
}

void ListGaussDbDatastoresResponse::setDatastores(const std::vector<DatastoresResult>& value)
{
    datastores_ = value;
    datastoresIsSet_ = true;
}

bool ListGaussDbDatastoresResponse::datastoresIsSet() const
{
    return datastoresIsSet_;
}

void ListGaussDbDatastoresResponse::unsetdatastores()
{
    datastoresIsSet_ = false;
}

}
}
}
}
}



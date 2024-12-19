

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatastoresDetailsResponse::ListDatastoresDetailsResponse()
{
    datastoresIsSet_ = false;
}

ListDatastoresDetailsResponse::~ListDatastoresDetailsResponse() = default;

void ListDatastoresDetailsResponse::validate()
{
}

web::json::value ListDatastoresDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoresIsSet_) {
        val[utility::conversions::to_string_t("datastores")] = ModelBase::toJson(datastores_);
    }

    return val;
}
bool ListDatastoresDetailsResponse::fromJson(const web::json::value& val)
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


std::vector<DatastoresResult>& ListDatastoresDetailsResponse::getDatastores()
{
    return datastores_;
}

void ListDatastoresDetailsResponse::setDatastores(const std::vector<DatastoresResult>& value)
{
    datastores_ = value;
    datastoresIsSet_ = true;
}

bool ListDatastoresDetailsResponse::datastoresIsSet() const
{
    return datastoresIsSet_;
}

void ListDatastoresDetailsResponse::unsetdatastores()
{
    datastoresIsSet_ = false;
}

}
}
}
}
}



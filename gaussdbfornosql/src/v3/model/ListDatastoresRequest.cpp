

#include "huaweicloud/gaussdbfornosql/v3/model/ListDatastoresRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDatastoresRequest::ListDatastoresRequest()
{
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
}

ListDatastoresRequest::~ListDatastoresRequest() = default;

void ListDatastoresRequest::validate()
{
}

web::json::value ListDatastoresRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }

    return val;
}

bool ListDatastoresRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreName(refVal);
        }
    }
    return ok;
}

std::string ListDatastoresRequest::getDatastoreName() const
{
    return datastoreName_;
}

void ListDatastoresRequest::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ListDatastoresRequest::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ListDatastoresRequest::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

}
}
}
}
}



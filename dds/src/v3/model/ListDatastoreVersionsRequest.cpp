

#include "huaweicloud/dds/v3/model/ListDatastoreVersionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListDatastoreVersionsRequest::ListDatastoreVersionsRequest()
{
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
}

ListDatastoreVersionsRequest::~ListDatastoreVersionsRequest() = default;

void ListDatastoreVersionsRequest::validate()
{
}

web::json::value ListDatastoreVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }

    return val;
}

bool ListDatastoreVersionsRequest::fromJson(const web::json::value& val)
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

std::string ListDatastoreVersionsRequest::getDatastoreName() const
{
    return datastoreName_;
}

void ListDatastoreVersionsRequest::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ListDatastoreVersionsRequest::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ListDatastoreVersionsRequest::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/ListIpsWhitelistsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsWhitelistsResponse::ListIpsWhitelistsResponse()
{
    dataIsSet_ = false;
}

ListIpsWhitelistsResponse::~ListIpsWhitelistsResponse() = default;

void ListIpsWhitelistsResponse::validate()
{
}

web::json::value ListIpsWhitelistsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpsWhitelistsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListIpsWhiteListsVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListIpsWhiteListsVO ListIpsWhitelistsResponse::getData() const
{
    return data_;
}

void ListIpsWhitelistsResponse::setData(const ListIpsWhiteListsVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsWhitelistsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsWhitelistsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



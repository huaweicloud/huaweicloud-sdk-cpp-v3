

#include "huaweicloud/codehub/v4/model/ListUserGpgKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListUserGpgKeysRequest::ListUserGpgKeysRequest()
{
    query_ = "";
    queryIsSet_ = false;
}

ListUserGpgKeysRequest::~ListUserGpgKeysRequest() = default;

void ListUserGpgKeysRequest::validate()
{
}

web::json::value ListUserGpgKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }

    return val;
}
bool ListUserGpgKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    return ok;
}


std::string ListUserGpgKeysRequest::getQuery() const
{
    return query_;
}

void ListUserGpgKeysRequest::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListUserGpgKeysRequest::queryIsSet() const
{
    return queryIsSet_;
}

void ListUserGpgKeysRequest::unsetquery()
{
    queryIsSet_ = false;
}

}
}
}
}
}



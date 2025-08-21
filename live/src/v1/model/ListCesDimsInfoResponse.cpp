

#include "huaweicloud/live/v1/model/ListCesDimsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesDimsInfoResponse::ListCesDimsInfoResponse()
{
    queryIsSet_ = false;
}

ListCesDimsInfoResponse::~ListCesDimsInfoResponse() = default;

void ListCesDimsInfoResponse::validate()
{
}

web::json::value ListCesDimsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }

    return val;
}
bool ListCesDimsInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            CesQueryResp_query refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    return ok;
}


CesQueryResp_query ListCesDimsInfoResponse::getQuery() const
{
    return query_;
}

void ListCesDimsInfoResponse::setQuery(const CesQueryResp_query& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListCesDimsInfoResponse::queryIsSet() const
{
    return queryIsSet_;
}

void ListCesDimsInfoResponse::unsetquery()
{
    queryIsSet_ = false;
}

}
}
}
}
}



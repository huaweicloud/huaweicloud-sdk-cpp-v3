

#include "huaweicloud/cfw/v1/model/ListEipResourcesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEipResourcesResponse::ListEipResourcesResponse()
{
    dataIsSet_ = false;
}

ListEipResourcesResponse::~ListEipResourcesResponse() = default;

void ListEipResourcesResponse::validate()
{
}

web::json::value ListEipResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListEipResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            EipResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

EipResponseData ListEipResourcesResponse::getData() const
{
    return data_;
}

void ListEipResourcesResponse::setData(const EipResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListEipResourcesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListEipResourcesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



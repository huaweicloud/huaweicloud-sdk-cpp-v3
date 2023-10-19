

#include "huaweicloud/cfw/v1/model/ListServiceSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetsResponse::ListServiceSetsResponse()
{
    dataIsSet_ = false;
}

ListServiceSetsResponse::~ListServiceSetsResponse() = default;

void ListServiceSetsResponse::validate()
{
}

web::json::value ListServiceSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListServiceSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ServiceSetRecords refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ServiceSetRecords ListServiceSetsResponse::getData() const
{
    return data_;
}

void ListServiceSetsResponse::setData(const ServiceSetRecords& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceSetsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceSetsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



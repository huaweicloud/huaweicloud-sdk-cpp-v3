

#include "huaweicloud/cfw/v1/model/ListServiceSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetResponse::ListServiceSetResponse()
{
    dataIsSet_ = false;
}

ListServiceSetResponse::~ListServiceSetResponse() = default;

void ListServiceSetResponse::validate()
{
}

web::json::value ListServiceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListServiceSetResponse::fromJson(const web::json::value& val)
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


ServiceSetRecords ListServiceSetResponse::getData() const
{
    return data_;
}

void ListServiceSetResponse::setData(const ServiceSetRecords& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/ListServiceSetDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetDetailsResponse::ListServiceSetDetailsResponse()
{
    dataIsSet_ = false;
}

ListServiceSetDetailsResponse::~ListServiceSetDetailsResponse() = default;

void ListServiceSetDetailsResponse::validate()
{
}

web::json::value ListServiceSetDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListServiceSetDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ServiceSetDetailResponseDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

ServiceSetDetailResponseDto ListServiceSetDetailsResponse::getData() const
{
    return data_;
}

void ListServiceSetDetailsResponse::setData(const ServiceSetDetailResponseDto& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceSetDetailsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceSetDetailsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



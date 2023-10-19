

#include "huaweicloud/cfw/v1/model/ListServiceSetDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetDetailResponse::ListServiceSetDetailResponse()
{
    dataIsSet_ = false;
}

ListServiceSetDetailResponse::~ListServiceSetDetailResponse() = default;

void ListServiceSetDetailResponse::validate()
{
}

web::json::value ListServiceSetDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListServiceSetDetailResponse::fromJson(const web::json::value& val)
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


ServiceSetDetailResponseDto ListServiceSetDetailResponse::getData() const
{
    return data_;
}

void ListServiceSetDetailResponse::setData(const ServiceSetDetailResponseDto& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceSetDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceSetDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



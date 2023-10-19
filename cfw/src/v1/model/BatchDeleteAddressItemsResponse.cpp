

#include "huaweicloud/cfw/v1/model/BatchDeleteAddressItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAddressItemsResponse::BatchDeleteAddressItemsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteAddressItemsResponse::~BatchDeleteAddressItemsResponse() = default;

void BatchDeleteAddressItemsResponse::validate()
{
}

web::json::value BatchDeleteAddressItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteAddressItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteAddressItemsResponse::getData()
{
    return data_;
}

void BatchDeleteAddressItemsResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteAddressItemsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteAddressItemsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



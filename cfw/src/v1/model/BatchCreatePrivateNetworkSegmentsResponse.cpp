

#include "huaweicloud/cfw/v1/model/BatchCreatePrivateNetworkSegmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreatePrivateNetworkSegmentsResponse::BatchCreatePrivateNetworkSegmentsResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

BatchCreatePrivateNetworkSegmentsResponse::~BatchCreatePrivateNetworkSegmentsResponse() = default;

void BatchCreatePrivateNetworkSegmentsResponse::validate()
{
}

web::json::value BatchCreatePrivateNetworkSegmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchCreatePrivateNetworkSegmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string BatchCreatePrivateNetworkSegmentsResponse::getData() const
{
    return data_;
}

void BatchCreatePrivateNetworkSegmentsResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchCreatePrivateNetworkSegmentsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchCreatePrivateNetworkSegmentsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



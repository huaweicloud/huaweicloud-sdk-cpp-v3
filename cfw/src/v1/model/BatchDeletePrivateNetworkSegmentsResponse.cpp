

#include "huaweicloud/cfw/v1/model/BatchDeletePrivateNetworkSegmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeletePrivateNetworkSegmentsResponse::BatchDeletePrivateNetworkSegmentsResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

BatchDeletePrivateNetworkSegmentsResponse::~BatchDeletePrivateNetworkSegmentsResponse() = default;

void BatchDeletePrivateNetworkSegmentsResponse::validate()
{
}

web::json::value BatchDeletePrivateNetworkSegmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeletePrivateNetworkSegmentsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeletePrivateNetworkSegmentsResponse::getData() const
{
    return data_;
}

void BatchDeletePrivateNetworkSegmentsResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeletePrivateNetworkSegmentsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeletePrivateNetworkSegmentsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



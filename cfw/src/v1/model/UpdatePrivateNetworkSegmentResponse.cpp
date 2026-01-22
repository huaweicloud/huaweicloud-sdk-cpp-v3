

#include "huaweicloud/cfw/v1/model/UpdatePrivateNetworkSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdatePrivateNetworkSegmentResponse::UpdatePrivateNetworkSegmentResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

UpdatePrivateNetworkSegmentResponse::~UpdatePrivateNetworkSegmentResponse() = default;

void UpdatePrivateNetworkSegmentResponse::validate()
{
}

web::json::value UpdatePrivateNetworkSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdatePrivateNetworkSegmentResponse::fromJson(const web::json::value& val)
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


std::string UpdatePrivateNetworkSegmentResponse::getData() const
{
    return data_;
}

void UpdatePrivateNetworkSegmentResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdatePrivateNetworkSegmentResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdatePrivateNetworkSegmentResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



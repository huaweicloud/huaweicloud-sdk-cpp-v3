

#include "huaweicloud/cfw/v1/model/BatchDeleteAddressSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAddressSetsResponse::BatchDeleteAddressSetsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteAddressSetsResponse::~BatchDeleteAddressSetsResponse() = default;

void BatchDeleteAddressSetsResponse::validate()
{
}

web::json::value BatchDeleteAddressSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteAddressSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteAddressSetsResp_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteAddressSetsResp_data>& BatchDeleteAddressSetsResponse::getData()
{
    return data_;
}

void BatchDeleteAddressSetsResponse::setData(const std::vector<BatchDeleteAddressSetsResp_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteAddressSetsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteAddressSetsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



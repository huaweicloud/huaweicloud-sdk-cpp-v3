

#include "huaweicloud/drs/v5/model/ShowMeteringResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowMeteringResponse::ShowMeteringResponse()
{
    productInfoListIsSet_ = false;
}

ShowMeteringResponse::~ShowMeteringResponse() = default;

void ShowMeteringResponse::validate()
{
}

web::json::value ShowMeteringResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productInfoListIsSet_) {
        val[utility::conversions::to_string_t("product_info_list")] = ModelBase::toJson(productInfoList_);
    }

    return val;
}

bool ShowMeteringResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductInfoList(refVal);
        }
    }
    return ok;
}

std::vector<ProductInfo>& ShowMeteringResponse::getProductInfoList()
{
    return productInfoList_;
}

void ShowMeteringResponse::setProductInfoList(const std::vector<ProductInfo>& value)
{
    productInfoList_ = value;
    productInfoListIsSet_ = true;
}

bool ShowMeteringResponse::productInfoListIsSet() const
{
    return productInfoListIsSet_;
}

void ShowMeteringResponse::unsetproductInfoList()
{
    productInfoListIsSet_ = false;
}

}
}
}
}
}



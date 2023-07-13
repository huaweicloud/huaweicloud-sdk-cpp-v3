
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BillingInfoDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BillingInfoDict_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订单信息, 有订单表示包周期
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BillingInfoDict
    : public ModelBase
{
public:
    BillingInfoDict();
    virtual ~BillingInfoDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BillingInfoDict members

    /// <summary>
    /// 订单信息
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 产品id
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BillingInfoDict_H_

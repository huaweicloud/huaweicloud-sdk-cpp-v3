
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsResponse_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  SubscribePackageProductsResponse
    : public ModelBase, public HttpResponse
{
public:
    SubscribePackageProductsResponse();
    virtual ~SubscribePackageProductsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscribePackageProductsResponse members

    /// <summary>
    /// 订购套餐包生成的订单号。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsResponse_H_


#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CombinedOrder_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CombinedOrder_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组合订单
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CombinedOrder
    : public ModelBase
{
public:
    CombinedOrder();
    virtual ~CombinedOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CombinedOrder members

    /// <summary>
    /// 组合订单 ID
    /// </summary>

    std::string getCombinedOrderId() const;
    bool combinedOrderIdIsSet() const;
    void unsetcombinedOrderId();
    void setCombinedOrderId(const std::string& value);

    /// <summary>
    /// 组合订单中 ECS 服务器数量，当前批量最大为 500。  最小值：1  最大值：1000
    /// </summary>

    int32_t getCombinedOrderEcsNum() const;
    bool combinedOrderEcsNumIsSet() const;
    void unsetcombinedOrderEcsNum();
    void setCombinedOrderEcsNum(int32_t value);

    /// <summary>
    /// 组合订单数量。  最小值：1  最大值：1000
    /// </summary>

    int32_t getCombinedOrderNum() const;
    bool combinedOrderNumIsSet() const;
    void unsetcombinedOrderNum();
    void setCombinedOrderNum(int32_t value);


protected:
    std::string combinedOrderId_;
    bool combinedOrderIdIsSet_;
    int32_t combinedOrderEcsNum_;
    bool combinedOrderEcsNumIsSet_;
    int32_t combinedOrderNum_;
    bool combinedOrderNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CombinedOrder_H_


#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包周期扩容计费策略参数。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BssParamForResizeVolume
    : public ModelBase
{
public:
    BssParamForResizeVolume();
    virtual ~BssParamForResizeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BssParamForResizeVolume members

    /// <summary>
    /// 功能说明：是否立即支付。该参数只有在云硬盘为包周期的情况下有意义。默认值为false 取值范围： * true：立即支付，从帐户余额中自动扣费 * false：不立即支付，创建订单暂不支付 
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_

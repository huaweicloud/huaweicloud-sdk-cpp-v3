
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizeServerExtendParam_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizeServerExtendParam_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ResizeServerExtendParam
    : public ModelBase
{
public:
    ResizeServerExtendParam();
    virtual ~ResizeServerExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeServerExtendParam members

    /// <summary>
    /// 下单订购后，是否自动从客户的账户中支付，而不需要客户手动去进行支付。  - “true”：是（自动支付） - “false”：否（需要客户手动支付）  &gt; 说明： &gt;  &gt; 当弹性云服务器是按包年包月计费时生效，该值为空时默认为客户手动支付。
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizeServerExtendParam_H_


#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpBillingConfigOverride_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpBillingConfigOverride_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ScaleUpExtendParam.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池扩容时覆盖节点的默认计费模式配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleUpBillingConfigOverride
    : public ModelBase
{
public:
    ScaleUpBillingConfigOverride();
    virtual ~ScaleUpBillingConfigOverride();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleUpBillingConfigOverride members

    /// <summary>
    /// 节点计费类型，0(按需)，1(包周期)
    /// </summary>

    int32_t getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ScaleUpExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const ScaleUpExtendParam& value);


protected:
    int32_t billingMode_;
    bool billingModeIsSet_;
    ScaleUpExtendParam extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpBillingConfigOverride_H_

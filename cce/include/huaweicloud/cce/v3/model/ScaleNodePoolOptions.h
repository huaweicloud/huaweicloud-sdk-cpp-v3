
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ScaleUpBillingConfigOverride.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池伸缩选项配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleNodePoolOptions
    : public ModelBase
{
public:
    ScaleNodePoolOptions();
    virtual ~ScaleNodePoolOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleNodePoolOptions members

    /// <summary>
    /// 扩容状态检查策略: instant(同步检查), async(异步检查)。默认同步检查instant 
    /// </summary>

    std::string getScalableChecking() const;
    bool scalableCheckingIsSet() const;
    void unsetscalableChecking();
    void setScalableChecking(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScaleUpBillingConfigOverride getBillingConfigOverride() const;
    bool billingConfigOverrideIsSet() const;
    void unsetbillingConfigOverride();
    void setBillingConfigOverride(const ScaleUpBillingConfigOverride& value);


protected:
    std::string scalableChecking_;
    bool scalableCheckingIsSet_;
    ScaleUpBillingConfigOverride billingConfigOverride_;
    bool billingConfigOverrideIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_

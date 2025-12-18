
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 原地升级配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InPlaceRollingUpdate
    : public ModelBase
{
public:
    InPlaceRollingUpdate();
    virtual ~InPlaceRollingUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InPlaceRollingUpdate members

    /// <summary>
    /// 节点升级步长，取值范围为[1, 40]，建议取值20
    /// </summary>

    int32_t getUserDefinedStep() const;
    bool userDefinedStepIsSet() const;
    void unsetuserDefinedStep();
    void setUserDefinedStep(int32_t value);

    /// <summary>
    /// **参数解释：** 节点升级批次作用域 **约束限制：** 不涉及 **取值范围：** \&quot;Cluster\&quot;：节点升级批次配置应用到整个集群，整个升级过程不重置升级批次 \&quot;NodePool\&quot;：节点升级批次配置应用到节点池，升级每个节点池都会重置升级批次 **默认取值：** \&quot;Cluster\&quot; 
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);


protected:
    int32_t userDefinedStep_;
    bool userDefinedStepIsSet_;
    std::string scope_;
    bool scopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_

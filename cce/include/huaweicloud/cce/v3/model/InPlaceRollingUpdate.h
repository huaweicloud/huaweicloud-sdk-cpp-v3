
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
/// **参数解释：** 原地升级配置。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
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
    /// **参数解释：** 每批升级的最大节点数量。升级时节点池之间会依次进行升级。节点池内的节点分批升级，第一批升级1个节点，第二批升级2个节点，后续每批升级节点数以2的幂数增加，直到达到您设置的每批最大升级节点数，并会持续作用在下一个节点池中 **约束限制：** 不涉及 **取值范围：** [1-120] **默认取值：** 不涉及
    /// </summary>

    int32_t getUserDefinedStep() const;
    bool userDefinedStepIsSet() const;
    void unsetuserDefinedStep();
    void setUserDefinedStep(int32_t value);

    /// <summary>
    /// **参数解释：** 节点升级批次作用域 **约束限制：** 不涉及 **取值范围：** - Cluster：节点升级批次配置应用到整个集群，整个升级过程不重置升级批次 - NodePool：节点升级批次配置应用到节点池，升级每个节点池都会重置升级批次  **默认取值：** Cluster
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

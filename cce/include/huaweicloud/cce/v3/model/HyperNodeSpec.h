
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplateInHyperNode.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 超节点的配置详情，超节点只包含基本的资源规格属性，其他配置从所属节点池继承。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  HyperNodeSpec
    : public ModelBase
{
public:
    HyperNodeSpec();
    virtual ~HyperNodeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperNodeSpec members

    /// <summary>
    /// **参数解释**： 超节点规格 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**： 所属节点池ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getNodepoolID() const;
    bool nodepoolIDIsSet() const;
    void unsetnodepoolID();
    void setNodepoolID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplateInHyperNode getNodeTemplate() const;
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const NodeTemplateInHyperNode& value);

    /// <summary>
    /// **参数解释**： 付费方式 **约束限制**： 不涉及 **取值范围**： - prepaid：预付费，即包年包月； - postpaid：后付费，即按需付费；  **默认取值**： 不涉及
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string nodepoolID_;
    bool nodepoolIDIsSet_;
    NodeTemplateInHyperNode nodeTemplate_;
    bool nodeTemplateIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeSpec_H_

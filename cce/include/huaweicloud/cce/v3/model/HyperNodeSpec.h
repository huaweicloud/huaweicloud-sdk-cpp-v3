
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplateInHyperNode.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
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
    /// **参数解释**： 超节点规格
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**： 所属节点池ID
    /// </summary>

    std::string getNodepoolID() const;
    bool nodepoolIDIsSet() const;
    void unsetnodepoolID();
    void setNodepoolID(const std::string& value);

    /// <summary>
    /// **参数解释**： 超节点下节点相关的配置。
    /// </summary>

    std::vector<NodeTemplateInHyperNode>& getNodeTemplate();
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const std::vector<NodeTemplateInHyperNode>& value);

    /// <summary>
    /// **参数解释**： 付费方式 **取值范围**： - prepaid: 预付费，即包年包月； - postpaid: 后付费，即按需付费；
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
    std::vector<NodeTemplateInHyperNode> nodeTemplate_;
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

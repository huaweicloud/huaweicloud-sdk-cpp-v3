
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_ownerReferences_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_ownerReferences_H_


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
/// **参数解释**： 属主对象。 **约束限制**： - 创建成功后自动生成，填写无效。 - 创建节点接口返回内容中无该参数  **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeMetadata_ownerReferences
    : public ModelBase
{
public:
    NodeMetadata_ownerReferences();
    virtual ~NodeMetadata_ownerReferences();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeMetadata_ownerReferences members

    /// <summary>
    /// **参数解释**： 节点池名称 **约束限制**： 创建成功后自动生成，填写无效。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getNodepoolName() const;
    bool nodepoolNameIsSet() const;
    void unsetnodepoolName();
    void setNodepoolName(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点池ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 创建成功后自动生成，填写无效。 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getNodepoolID() const;
    bool nodepoolIDIsSet() const;
    void unsetnodepoolID();
    void setNodepoolID(const std::string& value);

    /// <summary>
    /// **参数解释**： 超节点名称。如果节点不属于超节点，此字段不展示。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getHyperNodeName() const;
    bool hyperNodeNameIsSet() const;
    void unsethyperNodeName();
    void setHyperNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**： 超节点ID。如果节点不属于超节点，此字段不展示。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getHyperNodeID() const;
    bool hyperNodeIDIsSet() const;
    void unsethyperNodeID();
    void setHyperNodeID(const std::string& value);


protected:
    std::string nodepoolName_;
    bool nodepoolNameIsSet_;
    std::string nodepoolID_;
    bool nodepoolIDIsSet_;
    std::string hyperNodeName_;
    bool hyperNodeNameIsSet_;
    std::string hyperNodeID_;
    bool hyperNodeIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_ownerReferences_H_

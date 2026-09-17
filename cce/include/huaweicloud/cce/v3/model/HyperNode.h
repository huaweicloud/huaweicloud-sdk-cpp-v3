
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNode_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNode_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/HyperNodeStatus.h>
#include <string>
#include <huaweicloud/cce/v3/model/HyperNodeMetadata.h>
#include <huaweicloud/cce/v3/model/HyperNodeSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 超节点 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  HyperNode
    : public ModelBase
{
public:
    HyperNode();
    virtual ~HyperNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperNode members

    /// <summary>
    /// **参数解释**： API版本，固定值v3。 **约束限制**： 该值不可修改 **取值范围**： - v3  **默认取值**： v3
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型，固定值HyperNode。 **约束限制**： 该值不可修改 **取值范围**： - HyperNode  **默认取值**： HyperNode
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HyperNodeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const HyperNodeMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    HyperNodeSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const HyperNodeSpec& value);

    /// <summary>
    /// 
    /// </summary>

    HyperNodeStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const HyperNodeStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    HyperNodeMetadata metadata_;
    bool metadataIsSet_;
    HyperNodeSpec spec_;
    bool specIsSet_;
    HyperNodeStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNode_H_

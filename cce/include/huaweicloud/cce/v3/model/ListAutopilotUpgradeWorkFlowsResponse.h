
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotUpgradeWorkFlowsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotUpgradeWorkFlowsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/UpgradeWorkFlow.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotUpgradeWorkFlowsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotUpgradeWorkFlowsResponse();
    virtual ~ListAutopilotUpgradeWorkFlowsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotUpgradeWorkFlowsResponse members

    /// <summary>
    /// **参数解释：** API类型，固定值\&quot;List\&quot;，该值不可修改 **约束限制：** 固定值 **取值范围：** - List  **默认取值：** List 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** API版本，固定值\&quot;v3\&quot;，该值不可修改 **约束限制：** 固定值 **取值范围：** - v3  **默认取值：** v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 升级工作流列表 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::vector<UpgradeWorkFlow>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<UpgradeWorkFlow>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::vector<UpgradeWorkFlow> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotUpgradeWorkFlowsResponse_H_

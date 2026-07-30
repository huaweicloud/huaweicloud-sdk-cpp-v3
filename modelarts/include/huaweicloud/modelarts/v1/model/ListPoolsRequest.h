
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListPoolsRequest
    : public ModelBase
{
public:
    ListPoolsRequest();
    virtual ~ListPoolsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPoolsRequest members

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc,hk) 未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池标签筛选。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getLabelSelector() const;
    bool labelSelectorIsSet() const;
    void unsetlabelSelector();
    void setLabelSelector(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池状态。 **约束限制**：不涉及。 **取值范围**：可选值如下： - created: 创建成功的资源池。 - failed：创建失败的资源池，创建失败的资源池记录保留3天。 - creating：创建中的资源池 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string labelSelector_;
    bool labelSelectorIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPoolsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPoolsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolsRequest_H_

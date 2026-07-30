
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAuthoringClustersRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAuthoringClustersRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAuthoringClustersRequest
    : public ModelBase
{
public:
    ListAuthoringClustersRequest();
    virtual ~ListAuthoringClustersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuthoringClustersRequest members

    /// <summary>
    /// **参数解释**：资源池类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - MANAGED： 公共池。 - DEDICATED：专属池。  **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc) **约束限制**：存在并使用的工作空间。 **取值范围**：不涉及。 **默认取值**：“0”。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：每一页显示实例的数量。 **约束限制**：不涉及。 **取值范围**：大于等于0。 **默认取值**：1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：数据条目偏移量。 **约束限制**：不涉及。 **取值范围**：大于等于0。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：作业类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - NOTEBOOK：开发环境 - TRAIN：训练作业 - INFER：推理作业  **默认取值**：NOTEBOOK。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string scope_;
    bool scopeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuthoringClustersRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuthoringClustersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAuthoringClustersRequest_H_

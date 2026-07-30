
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ClusterResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ClusterResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Flavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ClusterResponse
    : public ModelBase
{
public:
    ClusterResponse();
    virtual ~ClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterResponse members

    /// <summary>
    /// **参数解释**： 逻辑资源池ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLogicClusterId() const;
    bool logicClusterIdIsSet() const;
    void unsetlogicClusterId();
    void setLogicClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池状态。 **取值范围**：枚举类型，取值如下： - PENDING：等待中。 - INITIALIZING：初始化中。 - INITIALIZE_FAILED：初始化失败。 - ACTIVE：可用。 - DELETING：删除中。 - DELETED：已删除。 - DELETE_FAILED：删除失败。 - MIGRATING：迁移中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池类型。  **取值范围**：枚举类型，取值如下： - MANAGED：公共池。 - DEDICATED：专属池。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：资源类别。 **取值范围**：枚举类型，取值如下： - GPU - CPU - ASCEND
    /// </summary>

    std::string getResourceCategories() const;
    bool resourceCategoriesIsSet() const;
    void unsetresourceCategories();
    void setResourceCategories(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。获取方法请参见[[查询工作空间列表](ListWorkspace.xml)](tag:hc,hk)。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例创建的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释**：实例最后更新的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释**：用户项目ID，获取方法请参见[获取项目ID和名称](modelarts_03_0147.xml)。 **取值范围**：不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：账号ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池规格。
    /// </summary>

    std::vector<Flavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<Flavor>& value);

    /// <summary>
    /// **参数解释**：资源池是否允许实例以root启动。
    /// </summary>

    bool isIsAllowRoot() const;
    bool isAllowRootIsSet() const;
    void unsetisAllowRoot();
    void setIsAllowRoot(bool value);


protected:
    std::string logicClusterId_;
    bool logicClusterIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string resourceCategories_;
    bool resourceCategoriesIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::vector<Flavor> flavors_;
    bool flavorsIsSet_;
    bool isAllowRoot_;
    bool isAllowRootIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ClusterResponse_H_

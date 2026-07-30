
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowInferServiceClusterResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowInferServiceClusterResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/InferFlavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowInferServiceClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInferServiceClusterResponse();
    virtual ~ShowInferServiceClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInferServiceClusterResponse members

    /// <summary>
    /// **参数解释：** 工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池cceID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogicClusterId() const;
    bool logicClusterIdIsSet() const;
    void unsetlogicClusterId();
    void setLogicClusterId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源当前状态。 **取值范围：** - ACTIVE ：开启。 - PENDING ：待处理。 - INITIALIZING ：初始化中。 - INITIALIZE_FAILED ：初始化失败。 - DELETED ：已删除。 - DELETING ：删除中。 - DELETE_FAILED ：删除失败。 - MIGRATING : 迁移中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 专属资源池ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 专属池类型。 **取值范围：** - MANAGED ：公共。 - MANAGED_ROMA ：公共。 - DEDICATED ：专属。 - DEDICATED_ROMA ：专属。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池类型。
    /// </summary>

    std::vector<std::string>& getResourceCategories();
    bool resourceCategoriesIsSet() const;
    void unsetresourceCategories();
    void setResourceCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** [用户项目ID](tag:hws,hws_hk,fcs,fcs_super)[资源空间ID](tag:hcs,hcs_sm)。获取方法请参见[[获取项目ID和名称](modelarts_03_0147.xml)](tag:hws,hws_hk,fcs,fcs_super)[[获取资源空间ID和名称](modelarts_03_0147.xml)](tag:hcs,hcs_sm)。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池启用的时间，UTC毫秒。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 资源池最后更新的时间，UTC毫秒。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 当前专属池支持的规格。
    /// </summary>

    std::vector<InferFlavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<InferFlavor>& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string logicClusterId_;
    bool logicClusterIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> resourceCategories_;
    bool resourceCategoriesIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::vector<InferFlavor> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowInferServiceClusterResponse_H_

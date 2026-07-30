
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateNotebookResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateNotebookResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RunUserInfo.h>
#include <huaweicloud/modelarts/v1/model/EndpointsRes.h>
#include <huaweicloud/modelarts/v1/model/Image.h>
#include <huaweicloud/modelarts/v1/model/VolumeRes.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/Lease.h>
#include <huaweicloud/modelarts/v1/model/AffinityType.h>
#include <huaweicloud/modelarts/v1/model/Pool.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/VolumeResponse.h>
#include <huaweicloud/modelarts/v1/model/UserResponse.h>
#include <huaweicloud/modelarts/v1/model/NotebookCustomSpecRep.h>
#include <huaweicloud/modelarts/v1/model/UserVpcResponse.h>
#include <huaweicloud/modelarts/v1/model/TmsTagResponse.h>
#include <huaweicloud/modelarts/v1/model/JobProgress.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateNotebookResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateNotebookResponse();
    virtual ~UpdateNotebookResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNotebookResponse members

    /// <summary>
    /// **参数解释**：实例初始化进度。
    /// </summary>

    std::vector<JobProgress>& getActionProgress();
    bool actionProgressIsSet() const;
    void unsetactionProgress();
    void setActionProgress(const std::vector<JobProgress>& value);

    /// <summary>
    /// **参数解释**：实例描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：本地IDE（如PyCharm、VS Code）或SSH客户端，通过SSH远程接入Notebook实例时需要的相关配置。
    /// </summary>

    std::vector<EndpointsRes>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointsRes>& value);

    /// <summary>
    /// **参数解释**：实例失败原因。 **取值范围**：不涉及。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// **参数解释**：实例规格， 1.当用户选择系统规格时，返回值为系统规格码； 2.当用户创建实例时选择了自定义规格，则此字段会固定返回\&quot;custom.flavor.spec.code\&quot;。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NotebookCustomSpecRep getCustomSpec() const;
    bool customSpecIsSet() const;
    void unsetcustomSpec();
    void setCustomSpec(const NotebookCustomSpecRep& value);

    /// <summary>
    /// **参数解释**：实例ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Image getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const Image& value);

    /// <summary>
    /// 
    /// </summary>

    Lease getLease() const;
    bool leaseIsSet() const;
    void unsetlease();
    void setLease(const Lease& value);

    /// <summary>
    /// **参数解释**：实例名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Pool getPool() const;
    bool poolIsSet() const;
    void unsetpool();
    void setPool(const Pool& value);

    /// <summary>
    /// **参数解释**：实例状态。 **取值范围**：枚举类型，取值如下： - INIT：初始化 - CREATING：创建中 - STARTING：启动中 - STOPPING：停止中 - DELETING：删除中 - RUNNING：运行中 - STOPPED：已停止 - SNAPSHOTTING：快照中(保存镜像时的状态) - CREATE_FAILED：创建失败 - START_FAILED：启动失败 - DELETE_FAILED：删除失败 - ERROR：错误 - DELETED：已删除 - FROZEN：冻结
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：Notebook鉴权使用的token信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// **参数解释**：实例访问的URL。 **取值范围**：不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeRes getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const VolumeRes& value);

    /// <summary>
    /// **参数解释**：工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例类别。 **取值范围**：枚举类型，取值如下： - DEFAULT：CodeLab免费规格实例，每个用户最多只能创建一个。 - NOTEBOOK：计费规格实例。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// **参数解释**：计费资源类型。枚举类型，取值如下： - STORAGE：存储资源计费。 - COMPUTE：计算资源计费。 - ALL：所有计费类型。
    /// </summary>

    std::vector<std::string>& getBillingItems();
    bool billingItemsIsSet() const;
    void unsetbillingItems();
    void setBillingItems(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    UserResponse getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const UserResponse& value);

    /// <summary>
    /// 
    /// </summary>

    AffinityType getAffinity() const;
    bool affinityIsSet() const;
    void unsetaffinity();
    void setAffinity(const AffinityType& value);

    /// <summary>
    /// 
    /// </summary>

    RunUserInfo getRunUser() const;
    bool runUserIsSet() const;
    void unsetrunUser();
    void setRunUser(const RunUserInfo& value);

    /// <summary>
    /// **参数解释**：扩展存储信息
    /// </summary>

    std::vector<VolumeResponse>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<VolumeResponse>& value);

    /// <summary>
    /// **参数解释**：实例所在节点ip。 **取值范围**：不涉及。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVpcResponse getUserVpc() const;
    bool userVpcIsSet() const;
    void unsetuserVpc();
    void setUserVpc(const UserVpcResponse& value);

    /// <summary>
    /// **参数解释**：用户ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否需要默认创建用户secret，默认为true。 **取值范围**：不涉及。
    /// </summary>

    bool isIsNeedCredentials() const;
    bool isNeedCredentialsIsSet() const;
    void unsetisNeedCredentials();
    void setIsNeedCredentials(bool value);

    /// <summary>
    /// **参数解释**：jupyter version版本号。 **取值范围**：不涉及。
    /// </summary>

    std::string getJupyterVersion() const;
    bool jupyterVersionIsSet() const;
    void unsetjupyterVersion();
    void setJupyterVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：实例标签。
    /// </summary>

    std::vector<TmsTagResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTagResponse>& value);


protected:
    std::vector<JobProgress> actionProgress_;
    bool actionProgressIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<EndpointsRes> endpoints_;
    bool endpointsIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    NotebookCustomSpecRep customSpec_;
    bool customSpecIsSet_;
    std::string id_;
    bool idIsSet_;
    Image image_;
    bool imageIsSet_;
    Lease lease_;
    bool leaseIsSet_;
    std::string name_;
    bool nameIsSet_;
    Pool pool_;
    bool poolIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::string url_;
    bool urlIsSet_;
    VolumeRes volume_;
    bool volumeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string feature_;
    bool featureIsSet_;
    std::vector<std::string> billingItems_;
    bool billingItemsIsSet_;
    UserResponse user_;
    bool userIsSet_;
    AffinityType affinity_;
    bool affinityIsSet_;
    RunUserInfo runUser_;
    bool runUserIsSet_;
    std::vector<VolumeResponse> dataVolumes_;
    bool dataVolumesIsSet_;
    std::string ip_;
    bool ipIsSet_;
    UserVpcResponse userVpc_;
    bool userVpcIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    bool isNeedCredentials_;
    bool isNeedCredentialsIsSet_;
    std::string jupyterVersion_;
    bool jupyterVersionIsSet_;
    std::vector<TmsTagResponse> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateNotebookResponse_H_

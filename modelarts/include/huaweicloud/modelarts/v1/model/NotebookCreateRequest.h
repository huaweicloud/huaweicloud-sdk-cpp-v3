
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCreateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EndpointsReq.h>
#include <huaweicloud/modelarts/v1/model/LeaseReq.h>
#include <huaweicloud/modelarts/v1/model/CustomHooks.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/RunUserRequest.h>
#include <huaweicloud/modelarts/v1/model/VolumeMountRequest.h>
#include <huaweicloud/modelarts/v1/model/UserVpcRequest.h>
#include <huaweicloud/modelarts/v1/model/AffinityType.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/NotebookCustomSpec.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NotebookCreateRequest
    : public ModelBase
{
public:
    NotebookCreateRequest();
    virtual ~NotebookCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotebookCreateRequest members

    /// <summary>
    /// **参数解释**：实例描述信息。 **约束限制**：不涉及。 **取值范围**：长度限制为512字符，且不能包含字符&amp;&lt;&gt;\&quot;&#39;/。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：仅在本地IDE（如PyCharm、VS Code）或SSH客户端接入Notebook。 **约束限制**：仅在本地IDE（如PyCharm、VS Code）或SSH客户端，通过SSH远程接入Notebook实例时需要的相关配置。
    /// </summary>

    std::vector<EndpointsReq>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointsReq>& value);

    /// <summary>
    /// **参数解释**：实例类别。 **约束限制**：不涉及。 **取值范围**： - DEFAULT：CodeLab免费规格实例，每个用户最多只能创建一个。 - NOTEBOOK：计费规格实例。  **默认取值**：NOTEBOOK。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// **参数解释**：实例的机器规格。如下规格仅供参考，实际支持的规格以具体区域为准。 - modelarts.vm.cpu.2u：Intel CPU通用规格，用于快速数据探索和实验。 - modelarts.vm.cpu.8u：Intel CPU算力增强型，适用于密集计算场景下运算。  **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NotebookCustomSpec getCustomSpec() const;
    bool customSpecIsSet() const;
    void unsetcustomSpec();
    void setCustomSpec(const NotebookCustomSpec& value);

    /// <summary>
    /// **参数解释**：待创建Notebook实例的镜像，需要指定镜像ID。ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID）。镜像的ID可通过调用[[查询支持的镜像列表](https://support.huaweicloud.com/api-modelarts/ListImage.html)](tag:hc)[[查询支持的镜像列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListImage.html)](tag:hk)接口获取。 **约束限制**：不涉及。 **取值范围**：调用[[查询支持的镜像列表](https://support.huaweicloud.com/api-modelarts/ListImage.html)](tag:hc)[[查询支持的镜像列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListImage.html)](tag:hk)接口获取的合法镜像ID列表。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例名称。 **约束限制**：不涉及。 **取值范围**：长度限制为128个字符，支持大小写字母、数字、中划线和下划线，名称可重复。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：专属资源池ID，若需要指定专属资源池创建实例时必填。专属资源池ID可通过[[查询资源池列表](https://support.huaweicloud.com/api-modelarts/ListPools.html)](tag:hc)[[查询资源池列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListPools.html)](tag:hk)接口获取。 **约束限制**：不涉及。 **取值范围**：调用[[查询资源池列表](https://support.huaweicloud.com/api-modelarts/ListPools.html)](tag:hc)[[查询资源池列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListPools.html)](tag:hk)接口获取的合法资源池ID列表。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeMountRequest getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const VolumeMountRequest& value);

    /// <summary>
    /// **参数解释**：工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：0或32位仅包含字符0-9或小写字母a-z的字符串。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomHooks getHooks() const;
    bool hooksIsSet() const;
    void unsethooks();
    void setHooks(const CustomHooks& value);

    /// <summary>
    /// 
    /// </summary>

    LeaseReq getLease() const;
    bool leaseIsSet() const;
    void unsetlease();
    void setLease(const LeaseReq& value);

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

    RunUserRequest getRunUser() const;
    bool runUserIsSet() const;
    void unsetrunUser();
    void setRunUser(const RunUserRequest& value);

    /// <summary>
    /// **参数解释**：实例存储配置。 **约束限制**：不涉及。
    /// </summary>

    std::vector<VolumeMountRequest>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<VolumeMountRequest>& value);

    /// <summary>
    /// 
    /// </summary>

    UserVpcRequest getUserVpc() const;
    bool userVpcIsSet() const;
    void unsetuserVpc();
    void setUserVpc(const UserVpcRequest& value);

    /// <summary>
    /// **参数解释**：定时停止，以当前时刻为起点，运行的时长（到期后自动停止）。单位：毫秒。 **约束限制**：不涉及。 **取值范围**：3600000-259200000。 **默认取值**：3600000。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::vector<EndpointsReq> endpoints_;
    bool endpointsIsSet_;
    std::string feature_;
    bool featureIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    NotebookCustomSpec customSpec_;
    bool customSpecIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    VolumeMountRequest volume_;
    bool volumeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    CustomHooks hooks_;
    bool hooksIsSet_;
    LeaseReq lease_;
    bool leaseIsSet_;
    AffinityType affinity_;
    bool affinityIsSet_;
    RunUserRequest runUser_;
    bool runUserIsSet_;
    std::vector<VolumeMountRequest> dataVolumes_;
    bool dataVolumesIsSet_;
    UserVpcRequest userVpc_;
    bool userVpcIsSet_;
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCreateRequest_H_

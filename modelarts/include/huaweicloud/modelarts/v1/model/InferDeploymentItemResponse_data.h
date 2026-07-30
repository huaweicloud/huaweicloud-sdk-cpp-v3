
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentItemResponse_data_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentItemResponse_data_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/FrozenInfo.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InferDeploymentItemResponse_data
    : public ModelBase
{
public:
    InferDeploymentItemResponse_data();
    virtual ~InferDeploymentItemResponse_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferDeploymentItemResponse_data members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **取值范围：** 服务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名，用户在[创建服务](CreateInferService.xml)时自定义。 **取值范围：** 支持1-128个字符，可以包含字母、汉字、数字、连字符和下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署ID。 **取值范围：** 不涉及
    /// </summary>

    std::string getInferName() const;
    bool inferNameIsSet() const;
    void unsetinferName();
    void setInferName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例组id。 **取值范围：** 不涉及
    /// </summary>

    std::string getServiceGroupName() const;
    bool serviceGroupNameIsSet() const;
    void unsetserviceGroupName();
    void setServiceGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务当前状态，一次只支持一种状态筛选。默认不过滤。 **取值范围：** - DEPLOYING：部署中。 - FAILED：失败。 - STOPPED：停止。 - RUNNING：运行中。 - DELETING：删除中。 - STOPPING：停止中。 - CONCERNING：告警。 - DELETED：已删除。 - RESTARTING：重启中。 - UPGRADING：升级中。 - ERROR：异常。 - INTERRUPTING：中断中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署对接lts状态。 **取值范围：** - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getLtsState() const;
    bool ltsStateIsSet() const;
    void unsetltsState();
    void setLtsState(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启镜像流量。 **取值范围：** 不涉及
    /// </summary>

    bool isMirrorTrafficEnable() const;
    bool mirrorTrafficEnableIsSet() const;
    void unsetmirrorTrafficEnable();
    void setMirrorTrafficEnable(bool value);

    /// <summary>
    /// **参数解释：** 镜像流量权重。 **取值范围：** 50。
    /// </summary>

    std::string getMirrorTrafficWeight() const;
    bool mirrorTrafficWeightIsSet() const;
    void unsetmirrorTrafficWeight();
    void setMirrorTrafficWeight(const std::string& value);

    /// <summary>
    /// **参数解释：** 权重百分比，分配到此模型的流量权重，仅当模型部署为在线服务时需要配置。 **取值范围：** [0, 100]。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 流量比例，单个部署实例预期接收用户的流量与总流量比值，是由流量权重配置和部署状态计算所得的值。 **取值范围：** 0.00%~100.00%。
    /// </summary>

    std::string getTrafficRatio() const;
    bool trafficRatioIsSet() const;
    void unsettrafficRatio();
    void setTrafficRatio(const std::string& value);

    /// <summary>
    /// **参数解释：** 专属资源池ID。 **取值范围：** 50。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本号，以数字及点号组成，形如1.0.1。 **取值范围：** 版本长度不超过8位。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署类型。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。 - DIST：分布式部署。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间，根据创建时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 更新时间，根据更新时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 当服务或者部署被冻结时返回的冻结类型信息。
    /// </summary>

    std::vector<FrozenInfo>& getFrozenInfos();
    bool frozenInfosIsSet() const;
    void unsetfrozenInfos();
    void setFrozenInfos(const std::vector<FrozenInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string inferName_;
    bool inferNameIsSet_;
    std::string serviceGroupName_;
    bool serviceGroupNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string ltsState_;
    bool ltsStateIsSet_;
    bool mirrorTrafficEnable_;
    bool mirrorTrafficEnableIsSet_;
    std::string mirrorTrafficWeight_;
    bool mirrorTrafficWeightIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string trafficRatio_;
    bool trafficRatioIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::vector<FrozenInfo> frozenInfos_;
    bool frozenInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentItemResponse_data_H_

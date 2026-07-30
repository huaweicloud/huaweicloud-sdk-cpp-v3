
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TagsResponse.h>
#include <huaweicloud/modelarts/v1/model/PredictUrlResponse.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ScheduleConfigResponse.h>
#include <huaweicloud/modelarts/v1/model/FrozenInfo.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ServiceVersionResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferServiceResponse();
    virtual ~CreateInferServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferServiceResponse members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名，用户在[创建服务](CreateInferService.xml)时自定义的名称。 **取值范围：** 支持1-64位字符，可包含字母、中文、数字、中划线、下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** - 0：默认空间ID。 - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml)。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理服务类型。 **取值范围：** - REAL_TIME：在线服务。 - ASYNC_REAL_TIME：异步服务。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署方式。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务当前状态。 **取值范围：** - DEPLOYING：部署中 。 - FAILED：失败 。 - STOPPED：停止。 - RUNNING：运行中。 - DELETING：删除中 。 - STOPPING：停止中 。 - CONCERNING：告警 。 - UPGRADING：升级中 。 - ERROR：异常 。 - INIT：待部署。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 在线服务失败原因。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceVersionResponse getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const ServiceVersionResponse& value);

    /// <summary>
    /// **参数解释：** 在线服务访问地址，创建服务接口无返回，详情接口中返回。
    /// </summary>

    std::vector<PredictUrlResponse>& getPredictUrl();
    bool predictUrlIsSet() const;
    void unsetpredictUrl();
    void setPredictUrl(const std::vector<PredictUrlResponse>& value);

    /// <summary>
    /// **参数解释：** 服务绑定的dispatcher组ID，创建服务接口无返回，详情接口中返回。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDispatcherGroupId() const;
    bool dispatcherGroupIdIsSet() const;
    void unsetdispatcherGroupId();
    void setDispatcherGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** TMS对接标签类。
    /// </summary>

    std::vector<TagsResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsResponse>& value);

    /// <summary>
    /// **参数解释：** 部署超时时间。
    /// </summary>

    int32_t getDeployTimeoutMinutes() const;
    bool deployTimeoutMinutesIsSet() const;
    void unsetdeployTimeoutMinutes();
    void setDeployTimeoutMinutes(int32_t value);

    /// <summary>
    /// **参数解释：** 定时停止配置。
    /// </summary>

    std::vector<ScheduleConfigResponse>& getSchedule();
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::vector<ScheduleConfigResponse>& value);

    /// <summary>
    /// **参数解释：** 创建时间，根据创建时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字，如1609459200000。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间，根据更新时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字，如1609459200000。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 模型类型。 **取值范围：** - TEXT_GENERATION：文本生成 - IMAGE_UNDERSTANDING：图像理解 - VIDEO_GENERATION：视频生成 - IMAGE_GENERATION：图像生成 - RERANK：重排序 - VECTOR_MODEL：向量模型 - EMBEDDING：Embedding嵌入
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务提供者的账号id（创建服务时通过X-Auth-Token-Provider请求头解析iam token而来），该值不为空时，该服务的所有更新操作需要在请求头中添加X-Auth-Token-Provider，取值为该账号id的domain级或project级token。
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

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
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;
    ServiceVersionResponse version_;
    bool versionIsSet_;
    std::vector<PredictUrlResponse> predictUrl_;
    bool predictUrlIsSet_;
    std::string dispatcherGroupId_;
    bool dispatcherGroupIdIsSet_;
    std::vector<TagsResponse> tags_;
    bool tagsIsSet_;
    int32_t deployTimeoutMinutes_;
    bool deployTimeoutMinutesIsSet_;
    std::vector<ScheduleConfigResponse> schedule_;
    bool scheduleIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string provider_;
    bool providerIsSet_;
    std::vector<FrozenInfo> frozenInfos_;
    bool frozenInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceResponse_H_

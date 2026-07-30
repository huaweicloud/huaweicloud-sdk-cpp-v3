
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceItemResponse_data_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceItemResponse_data_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TagsResponse.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ScheduleConfigResponse.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceItemResponse_data
    : public ModelBase
{
public:
    ServiceItemResponse_data();
    virtual ~ServiceItemResponse_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceItemResponse_data members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **取值范围：** 服务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名，用户在[创建服务](CreateInferService.xml)时自定义。 **取值范围：** 支持1-128个字符，可以包含字母、汉字、数字、连字符和下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务当前状态。 **取值范围：** - DEPLOYING：部署中。 - FAILED：失败。 - STOPPED：停止。 - RUNNING：运行中。 - DELETING：删除中。 - STOPPING：停止中。 - CONCERNING：告警。 - UPGRADING：升级中。 - ERROR：异常。 - INTERRUPTING：中断中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本号，以数字及点号组成，形如1.0.1。 **取值范围：** 1.0.0 ~ 99.99.99，长度不超过8位。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getVersionCount() const;
    bool versionCountIsSet() const;
    void unsetversionCount();
    void setVersionCount(int32_t value);

    /// <summary>
    /// **参数解释：** 服务描述，由用户[创建服务](CreateInferService.xml)时自行填写。 **取值范围：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理服务类型。 **约束限制：** 不涉及。 **取值范围：** - REAL_TIME：在线服务。 - ASYNC_REAL_TIME：异步服务。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署类型。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建服务的用户名。 **取值范围：** 用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** - 0：默认空间ID。 - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml)。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间，根据创建时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字。
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
    /// **参数解释：** 在线服务认证类型。 **取值范围：** - TOKEN：IAM Token认证。 - API_KEY：API Key认证。 - NONE：无认证。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数解释：** 模型类型。 **取值范围：** - TEXT_GENERATION：文本生成 - IMAGE_UNDERSTANDING：图像理解 - VIDEO_GENERATION：视频生成 - IMAGE_GENERATION：图像生成 - RERANK：重排序 - VECTOR_MODEL：向量模型 - EMBEDDING：Embedding嵌入
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释：** 在线服务标签数据。
    /// </summary>

    std::vector<TagsResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsResponse>& value);

    /// <summary>
    /// **参数解释：** 定时停止配置。
    /// </summary>

    std::vector<ScheduleConfigResponse>& getSchedule();
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::vector<ScheduleConfigResponse>& value);

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
    std::string status_;
    bool statusIsSet_;
    std::string version_;
    bool versionIsSet_;
    int32_t versionCount_;
    bool versionCountIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::vector<TagsResponse> tags_;
    bool tagsIsSet_;
    std::vector<ScheduleConfigResponse> schedule_;
    bool scheduleIsSet_;
    std::vector<FrozenInfo> frozenInfos_;
    bool frozenInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceItemResponse_data_H_


#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineDetailDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineDetailDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/PipelineDto.h>
#include <huaweicloud/codehub/v4/model/PipelineStageDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线详情
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PipelineDetailDto
    : public ModelBase
{
public:
    PipelineDetailDto();
    virtual ~PipelineDetailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineDetailDto members

    /// <summary>
    /// 流水线ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 流水线链接
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// commit id
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 分支
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 流水线状态，pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 流水线创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 流水线更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 流水线开始时间
    /// </summary>

    std::string getStartedAt() const;
    bool startedAtIsSet() const;
    void unsetstartedAt();
    void setStartedAt(const std::string& value);

    /// <summary>
    /// 流水线结束时间
    /// </summary>

    std::string getFinishedAt() const;
    bool finishedAtIsSet() const;
    void unsetfinishedAt();
    void setFinishedAt(const std::string& value);

    /// <summary>
    /// 仓库ID
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 流水线是否失效
    /// </summary>

    bool isIsInvalid() const;
    bool isInvalidIsSet() const;
    void unsetisInvalid();
    void setIsInvalid(bool value);

    /// <summary>
    /// 流水线类型，MERGE REQUEST代表为合并请求触发的流水线
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<PipelineStageDto>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<PipelineStageDto>& value);

    /// <summary>
    /// 是否是最近一条流水线
    /// </summary>

    bool isIsLatest() const;
    bool isLatestIsSet() const;
    void unsetisLatest();
    void setIsLatest(bool value);

    /// <summary>
    /// 触发的用户
    /// </summary>

    std::string getTriggerUser() const;
    bool triggerUserIsSet() const;
    void unsettriggerUser();
    void setTriggerUser(const std::string& value);

    /// <summary>
    /// 是否所有job都运行完成
    /// </summary>

    bool isAllJobFinished() const;
    bool allJobFinishedIsSet() const;
    void unsetallJobFinished();
    void setAllJobFinished(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string startedAt_;
    bool startedAtIsSet_;
    std::string finishedAt_;
    bool finishedAtIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    bool isInvalid_;
    bool isInvalidIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<PipelineStageDto> stages_;
    bool stagesIsSet_;
    bool isLatest_;
    bool isLatestIsSet_;
    std::string triggerUser_;
    bool triggerUserIsSet_;
    bool allJobFinished_;
    bool allJobFinishedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineDetailDto_H_

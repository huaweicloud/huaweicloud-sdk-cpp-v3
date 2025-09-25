
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 阶段信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PipelineStageDto
    : public ModelBase
{
public:
    PipelineStageDto();
    virtual ~PipelineStageDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineStageDto members

    /// <summary>
    /// 阶段ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 仓库ID
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 流水线ID
    /// </summary>

    int32_t getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(int32_t value);

    /// <summary>
    /// 阶段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 阶段顺序id
    /// </summary>

    int32_t getSortId() const;
    bool sortIdIsSet() const;
    void unsetsortId();
    void setSortId(int32_t value);

    /// <summary>
    /// 阶段状态, pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t pipelineId_;
    bool pipelineIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t sortId_;
    bool sortIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageDto_H_


#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageJobDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageJobDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/BaseJobDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线阶段的任务
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PipelineStageJobDto
    : public ModelBase
{
public:
    PipelineStageJobDto();
    virtual ~PipelineStageJobDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineStageJobDto members

    /// <summary>
    /// 阶段ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 阶段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 阶段顺序ID
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

    /// <summary>
    /// 
    /// </summary>

    std::vector<BaseJobDto>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<BaseJobDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t sortId_;
    bool sortIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<BaseJobDto> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PipelineStageJobDto_H_

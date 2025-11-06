
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLatestPipelineJobsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLatestPipelineJobsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/PipelineStageJobDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListLatestPipelineJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLatestPipelineJobsResponse();
    virtual ~ListLatestPipelineJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLatestPipelineJobsResponse members

    /// <summary>
    /// 流水线ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 流水线状态，pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<PipelineStageJobDto>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<PipelineStageJobDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<PipelineStageJobDto> stages_;
    bool stagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLatestPipelineJobsResponse_H_

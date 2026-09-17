
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RetryPipelineRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RetryPipelineRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重试运行流水线请求体。
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RetryPipelineRequest
    : public ModelBase
{
public:
    RetryPipelineRequest();
    virtual ~RetryPipelineRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetryPipelineRequest members

    /// <summary>
    /// **参数解释**： 仓库HTTPS地址。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRepoHttpsUrl() const;
    bool repoHttpsUrlIsSet() const;
    void unsetrepoHttpsUrl();
    void setRepoHttpsUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线任务运行ID列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getJobRunIds();
    bool jobRunIdsIsSet() const;
    void unsetjobRunIds();
    void setJobRunIds(const std::vector<std::string>& value);


protected:
    std::string repoHttpsUrl_;
    bool repoHttpsUrlIsSet_;
    std::vector<std::string> jobRunIds_;
    bool jobRunIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RetryPipelineRequest_H_

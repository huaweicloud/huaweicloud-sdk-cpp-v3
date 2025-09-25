
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineMoveToGroupResponseVo_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineMoveToGroupResponseVo_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 响应详情。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineMoveToGroupResponseVo
    : public ModelBase
{
public:
    PipelineMoveToGroupResponseVo();
    virtual ~PipelineMoveToGroupResponseVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineMoveToGroupResponseVo members

    /// <summary>
    /// **参数解释**： 响应码。 **取值范围**： - failed：失败。 - success：成功。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineMoveToGroupResponseVo_H_

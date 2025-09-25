
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineLogResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineLogResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPipelineLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPipelineLogResponse();
    virtual ~ShowPipelineLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPipelineLogResponse members

    /// <summary>
    /// **参数解释**： 是否有更多日志。 **取值范围**： - true：有更多日志。 - false：没有更多日志。 
    /// </summary>

    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsethasMore();
    void setHasMore(bool value);

    /// <summary>
    /// **参数解释**： 查询日志结束偏移。填入请求体end_offset字段，用于查询下一页日志。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(const std::string& value);

    /// <summary>
    /// **参数解释**： 查询日志起始偏移。填入请求体start_offset字段，用于查询下一页日志。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getStartOffset() const;
    bool startOffsetIsSet() const;
    void unsetstartOffset();
    void setStartOffset(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志内容。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLog() const;
    bool logIsSet() const;
    void unsetlog();
    void setLog(const std::string& value);

    /// <summary>
    /// **参数解释**： 所属步骤ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getStepRunId() const;
    bool stepRunIdIsSet() const;
    void unsetstepRunId();
    void setStepRunId(const std::string& value);


protected:
    bool hasMore_;
    bool hasMoreIsSet_;
    std::string endOffset_;
    bool endOffsetIsSet_;
    std::string startOffset_;
    bool startOffsetIsSet_;
    std::string log_;
    bool logIsSet_;
    std::string stepRunId_;
    bool stepRunIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineLogResponse_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsQueryDTO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ActionsPipelineRunsQueryDTO
    : public ModelBase
{
public:
    ActionsPipelineRunsQueryDTO();
    virtual ~ActionsPipelineRunsQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionsPipelineRunsQueryDTO members

    /// <summary>
    /// **参数解释**： 分页查询页码。 **约束限制**： 不涉及。 **取值范围**： 大于0。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int64_t value);

    /// <summary>
    /// **参数解释**： 每页的查询数量。 **约束限制**： 不涉及。 **取值范围**： 固定20。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源地址。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件所处路径。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行人名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineRunName() const;
    bool pipelineRunNameIsSet() const;
    void unsetpipelineRunName();
    void setPipelineRunName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线触发类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线创建者名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getActor() const;
    bool actorIsSet() const;
    void unsetactor();
    void setActor(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源分支。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行状态。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int64_t page_;
    bool pageIsSet_;
    std::string pageSize_;
    bool pageSizeIsSet_;
    std::string httpsUrl_;
    bool httpsUrlIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string pipelineRunName_;
    bool pipelineRunNameIsSet_;
    std::string event_;
    bool eventIsSet_;
    std::string actor_;
    bool actorIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsQueryDTO_H_

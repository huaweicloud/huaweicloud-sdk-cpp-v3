
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineSimpleInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineSimpleInfoRequestBody_H_


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
/// **参数解释**： 查询流水线信息对象 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelineSimpleInfoRequestBody
    : public ModelBase
{
public:
    ListPipelineSimpleInfoRequestBody();
    virtual ~ListPipelineSimpleInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelineSimpleInfoRequestBody members

    /// <summary>
    /// **参数解释**： 流水线名字。查询时进行模糊匹配。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目id，有多个值时用逗号分隔，id个数取值[0,10]，非必选。如果该参数有值，则获取对应项目下的流水线列表；如果没有值，则获取用户有权限的所有项目的流水线列表 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectIds() const;
    bool projectIdsIsSet() const;
    void unsetprojectIds();
    void setProjectIds(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人id，有多个值时用逗号分隔，id个数取值[0,10]，非必选 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCreatorIds() const;
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行人id。有多个值时用逗号分隔，id个数取值[0,10]，非必选。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getExecutorIds() const;
    bool executorIdsIsSet() const;
    void unsetexecutorIds();
    void setExecutorIds(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行状态。 **约束限制**： 不涉及。 **取值范围**： - waiting：等待中。 - running：运行中。 - verifying：待审核。 - suspending：挂起。 - completed：执行完成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线执行结果。 **约束限制**： 不涉及。 **取值范围**： - success：成功。 - error：失败。 - aborted：终止。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getOutcome() const;
    bool outcomeIsSet() const;
    void unsetoutcome();
    void setOutcome(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于排序的字段，非必选。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 排序方式。 **约束限制**： 不涉及。 **取值范围**： - asc：按排序字段升序。 - desc：按排序字段降序。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓地址。仅支持codehub仓库，如：git@codehub.XXX.git **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 偏移量。表示从此偏移量开始查询。 **约束限制**： 不涉及。 **取值范围**： offset大于等于0。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 每次查询的条目数量。 **约束限制**： 不涉及。 **取值范围**： 取值[10-50]。 **默认取值**： 10。 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string projectIds_;
    bool projectIdsIsSet_;
    std::string creatorIds_;
    bool creatorIdsIsSet_;
    std::string executorIds_;
    bool executorIdsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string outcome_;
    bool outcomeIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineSimpleInfoRequestBody_H_

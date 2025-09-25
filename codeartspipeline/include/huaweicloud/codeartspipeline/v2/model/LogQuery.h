
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_LogQuery_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_LogQuery_H_


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
/// **参数解释**： 流水线日志查询请求体。 **约束限制**： startOffset 和 endOffset 均设置为 0，则代表查询全量日志。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  LogQuery
    : public ModelBase
{
public:
    LogQuery();
    virtual ~LogQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogQuery members

    /// <summary>
    /// **参数解释**： 日志起始偏移。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getStartOffset() const;
    bool startOffsetIsSet() const;
    void unsetstartOffset();
    void setStartOffset(int64_t value);

    /// <summary>
    /// **参数解释**： 日志结束偏移。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(int64_t value);

    /// <summary>
    /// **参数解释**： 最大日志行数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int64_t value);

    /// <summary>
    /// **参数解释**： 排序规则。 **约束限制**： 不涉及。 **取值范围**： - asc：按排序字段升序。 - desc：按排序字段降序 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);


protected:
    int64_t startOffset_;
    bool startOffsetIsSet_;
    int64_t endOffset_;
    bool endOffsetIsSet_;
    int64_t limit_;
    bool limitIsSet_;
    std::string sort_;
    bool sortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_LogQuery_H_

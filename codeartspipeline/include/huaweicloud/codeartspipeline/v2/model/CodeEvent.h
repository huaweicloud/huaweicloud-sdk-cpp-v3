
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeEvent_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeEvent_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CodeEvent
    : public ModelBase
{
public:
    CodeEvent();
    virtual ~CodeEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodeEvent members

    /// <summary>
    /// **参数解释**： 事件类型。 **约束限制**： 不涉及。 **取值范围**： - merge_request：MR 触发。 - push：代码Push触发。 - tag_push：标签触发。 - issue：Gitee仓库ISSUE触发。 - note：Gitee仓库评论触发。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓是否可用。 **约束限制**： 不涉及。 **取值范围**： - true：代码仓可用。 - false：代码仓不可用。 **默认取值**： 不涉及。 
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeEvent_H_

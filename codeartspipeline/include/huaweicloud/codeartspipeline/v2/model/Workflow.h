
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Workflow_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Workflow_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/Source.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PipelineParam.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线参数详情
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Workflow
    : public ModelBase
{
public:
    Workflow();
    virtual ~Workflow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Workflow members

    /// <summary>
    /// **参数解释**： 任务类型，list类型数据。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PipelineParam>& getParameter();
    bool parameterIsSet() const;
    void unsetparameter();
    void setParameter(const std::vector<PipelineParam>& value);

    /// <summary>
    /// **参数解释**： 源码仓，list类型数据。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<Source>& getSource();
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::vector<Source>& value);

    /// <summary>
    /// **参数解释**： 流水线名字 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名字 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::vector<PipelineParam> parameter_;
    bool parameterIsSet_;
    std::vector<Source> source_;
    bool sourceIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Workflow_H_

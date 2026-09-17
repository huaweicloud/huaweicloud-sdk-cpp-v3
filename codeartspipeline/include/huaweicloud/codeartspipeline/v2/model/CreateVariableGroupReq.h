
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/CreateVariableGroupReq_variables.h>
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
/// **参数解释**： 请求体详情。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CreateVariableGroupReq
    : public ModelBase
{
public:
    CreateVariableGroupReq();
    virtual ~CreateVariableGroupReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVariableGroupReq members

    /// <summary>
    /// **参数解释**： 参数组名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 描述详情。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<CreateVariableGroupReq_variables>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<CreateVariableGroupReq_variables>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CreateVariableGroupReq_variables> variables_;
    bool variablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_H_

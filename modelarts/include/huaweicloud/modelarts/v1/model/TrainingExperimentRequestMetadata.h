
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentRequestMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentRequestMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建训练实验的数据。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TrainingExperimentRequestMetadata
    : public ModelBase
{
public:
    TrainingExperimentRequestMetadata();
    virtual ~TrainingExperimentRequestMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingExperimentRequestMetadata members

    /// <summary>
    /// **参数解释**：实验名称。 **约束限制**：最大长度64，不支持特殊字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：描述信息。 **约束限制**：最大长度256，不支持特殊字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：默认为0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentRequestMetadata_H_

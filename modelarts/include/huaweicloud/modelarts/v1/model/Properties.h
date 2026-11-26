
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Properties_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Properties_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/OperatorArgument.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：数据集资产扩展信息。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Properties
    : public ModelBase
{
public:
    Properties();
    virtual ~Properties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Properties members

    /// <summary>
    /// **参数解释**：数据集的条数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getDatasetNum() const;
    bool datasetNumIsSet() const;
    void unsetdatasetNum();
    void setDatasetNum(int32_t value);

    /// <summary>
    /// **参数解释**：数据集资产资源文件总大小。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int64_t getDatasetSize() const;
    bool datasetSizeIsSet() const;
    void unsetdatasetSize();
    void setDatasetSize(int64_t value);

    /// <summary>
    /// **参数解释**：数据集资产评测模版相对地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPromptConfig() const;
    bool promptConfigIsSet() const;
    void unsetpromptConfig();
    void setPromptConfig(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集资产版权信息，包含数据集信息，License和地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDataCopyright() const;
    bool dataCopyrightIsSet() const;
    void unsetdataCopyright();
    void setDataCopyright(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集资产索引文件地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getManifestFilePath() const;
    bool manifestFilePathIsSet() const;
    void unsetmanifestFilePath();
    void setManifestFilePath(const std::string& value);

    /// <summary>
    /// **参数解释**：算子参数列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<OperatorArgument>& getArguments();
    bool argumentsIsSet() const;
    void unsetarguments();
    void setArguments(const std::vector<OperatorArgument>& value);

    /// <summary>
    /// **参数解释**：数据集资产修改人信息。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUpdater() const;
    bool updaterIsSet() const;
    void unsetupdater();
    void setUpdater(const std::string& value);


protected:
    int32_t datasetNum_;
    bool datasetNumIsSet_;
    int64_t datasetSize_;
    bool datasetSizeIsSet_;
    std::string promptConfig_;
    bool promptConfigIsSet_;
    std::string dataCopyright_;
    bool dataCopyrightIsSet_;
    std::string manifestFilePath_;
    bool manifestFilePathIsSet_;
    std::vector<OperatorArgument> arguments_;
    bool argumentsIsSet_;
    std::string updater_;
    bool updaterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Properties_H_

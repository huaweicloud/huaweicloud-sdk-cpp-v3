
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResp_H_


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
/// 训练实验参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TrainingExperimentResp
    : public ModelBase
{
public:
    TrainingExperimentResp();
    virtual ~TrainingExperimentResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingExperimentResp members

    /// <summary>
    /// **参数解释**：实验名称。 **约束限制**：最大长度64，不支持特殊字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：实验ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：当前训练作业在所属的训练实验中的序号。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：默认为0。
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResp_H_

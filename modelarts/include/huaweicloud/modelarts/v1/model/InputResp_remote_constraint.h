
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputResp_remote_constraint_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputResp_remote_constraint_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InputResp_remote_constraint
    : public ModelBase
{
public:
    InputResp_remote_constraint();
    virtual ~InputResp_remote_constraint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputResp_remote_constraint members

    /// <summary>
    /// **参数解释**：数据输入类型，包括数据存储位置、数据集两种方式。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// **参数解释**：相关属性。 **约束限制**：不涉及。 **取值范围**： 数据输入为数据集时：   - data_format：数据格式   - data_segmentation：数据切分方式   - dataset_type：标注类型  **默认取值**：不涉及。
    /// </summary>

    std::string getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const std::string& value);


protected:
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputResp_remote_constraint_H_

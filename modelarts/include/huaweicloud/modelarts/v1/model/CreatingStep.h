
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatingStep_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatingStep_H_


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
/// 批量创建信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreatingStep
    : public ModelBase
{
public:
    CreatingStep();
    virtual ~CreatingStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatingStep members

    /// <summary>
    /// **参数解释**：超节点的步长。仅支持资源规格详情中包含的步长。 **取值范围**：不涉及。
    /// </summary>

    int32_t getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(int32_t value);

    /// <summary>
    /// **参数解释**：批量创建类型。 **取值范围**：可选值如下： - hyperinstance：超节点。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t step_;
    bool stepIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatingStep_H_

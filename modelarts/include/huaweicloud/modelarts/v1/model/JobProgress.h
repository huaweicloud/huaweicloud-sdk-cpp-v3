
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobProgress_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobProgress_H_


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
/// 实例初始化进度。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobProgress
    : public ModelBase
{
public:
    JobProgress();
    virtual ~JobProgress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobProgress members

    /// <summary>
    /// **参数解释**：任务某个步骤的状态。 **取值范围**：枚举类型，取值如下： - WAITING：等待中 - PROCESSING：处理中 - FAILED：任务失败 - COMPLETED：任务完成
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：任务的步骤。 **取值范围**：枚举类型，取值如下： - 1：准备存储 - 2：准备计算资源 - 3：配置网络 - 4：初始化实例
    /// </summary>

    int32_t getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(int32_t value);

    /// <summary>
    /// **参数解释**：任务某个步骤的描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t step_;
    bool stepIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobProgress_H_


#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeploymentTaskLimit_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeploymentTaskLimit_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeploymentTaskLimit
    : public ModelBase
{
public:
    DeploymentTaskLimit();
    virtual ~DeploymentTaskLimit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentTaskLimit members

    /// <summary>
    /// **参数解释：** 最大并发任务数 **约束限制：** 不填保留原有值。 **取值范围：** [1, 100]。 **默认取值：** 不涉及
    /// </summary>

    int32_t getMaxConcurrentTask() const;
    bool maxConcurrentTaskIsSet() const;
    void unsetmaxConcurrentTask();
    void setMaxConcurrentTask(int32_t value);


protected:
    int32_t maxConcurrentTask_;
    bool maxConcurrentTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeploymentTaskLimit_H_

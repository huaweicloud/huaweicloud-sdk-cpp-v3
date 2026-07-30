
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_remote_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_remote_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Task_algorithm_remote_obs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：数据实际输出信息。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task_algorithm_remote
    : public ModelBase
{
public:
    Task_algorithm_remote();
    virtual ~Task_algorithm_remote();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task_algorithm_remote members

    /// <summary>
    /// 
    /// </summary>

    Task_algorithm_remote_obs getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(const Task_algorithm_remote_obs& value);


protected:
    Task_algorithm_remote_obs obs_;
    bool obsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_remote_H_

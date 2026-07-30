
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskEnv_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskEnv_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EnvVar.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 精调训练环境变量信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskEnv
    : public ModelBase
{
public:
    TaskEnv();
    virtual ~TaskEnv();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskEnv members

    /// <summary>
    /// 精调训练环境变量信息
    /// </summary>

    std::vector<EnvVar>& getEnvs();
    bool envsIsSet() const;
    void unsetenvs();
    void setEnvs(const std::vector<EnvVar>& value);


protected:
    std::vector<EnvVar> envs_;
    bool envsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskEnv_H_

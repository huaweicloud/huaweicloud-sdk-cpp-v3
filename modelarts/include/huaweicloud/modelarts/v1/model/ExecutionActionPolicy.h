
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionActionPolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionActionPolicy_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 执行动作策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ExecutionActionPolicy
    : public ModelBase
{
public:
    ExecutionActionPolicy();
    virtual ~ExecutionActionPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecutionActionPolicy members

    /// <summary>
    /// 重跑的节点。
    /// </summary>

    std::vector<std::string>& getRerunSteps();
    bool rerunStepsIsSet() const;
    void unsetrerunSteps();
    void setRerunSteps(const std::vector<std::string>& value);


protected:
    std::vector<std::string> rerunSteps_;
    bool rerunStepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionActionPolicy_H_

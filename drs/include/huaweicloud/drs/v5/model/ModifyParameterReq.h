
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyParameterReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyParameterReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ParameterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新任务参数请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyParameterReq
    : public ModelBase
{
public:
    ModifyParameterReq();
    virtual ~ModifyParameterReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyParameterReq members

    /// <summary>
    /// 参数值对象，基于默认参数模板初始化的参数值。  key：参数名称，如“applier_thread_num”，“read_task_num”。为空时不修改参数值。 value：参数值，如“6”，“20”。key不为空时value也不可为空。
    /// </summary>

    std::vector<ParameterInfo>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<ParameterInfo>& value);


protected:
    std::vector<ParameterInfo> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyParameterReq_H_

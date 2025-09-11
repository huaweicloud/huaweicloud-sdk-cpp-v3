
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionReservedInstancesCountRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionReservedInstancesCountRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/TacticsConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionReservedInstancesCountRequestBody
    : public ModelBase
{
public:
    UpdateFunctionReservedInstancesCountRequestBody();
    virtual ~UpdateFunctionReservedInstancesCountRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionReservedInstancesCountRequestBody members

    /// <summary>
    /// 预留实例个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 是否开启闲置模式配置
    /// </summary>

    bool isIdleMode() const;
    bool idleModeIsSet() const;
    void unsetidleMode();
    void setIdleMode(bool value);

    /// <summary>
    /// 
    /// </summary>

    TacticsConfig getTacticsConfig() const;
    bool tacticsConfigIsSet() const;
    void unsettacticsConfig();
    void setTacticsConfig(const TacticsConfig& value);


protected:
    int32_t count_;
    bool countIsSet_;
    bool idleMode_;
    bool idleModeIsSet_;
    TacticsConfig tacticsConfig_;
    bool tacticsConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionReservedInstancesCountRequestBody_H_

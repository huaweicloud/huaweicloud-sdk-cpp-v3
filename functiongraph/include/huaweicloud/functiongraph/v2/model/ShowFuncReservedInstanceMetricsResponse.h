
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFuncReservedInstanceMetricsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFuncReservedInstanceMetricsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/SlaReportsValue.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowFuncReservedInstanceMetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFuncReservedInstanceMetricsResponse();
    virtual ~ShowFuncReservedInstanceMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFuncReservedInstanceMetricsResponse members

    /// <summary>
    /// 弹性实例指标
    /// </summary>

    std::vector<SlaReportsValue>& getInstanceNum();
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(const std::vector<SlaReportsValue>& value);

    /// <summary>
    /// 预留实例指标
    /// </summary>

    std::vector<SlaReportsValue>& getReservedInstanceNum();
    bool reservedInstanceNumIsSet() const;
    void unsetreservedInstanceNum();
    void setReservedInstanceNum(const std::vector<SlaReportsValue>& value);


protected:
    std::vector<SlaReportsValue> instanceNum_;
    bool instanceNumIsSet_;
    std::vector<SlaReportsValue> reservedInstanceNum_;
    bool reservedInstanceNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFuncReservedInstanceMetricsResponse_H_

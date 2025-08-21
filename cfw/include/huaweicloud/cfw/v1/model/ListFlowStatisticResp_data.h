
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFlowStatisticResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFlowStatisticResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/FlowDetailsVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 流量日志统计 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListFlowStatisticResp_data
    : public ModelBase
{
public:
    ListFlowStatisticResp_data();
    virtual ~ListFlowStatisticResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlowStatisticResp_data members

    /// <summary>
    /// **参数解释**： 统计记录 **取值范围**： 不涉及
    /// </summary>

    std::vector<FlowDetailsVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<FlowDetailsVO>& value);

    /// <summary>
    /// **参数解释**： 总数 **取值范围**： 不涉及
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<FlowDetailsVO> records_;
    bool recordsIsSet_;
    int64_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFlowStatisticResp_data_H_

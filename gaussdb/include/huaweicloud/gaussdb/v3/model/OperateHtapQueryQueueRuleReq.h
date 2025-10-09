
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueRuleReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueRuleReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapQueryQueueRule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  设置查询当前查询队列阈值请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OperateHtapQueryQueueRuleReq
    : public ModelBase
{
public:
    OperateHtapQueryQueueRuleReq();
    virtual ~OperateHtapQueryQueueRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateHtapQueryQueueRuleReq members

    /// <summary>
    /// 
    /// </summary>

    HtapQueryQueueRule getQueryQueueRule() const;
    bool queryQueueRuleIsSet() const;
    void unsetqueryQueueRule();
    void setQueryQueueRule(const HtapQueryQueueRule& value);


protected:
    HtapQueryQueueRule queryQueueRule_;
    bool queryQueueRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateHtapQueryQueueRuleReq_H_

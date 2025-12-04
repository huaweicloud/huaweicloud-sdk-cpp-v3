
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchExecuteEventsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchExecuteEventsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/EventJobResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchExecuteEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchExecuteEventsResponse();
    virtual ~BatchExecuteEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchExecuteEventsResponse members

    /// <summary>
    /// **参数解释**：  事件操作响应结果  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<EventJobResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<EventJobResult>& value);


protected:
    std::vector<EventJobResult> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchExecuteEventsResponse_H_

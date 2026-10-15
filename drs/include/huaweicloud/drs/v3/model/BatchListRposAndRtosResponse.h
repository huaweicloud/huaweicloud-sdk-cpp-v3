
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListRposAndRtosResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListRposAndRtosResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryRpoAndRtoResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchListRposAndRtosResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchListRposAndRtosResponse();
    virtual ~BatchListRposAndRtosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchListRposAndRtosResponse members

    /// <summary>
    /// **参数解释**：  返回的RPO和RTO查询结果总数，与results数组的长度一致。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：  批量查询RPO和RTO的响应体集合，每个元素包含一个任务的RPO和RTO信息。详情请参见QueryRpoAndRtoResp对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<QueryRpoAndRtoResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<QueryRpoAndRtoResp>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<QueryRpoAndRtoResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListRposAndRtosResponse_H_

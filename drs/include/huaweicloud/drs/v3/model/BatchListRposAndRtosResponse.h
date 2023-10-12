
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
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 批量查询RPO&amp;RTO的响应体集合
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

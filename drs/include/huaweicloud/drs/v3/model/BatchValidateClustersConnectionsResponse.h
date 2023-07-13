
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v3/model/CheckJobResp.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchValidateClustersConnectionsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchValidateClustersConnectionsResponse();
    virtual ~BatchValidateClustersConnectionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchValidateClustersConnectionsResponse members

    /// <summary>
    /// 批量测试连接响应体集合。
    /// </summary>

    std::vector<CheckJobResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<CheckJobResp>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<CheckJobResp> results_;
    bool resultsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchValidateClustersConnectionsResponse_H_

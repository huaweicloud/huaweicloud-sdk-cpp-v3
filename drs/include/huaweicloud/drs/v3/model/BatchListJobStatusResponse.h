
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobStatusResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobStatusResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryJobStatusResp.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchListJobStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchListJobStatusResponse();
    virtual ~BatchListJobStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchListJobStatusResponse members

    /// <summary>
    /// 任务状态信息
    /// </summary>

    std::vector<QueryJobStatusResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<QueryJobStatusResp>& value);

    /// <summary>
    /// 返回任务数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<QueryJobStatusResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobStatusResponse_H_

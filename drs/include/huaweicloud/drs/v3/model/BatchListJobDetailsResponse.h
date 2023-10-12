
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobDetailsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobDetailsResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryJobResp.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchListJobDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchListJobDetailsResponse();
    virtual ~BatchListJobDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchListJobDetailsResponse members

    /// <summary>
    /// 任务数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 任务详细信息
    /// </summary>

    std::vector<QueryJobResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<QueryJobResp>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<QueryJobResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListJobDetailsResponse_H_

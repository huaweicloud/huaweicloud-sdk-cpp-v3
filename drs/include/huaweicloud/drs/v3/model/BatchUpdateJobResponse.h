
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ModifyJobResp.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchUpdateJobResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateJobResponse();
    virtual ~BatchUpdateJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchUpdateJobResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 批量修改任务返回列表
    /// </summary>

    std::vector<ModifyJobResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<ModifyJobResp>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ModifyJobResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobResponse_H_

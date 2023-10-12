
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DatabaseObjectResp.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchSetObjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchSetObjectsResponse();
    virtual ~BatchSetObjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSetObjectsResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int64_t getAllCounts() const;
    bool allCountsIsSet() const;
    void unsetallCounts();
    void setAllCounts(int64_t value);

    /// <summary>
    /// 批量对象选择响应列表
    /// </summary>

    std::vector<DatabaseObjectResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<DatabaseObjectResp>& value);


protected:
    int64_t allCounts_;
    bool allCountsIsSet_;
    std::vector<DatabaseObjectResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetObjectsResponse_H_

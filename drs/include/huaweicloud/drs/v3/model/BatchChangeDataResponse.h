
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchChangeDataResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchChangeDataResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DataTransformationResp.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchChangeDataResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchChangeDataResponse();
    virtual ~BatchChangeDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchChangeDataResponse members

    /// <summary>
    /// 批量数据加工响应列表
    /// </summary>

    std::vector<DataTransformationResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<DataTransformationResp>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DataTransformationResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchChangeDataResponse_H_

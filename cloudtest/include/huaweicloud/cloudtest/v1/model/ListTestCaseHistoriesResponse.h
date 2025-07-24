
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCaseHistoriesResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCaseHistoriesResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cloudtest/v1/model/ExternalTestCaseHistoryVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestCaseHistoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTestCaseHistoriesResponse();
    virtual ~ListTestCaseHistoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestCaseHistoriesResponse members

    /// <summary>
    /// 起始记录数 大于 实际总条数时， 值为0， 分页请求才有此值
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 实际的数据类型：单个对象，集合 或 NULL
    /// </summary>

    std::vector<ExternalTestCaseHistoryVo>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<ExternalTestCaseHistoryVo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ExternalTestCaseHistoryVo> values_;
    bool valuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCaseHistoriesResponse_H_

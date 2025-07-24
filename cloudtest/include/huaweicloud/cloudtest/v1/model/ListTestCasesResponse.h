
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExternalTestCaseVo.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestCasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTestCasesResponse();
    virtual ~ListTestCasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestCasesResponse members

    /// <summary>
    /// 用例详情列表
    /// </summary>

    std::vector<ExternalTestCaseVo>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<ExternalTestCaseVo>& value);

    /// <summary>
    /// 用例总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ExternalTestCaseVo> values_;
    bool valuesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesResponse_H_

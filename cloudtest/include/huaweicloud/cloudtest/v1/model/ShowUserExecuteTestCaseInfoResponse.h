
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExternalUserExecuteInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowUserExecuteTestCaseInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserExecuteTestCaseInfoResponse();
    virtual ~ShowUserExecuteTestCaseInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserExecuteTestCaseInfoResponse members

    /// <summary>
    /// 起始记录数大于实际总条数时，值为0。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 时段内用例的执行情况
    /// </summary>

    std::vector<ExternalUserExecuteInfo>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<ExternalUserExecuteInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ExternalUserExecuteInfo> values_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoResponse_H_

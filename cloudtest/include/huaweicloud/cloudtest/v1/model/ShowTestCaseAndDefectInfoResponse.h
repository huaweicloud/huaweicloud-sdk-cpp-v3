
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExternalUserCaseAndDefect.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseAndDefectInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTestCaseAndDefectInfoResponse();
    virtual ~ShowTestCaseAndDefectInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseAndDefectInfoResponse members

    /// <summary>
    /// 起始记录数大于实际总条数时，值为0。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 查询用户用例关联缺陷的统计信息
    /// </summary>

    std::vector<ExternalUserCaseAndDefect>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<ExternalUserCaseAndDefect>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ExternalUserCaseAndDefect> values_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoResponse_H_

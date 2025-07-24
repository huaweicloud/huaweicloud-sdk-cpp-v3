
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DetailTestTypeCasePassRateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DetailTestTypeCasePassRateVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 每个测试类型的用例通过率
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DetailTestTypeCasePassRateVo
    : public ModelBase
{
public:
    DetailTestTypeCasePassRateVo();
    virtual ~DetailTestTypeCasePassRateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetailTestTypeCasePassRateVo members

    /// <summary>
    /// 测试类型
    /// </summary>

    int32_t getTestType() const;
    bool testTypeIsSet() const;
    void unsettestType();
    void setTestType(int32_t value);

    /// <summary>
    /// 用例通过率
    /// </summary>

    std::string getCasePassRate() const;
    bool casePassRateIsSet() const;
    void unsetcasePassRate();
    void setCasePassRate(const std::string& value);


protected:
    int32_t testType_;
    bool testTypeIsSet_;
    std::string casePassRate_;
    bool casePassRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DetailTestTypeCasePassRateVo_H_


#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseExecuteVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseExecuteVo_H_


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
/// 需求关联用例执行率情况
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseExecuteVo
    : public ModelBase
{
public:
    CaseExecuteVo();
    virtual ~CaseExecuteVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseExecuteVo members

    /// <summary>
    /// 需求关联用例执行率
    /// </summary>

    std::string getExecuteRate() const;
    bool executeRateIsSet() const;
    void unsetexecuteRate();
    void setExecuteRate(const std::string& value);

    /// <summary>
    /// 需求关联已执行用例总数
    /// </summary>

    int32_t getExecutedNumber() const;
    bool executedNumberIsSet() const;
    void unsetexecutedNumber();
    void setExecutedNumber(int32_t value);

    /// <summary>
    /// 需求关联未执行用例总数
    /// </summary>

    int32_t getNotExecutedNumber() const;
    bool notExecutedNumberIsSet() const;
    void unsetnotExecutedNumber();
    void setNotExecutedNumber(int32_t value);


protected:
    std::string executeRate_;
    bool executeRateIsSet_;
    int32_t executedNumber_;
    bool executedNumberIsSet_;
    int32_t notExecutedNumber_;
    bool notExecutedNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseExecuteVo_H_

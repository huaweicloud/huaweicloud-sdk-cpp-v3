
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseCompletionRateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseCompletionRateVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/NameAndValueVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计算用例完成率
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseCompletionRateVo
    : public ModelBase
{
public:
    CaseCompletionRateVo();
    virtual ~CaseCompletionRateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseCompletionRateVo members

    /// <summary>
    /// 总用例数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 用例完成率
    /// </summary>

    std::string getCompletionRate() const;
    bool completionRateIsSet() const;
    void unsetcompletionRate();
    void setCompletionRate(const std::string& value);

    /// <summary>
    /// 用户自定义状态对应的用例数目
    /// </summary>

    std::vector<NameAndValueVo>& getStatusNumberList();
    bool statusNumberListIsSet() const;
    void unsetstatusNumberList();
    void setStatusNumberList(const std::vector<NameAndValueVo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::string completionRate_;
    bool completionRateIsSet_;
    std::vector<NameAndValueVo> statusNumberList_;
    bool statusNumberListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseCompletionRateVo_H_

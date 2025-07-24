
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CoverRateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CoverRateVo_H_


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
/// 需求覆盖率
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CoverRateVo
    : public ModelBase
{
public:
    CoverRateVo();
    virtual ~CoverRateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CoverRateVo members

    /// <summary>
    /// 统计测试中的需求
    /// </summary>

    int32_t getTesting() const;
    bool testingIsSet() const;
    void unsettesting();
    void setTesting(int32_t value);

    /// <summary>
    /// 统计已完成的需求
    /// </summary>

    int32_t getFinished() const;
    bool finishedIsSet() const;
    void unsetfinished();
    void setFinished(int32_t value);

    /// <summary>
    /// 统计未测试的需求
    /// </summary>

    int32_t getNotTested() const;
    bool notTestedIsSet() const;
    void unsetnotTested();
    void setNotTested(int32_t value);

    /// <summary>
    /// 计算需求总数
    /// </summary>

    int32_t getTotalNumber() const;
    bool totalNumberIsSet() const;
    void unsettotalNumber();
    void setTotalNumber(int32_t value);

    /// <summary>
    /// 需求覆盖率
    /// </summary>

    std::string getCoverRate() const;
    bool coverRateIsSet() const;
    void unsetcoverRate();
    void setCoverRate(const std::string& value);


protected:
    int32_t testing_;
    bool testingIsSet_;
    int32_t finished_;
    bool finishedIsSet_;
    int32_t notTested_;
    bool notTestedIsSet_;
    int32_t totalNumber_;
    bool totalNumberIsSet_;
    std::string coverRate_;
    bool coverRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CoverRateVo_H_

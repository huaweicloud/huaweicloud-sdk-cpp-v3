
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_StatisticalCharacteristic_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_StatisticalCharacteristic_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  StatisticalCharacteristic
    : public ModelBase
{
public:
    StatisticalCharacteristic();
    virtual ~StatisticalCharacteristic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticalCharacteristic members

    /// <summary>
    /// 成功率
    /// </summary>

    double getSuccessRate() const;
    bool successRateIsSet() const;
    void unsetsuccessRate();
    void setSuccessRate(double value);

    /// <summary>
    /// 失败率
    /// </summary>

    double getFailRate() const;
    bool failRateIsSet() const;
    void unsetfailRate();
    void setFailRate(double value);

    /// <summary>
    /// 成功次数
    /// </summary>

    int64_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int64_t value);

    /// <summary>
    /// 总次数
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 平均值
    /// </summary>

    double getAverageValue() const;
    bool averageValueIsSet() const;
    void unsetaverageValue();
    void setAverageValue(double value);

    /// <summary>
    /// 总数
    /// </summary>

    double getTotalValue() const;
    bool totalValueIsSet() const;
    void unsettotalValue();
    void setTotalValue(double value);


protected:
    double successRate_;
    bool successRateIsSet_;
    double failRate_;
    bool failRateIsSet_;
    int64_t successCount_;
    bool successCountIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;
    double averageValue_;
    bool averageValueIsSet_;
    double totalValue_;
    bool totalValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_StatisticalCharacteristic_H_

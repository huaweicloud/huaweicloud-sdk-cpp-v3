
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeOverviewItem_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeOverviewItem_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 最佳实践检测结果各个场景的概览。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  BestPracticeOverviewItem
    : public ModelBase
{
public:
    BestPracticeOverviewItem();
    virtual ~BestPracticeOverviewItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BestPracticeOverviewItem members

    /// <summary>
    /// 分数
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);

    /// <summary>
    /// 检测项个数
    /// </summary>

    int32_t getDetectionCount() const;
    bool detectionCountIsSet() const;
    void unsetdetectionCount();
    void setDetectionCount(int32_t value);

    /// <summary>
    /// 高风险项个数
    /// </summary>

    int32_t getHighRiskCount() const;
    bool highRiskCountIsSet() const;
    void unsethighRiskCount();
    void setHighRiskCount(int32_t value);

    /// <summary>
    /// 中风险项个数
    /// </summary>

    int32_t getMediumRiskCount() const;
    bool mediumRiskCountIsSet() const;
    void unsetmediumRiskCount();
    void setMediumRiskCount(int32_t value);

    /// <summary>
    /// 低风险项个数
    /// </summary>

    int32_t getLowRiskCount() const;
    bool lowRiskCountIsSet() const;
    void unsetlowRiskCount();
    void setLowRiskCount(int32_t value);

    /// <summary>
    /// 风险描述
    /// </summary>

    std::vector<std::string>& getRiskItemDescription();
    bool riskItemDescriptionIsSet() const;
    void unsetriskItemDescription();
    void setRiskItemDescription(const std::vector<std::string>& value);


protected:
    double score_;
    bool scoreIsSet_;
    int32_t detectionCount_;
    bool detectionCountIsSet_;
    int32_t highRiskCount_;
    bool highRiskCountIsSet_;
    int32_t mediumRiskCount_;
    bool mediumRiskCountIsSet_;
    int32_t lowRiskCount_;
    bool lowRiskCountIsSet_;
    std::vector<std::string> riskItemDescription_;
    bool riskItemDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeOverviewItem_H_

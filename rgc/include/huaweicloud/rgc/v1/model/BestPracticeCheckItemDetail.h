
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeCheckItemDetail_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeCheckItemDetail_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  BestPracticeCheckItemDetail
    : public ModelBase
{
public:
    BestPracticeCheckItemDetail();
    virtual ~BestPracticeCheckItemDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BestPracticeCheckItemDetail members

    /// <summary>
    /// 检查项编号
    /// </summary>

    int32_t getCheckItem() const;
    bool checkItemIsSet() const;
    void unsetcheckItem();
    void setCheckItem(int32_t value);

    /// <summary>
    /// 检查项描述
    /// </summary>

    std::string getCheckItemName() const;
    bool checkItemNameIsSet() const;
    void unsetcheckItemName();
    void setCheckItemName(const std::string& value);

    /// <summary>
    /// 检查项风险描述
    /// </summary>

    std::string getRiskDescription() const;
    bool riskDescriptionIsSet() const;
    void unsetriskDescription();
    void setRiskDescription(const std::string& value);

    /// <summary>
    /// 检测结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 八大领域的细分场景
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 风险等级
    /// </summary>

    std::string getRiskLevel() const;
    bool riskLevelIsSet() const;
    void unsetriskLevel();
    void setRiskLevel(const std::string& value);


protected:
    int32_t checkItem_;
    bool checkItemIsSet_;
    std::string checkItemName_;
    bool checkItemNameIsSet_;
    std::string riskDescription_;
    bool riskDescriptionIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string riskLevel_;
    bool riskLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_BestPracticeCheckItemDetail_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/AutoIdDocClassificationAlarmConfidence.h>
#include <string>
#include <vector>
#include <huaweicloud/ocr/v1/model/AutoIdDocClassificationAlarmResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  AutoIdDocClassificationResult
    : public ModelBase
{
public:
    AutoIdDocClassificationResult();
    virtual ~AutoIdDocClassificationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoIdDocClassificationResult members

    /// <summary>
    /// 证件的类型，支持的证件类型如表1所示：   **表1* 支持的证件类型 | 证件类型               | 类型描述                 | | ---------------------- | ------------------------ | | peru_id_card           | 秘鲁身份证               | | cambodian_id_card      | 柬文身份证               | | hongkong_id_card       | 香港身份证               | | macao_id_card          | 澳门身份证               | | myanmar_driver_license | 缅文驾驶证               | | myanmar_id_card        | 缅文身份证               | | passport               | 护照                     | | thailand_id_card       | 泰文身份证               | | id_card                | 中华人民共和国居民身份证 | 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 证件的位置。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 证件位置的置信度。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 
    /// </summary>

    AutoIdDocClassificationAlarmResult getAlarmResult() const;
    bool alarmResultIsSet() const;
    void unsetalarmResult();
    void setAlarmResult(const AutoIdDocClassificationAlarmResult& value);

    /// <summary>
    /// 
    /// </summary>

    AutoIdDocClassificationAlarmConfidence getAlarmConfidence() const;
    bool alarmConfidenceIsSet() const;
    void unsetalarmConfidence();
    void setAlarmConfidence(const AutoIdDocClassificationAlarmConfidence& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    float confidence_;
    bool confidenceIsSet_;
    AutoIdDocClassificationAlarmResult alarmResult_;
    bool alarmResultIsSet_;
    AutoIdDocClassificationAlarmConfidence alarmConfidence_;
    bool alarmConfidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationResult_H_

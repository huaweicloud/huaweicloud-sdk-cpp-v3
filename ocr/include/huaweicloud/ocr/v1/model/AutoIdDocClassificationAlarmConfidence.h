
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmConfidence_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_OCR_V1_EXPORT  AutoIdDocClassificationAlarmConfidence
    : public ModelBase
{
public:
    AutoIdDocClassificationAlarmConfidence();
    virtual ~AutoIdDocClassificationAlarmConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoIdDocClassificationAlarmConfidence members

    /// <summary>
    /// 证件图像模糊告警分数，分数越高，证件图像模糊的可能性越高。 
    /// </summary>

    int32_t getBlurScore() const;
    bool blurScoreIsSet() const;
    void unsetblurScore();
    void setBlurScore(int32_t value);

    /// <summary>
    /// 证件图像反光告警分数，分数越高，证件图像反光的可能性越高。 
    /// </summary>

    int32_t getGlareScore() const;
    bool glareScoreIsSet() const;
    void unsetglareScore();
    void setGlareScore(int32_t value);

    /// <summary>
    /// 证件图像框内遮挡告警分数，分数越高，证件图像框内遮挡的可能性越高。 
    /// </summary>

    int32_t getBlockingWithinBorderScore() const;
    bool blockingWithinBorderScoreIsSet() const;
    void unsetblockingWithinBorderScore();
    void setBlockingWithinBorderScore(int32_t value);

    /// <summary>
    /// 证件图像过暗告警分数，分数越高，证件图像过暗的可能性越高。 
    /// </summary>

    int32_t getInsufficientLightingScore() const;
    bool insufficientLightingScoreIsSet() const;
    void unsetinsufficientLightingScore();
    void setInsufficientLightingScore(int32_t value);

    /// <summary>
    /// 证件图像复印件告警分数，分数越高，证件图像是复印件的可能性越高。 
    /// </summary>

    int32_t getCopyScore() const;
    bool copyScoreIsSet() const;
    void unsetcopyScore();
    void setCopyScore(int32_t value);

    /// <summary>
    /// 证件图像边框完整性告警分数，分数越高，证件图像边框不完整的可能性越高。 
    /// </summary>

    int32_t getBorderIntegrityScore() const;
    bool borderIntegrityScoreIsSet() const;
    void unsetborderIntegrityScore();
    void setBorderIntegrityScore(int32_t value);

    /// <summary>
    /// 证件图像翻拍告警分数，分数越高，证件图像经过翻拍的可能性越高。 
    /// </summary>

    int32_t getReproduceScore() const;
    bool reproduceScoreIsSet() const;
    void unsetreproduceScore();
    void setReproduceScore(int32_t value);


protected:
    int32_t blurScore_;
    bool blurScoreIsSet_;
    int32_t glareScore_;
    bool glareScoreIsSet_;
    int32_t blockingWithinBorderScore_;
    bool blockingWithinBorderScoreIsSet_;
    int32_t insufficientLightingScore_;
    bool insufficientLightingScoreIsSet_;
    int32_t copyScore_;
    bool copyScoreIsSet_;
    int32_t borderIntegrityScore_;
    bool borderIntegrityScoreIsSet_;
    int32_t reproduceScore_;
    bool reproduceScoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmConfidence_H_

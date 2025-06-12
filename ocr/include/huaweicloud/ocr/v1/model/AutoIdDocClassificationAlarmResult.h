
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmResult_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  AutoIdDocClassificationAlarmResult
    : public ModelBase
{
public:
    AutoIdDocClassificationAlarmResult();
    virtual ~AutoIdDocClassificationAlarmResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoIdDocClassificationAlarmResult members

    /// <summary>
    /// 证件图像模糊告警结果。 - true：表示证件图片较模糊。 - false：表示证件清晰。  
    /// </summary>

    bool isDetectBlurResult() const;
    bool detectBlurResultIsSet() const;
    void unsetdetectBlurResult();
    void setDetectBlurResult(bool value);

    /// <summary>
    /// 证件图像反光告警结果。 - true：表示证件图片存在反光。 - false：表示证件图片不存在反光。 
    /// </summary>

    bool isDetectGlareResult() const;
    bool detectGlareResultIsSet() const;
    void unsetdetectGlareResult();
    void setDetectGlareResult(bool value);

    /// <summary>
    /// 证件图像框内遮挡告警结果。 - true：表示证件图片存在框内遮挡。 - false：表示证件图片不存在框内遮挡。 
    /// </summary>

    bool isDetectBlockingWithinBorderResult() const;
    bool detectBlockingWithinBorderResultIsSet() const;
    void unsetdetectBlockingWithinBorderResult();
    void setDetectBlockingWithinBorderResult(bool value);

    /// <summary>
    /// 证件图像过暗告警结果。 - true：表示证件图片过暗。 - false：表示证件图片光线正常。 
    /// </summary>

    bool isDetectInsufficientLightingResult() const;
    bool detectInsufficientLightingResultIsSet() const;
    void unsetdetectInsufficientLightingResult();
    void setDetectInsufficientLightingResult(bool value);

    /// <summary>
    /// 证件图像是否黑白复印件告警结果。 - true：表示证件是复印件。 - false：表示证件是原件。  
    /// </summary>

    bool isDetectCopyResult() const;
    bool detectCopyResultIsSet() const;
    void unsetdetectCopyResult();
    void setDetectCopyResult(bool value);

    /// <summary>
    /// 证件图像边框完整性告警结果。 - true：表示边框不完整。 - false：表示边框完整。  
    /// </summary>

    bool isDetectBorderIntegrityResult() const;
    bool detectBorderIntegrityResultIsSet() const;
    void unsetdetectBorderIntegrityResult();
    void setDetectBorderIntegrityResult(bool value);

    /// <summary>
    /// 证件图像是否翻拍告警结果。 - true：表示证件图片经过翻拍。 - false：表示证件图片未经过翻拍。  
    /// </summary>

    bool isDetectReproduceResult() const;
    bool detectReproduceResultIsSet() const;
    void unsetdetectReproduceResult();
    void setDetectReproduceResult(bool value);


protected:
    bool detectBlurResult_;
    bool detectBlurResultIsSet_;
    bool detectGlareResult_;
    bool detectGlareResultIsSet_;
    bool detectBlockingWithinBorderResult_;
    bool detectBlockingWithinBorderResultIsSet_;
    bool detectInsufficientLightingResult_;
    bool detectInsufficientLightingResultIsSet_;
    bool detectCopyResult_;
    bool detectCopyResultIsSet_;
    bool detectBorderIntegrityResult_;
    bool detectBorderIntegrityResultIsSet_;
    bool detectReproduceResult_;
    bool detectReproduceResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoIdDocClassificationAlarmResult_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardScoreInfoResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardScoreInfoResult_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  IdcardScoreInfoResult
    : public ModelBase
{
public:
    IdcardScoreInfoResult();
    virtual ~IdcardScoreInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdcardScoreInfoResult members

    /// <summary>
    /// 身份证PS告警分数，分数越高，PS的可能性越高。 仅在传入参数detect_tampering为true时，返回该字段。 
    /// </summary>

    int32_t getTamperingScore() const;
    bool tamperingScoreIsSet() const;
    void unsettamperingScore();
    void setTamperingScore(int32_t value);

    /// <summary>
    /// 临时身份证告警分数，分数越高，临时身份证的可能性越高。 仅在传入参数detect_interim为true时，返回该字段。 
    /// </summary>

    int32_t getInterimScore() const;
    bool interimScoreIsSet() const;
    void unsetinterimScore();
    void setInterimScore(int32_t value);

    /// <summary>
    /// 身份证翻拍告警分数，分数越高，身份证图像经过翻拍的可能性越高。 仅在传入参数detect_reproduce为true时，返回该字段。 
    /// </summary>

    int32_t getReproduceScore() const;
    bool reproduceScoreIsSet() const;
    void unsetreproduceScore();
    void setReproduceScore(int32_t value);

    /// <summary>
    /// 身份证复印告警分数, 分数越高，身份证图像是复印件的可能性越高。 仅在传入参数detect_copy为true时，返回该字段。 
    /// </summary>

    int32_t getCopyScore() const;
    bool copyScoreIsSet() const;
    void unsetcopyScore();
    void setCopyScore(int32_t value);

    /// <summary>
    /// 身份证边缘完整性告警的分数，分数越高，身份证图像边缘不完整的可能性越高。 仅在传入参数detect_border_integrity为true时，返回该字段。 
    /// </summary>

    int32_t getBorderIntegrityScore() const;
    bool borderIntegrityScoreIsSet() const;
    void unsetborderIntegrityScore();
    void setBorderIntegrityScore(int32_t value);

    /// <summary>
    /// 身份证模糊告警分数，分数越高，身份证图像模糊的可能性越高。 仅在传入参数detect_blur为true时，返回该字段。 
    /// </summary>

    int32_t getBlurScore() const;
    bool blurScoreIsSet() const;
    void unsetblurScore();
    void setBlurScore(int32_t value);

    /// <summary>
    /// 身份证反光告警分数，分数越高，身份证图像存在反光的可能性越高。 仅在传入参数detect_glare为true时，返回该字段。 
    /// </summary>

    int32_t getGlareScore() const;
    bool glareScoreIsSet() const;
    void unsetglareScore();
    void setGlareScore(int32_t value);

    /// <summary>
    /// 身份证图像框内是否有遮挡的告警分数，分数越高，身份证图像框内存在异物遮挡的可能性越高。 仅在传入参数detect_blocking_within_border为true时，返回该字段。 
    /// </summary>

    int32_t getBlockingWithinBorderScore() const;
    bool blockingWithinBorderScoreIsSet() const;
    void unsetblockingWithinBorderScore();
    void setBlockingWithinBorderScore(int32_t value);


protected:
    int32_t tamperingScore_;
    bool tamperingScoreIsSet_;
    int32_t interimScore_;
    bool interimScoreIsSet_;
    int32_t reproduceScore_;
    bool reproduceScoreIsSet_;
    int32_t copyScore_;
    bool copyScoreIsSet_;
    int32_t borderIntegrityScore_;
    bool borderIntegrityScoreIsSet_;
    int32_t blurScore_;
    bool blurScoreIsSet_;
    int32_t glareScore_;
    bool glareScoreIsSet_;
    int32_t blockingWithinBorderScore_;
    bool blockingWithinBorderScoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardScoreInfoResult_H_

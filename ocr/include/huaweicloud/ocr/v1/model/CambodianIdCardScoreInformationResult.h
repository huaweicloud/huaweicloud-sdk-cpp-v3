
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardScoreInformationResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardScoreInformationResult_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  CambodianIdCardScoreInformationResult
    : public ModelBase
{
public:
    CambodianIdCardScoreInformationResult();
    virtual ~CambodianIdCardScoreInformationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CambodianIdCardScoreInformationResult members

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示复印件，小于等于50表示原件，值越靠近99，表示复印件的可能性越大，值越靠近0，表示原件的可能性越大。  仅在传入参数return_idcard_type为true时，返回该字段。 
    /// </summary>

    int32_t getIdcardTypeScore() const;
    bool idcardTypeScoreIsSet() const;
    void unsetidcardTypeScore();
    void setIdcardTypeScore(int32_t value);

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示边框不完整，小于50表示边框完整，值越靠近99，表示边框不完整的可能性越大，值越靠近0，表示边框完整的可能性越大。 仅在传入参数detect_border_integrity为true时，返回该字段。 
    /// </summary>

    int32_t getBorderIntegrityScore() const;
    bool borderIntegrityScoreIsSet() const;
    void unsetborderIntegrityScore();
    void setBorderIntegrityScore(int32_t value);

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示框内有遮挡，小于50表示框内无遮挡，值越靠近99，表示框内有遮挡的可能性越大，值越靠近0，表示框内无遮挡的可能性越大。 仅在传入参数detect_blocking_within_border为true时，返回该字段。 
    /// </summary>

    int32_t getBlockingWithinBorderScore() const;
    bool blockingWithinBorderScoreIsSet() const;
    void unsetblockingWithinBorderScore();
    void setBlockingWithinBorderScore(int32_t value);

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示身份证模糊，小于50表示身份证清晰，值越靠近99，表示身份证模糊的可能性越大，值越靠近0，表示身份证清晰的可能性越大。 仅在传入参数detect_blur为true时，返回该字段。 
    /// </summary>

    int32_t getBlurScore() const;
    bool blurScoreIsSet() const;
    void unsetblurScore();
    void setBlurScore(int32_t value);

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示身份证反光，小于50表示身份证不反光，值越靠近99，表示身份证反光的可能性越大，值越靠近0，表示身份证不反光的可能性越大。 仅在传入参数detect_glare为true时，返回该字段。 
    /// </summary>

    int32_t getGlareScore() const;
    bool glareScoreIsSet() const;
    void unsetglareScore();
    void setGlareScore(int32_t value);

    /// <summary>
    /// 告警分数，字段取值范围[0, 99]值大于50表示身份证人像被其他非身份证人像篡改过，小于50表示身份证人像未被篡改，值越靠近99，表示身份证人像被篡改的可能性越大，值越靠近0，表示身份证未人像被篡改的可能性越大。 仅在传入参数detect_tampering为true时，返回该字段。 
    /// </summary>

    int32_t getTamperingScore() const;
    bool tamperingScoreIsSet() const;
    void unsettamperingScore();
    void setTamperingScore(int32_t value);


protected:
    int32_t idcardTypeScore_;
    bool idcardTypeScoreIsSet_;
    int32_t borderIntegrityScore_;
    bool borderIntegrityScoreIsSet_;
    int32_t blockingWithinBorderScore_;
    bool blockingWithinBorderScoreIsSet_;
    int32_t blurScore_;
    bool blurScoreIsSet_;
    int32_t glareScore_;
    bool glareScoreIsSet_;
    int32_t tamperingScore_;
    bool tamperingScoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardScoreInformationResult_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ocr/v1/model/IdcardVerificationResult.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  IdCardResult
    : public ModelBase
{
public:
    IdCardResult();
    virtual ~IdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IdCardResult members

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 民族。 
    /// </summary>

    std::string getEthnicity() const;
    bool ethnicityIsSet() const;
    void unsetethnicity();
    void setEthnicity(const std::string& value);

    /// <summary>
    /// 地址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 发证机关。 
    /// </summary>

    std::string getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const std::string& value);

    /// <summary>
    /// 有效起始日期。 
    /// </summary>

    std::string getValidFrom() const;
    bool validFromIsSet() const;
    void unsetvalidFrom();
    void setValidFrom(const std::string& value);

    /// <summary>
    /// 有效结束日期。   &gt; 说明：  - 身份证识别支持中华人民共和国居民身份证识别。 
    /// </summary>

    std::string getValidTo() const;
    bool validToIsSet() const;
    void unsetvalidTo();
    void setValidTo(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IdcardVerificationResult getVerificationResult() const;
    bool verificationResultIsSet() const;
    void unsetverificationResult();
    void setVerificationResult(const IdcardVerificationResult& value);

    /// <summary>
    /// 文本框在原图位置。输出左上、右上、右下、左下四个点坐标。当“return_text_location”设置为“true”时才返回。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);

    /// <summary>
    /// 判断身份证图像是否经过翻拍，“true”表示是翻拍，“false”表示未经过翻拍。仅在输入参数detect_reproduce为true时，返回该字段。 
    /// </summary>

    bool isDetectReproduceResult() const;
    bool detectReproduceResultIsSet() const;
    void unsetdetectReproduceResult();
    void setDetectReproduceResult(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string ethnicity_;
    bool ethnicityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string issue_;
    bool issueIsSet_;
    std::string validFrom_;
    bool validFromIsSet_;
    std::string validTo_;
    bool validToIsSet_;
    IdcardVerificationResult verificationResult_;
    bool verificationResultIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;
    bool detectReproduceResult_;
    bool detectReproduceResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_

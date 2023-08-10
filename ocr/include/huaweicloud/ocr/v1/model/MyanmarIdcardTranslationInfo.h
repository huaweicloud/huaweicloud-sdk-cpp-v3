
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardTranslationInfo_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardTranslationInfo_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarIdcardTranslationInfo
    : public ModelBase
{
public:
    MyanmarIdcardTranslationInfo();
    virtual ~MyanmarIdcardTranslationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MyanmarIdcardTranslationInfo members

    /// <summary>
    /// 名字转译。仅当输入参数return_translation为true时，返回该字段。 
    /// </summary>

    std::string getNameTranslation() const;
    bool nameTranslationIsSet() const;
    void unsetnameTranslation();
    void setNameTranslation(const std::string& value);

    /// <summary>
    /// 父亲名字的转译。仅当输入参数return_translation为true时，返回该字段。 
    /// </summary>

    std::string getFatherNameTranslation() const;
    bool fatherNameTranslationIsSet() const;
    void unsetfatherNameTranslation();
    void setFatherNameTranslation(const std::string& value);

    /// <summary>
    /// 身份证号码转译。仅当输入参数return_translation为true时，返回该字段。 
    /// </summary>

    std::string getNrcIdTranslation() const;
    bool nrcIdTranslationIsSet() const;
    void unsetnrcIdTranslation();
    void setNrcIdTranslation(const std::string& value);

    /// <summary>
    /// 出生日期转译。仅当输入参数return_translation为true时，返回该字段。 
    /// </summary>

    std::string getBirthTranslation() const;
    bool birthTranslationIsSet() const;
    void unsetbirthTranslation();
    void setBirthTranslation(const std::string& value);


protected:
    std::string nameTranslation_;
    bool nameTranslationIsSet_;
    std::string fatherNameTranslation_;
    bool fatherNameTranslationIsSet_;
    std::string nrcIdTranslation_;
    bool nrcIdTranslationIsSet_;
    std::string birthTranslation_;
    bool birthTranslationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardTranslationInfo_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HkIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HkIdCardResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  HkIdCardResult
    : public ModelBase
{
public:
    HkIdCardResult();
    virtual ~HkIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HkIdCardResult members

    /// <summary>
    /// 中文姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 英文姓名。 
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 性别。  男： value值为：M 女： value值为：F 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 证件符号。 
    /// </summary>

    std::string getSymbols() const;
    bool symbolsIsSet() const;
    void unsetsymbols();
    void setSymbols(const std::string& value);

    /// <summary>
    /// 中文姓名对应电码。 
    /// </summary>

    std::string getNameTelegraphCode() const;
    bool nameTelegraphCodeIsSet() const;
    void unsetnameTelegraphCode();
    void setNameTelegraphCode(const std::string& value);

    /// <summary>
    /// 是否永久性居民身份证。  永久：value值为true 非永久：value值为false 
    /// </summary>

    bool isPermanent() const;
    bool permanentIsSet() const;
    void unsetpermanent();
    void setPermanent(bool value);

    /// <summary>
    /// 首次领用日期。 
    /// </summary>

    std::string getInitialIssueDate() const;
    bool initialIssueDateIsSet() const;
    void unsetinitialIssueDate();
    void setInitialIssueDate(const std::string& value);

    /// <summary>
    /// 签发日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 头像的base64编码，默认返回尺寸较大的头像。 当输入参数“return_portrait_image”为true时，才返回该参数。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 各个字段的置信度。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string symbols_;
    bool symbolsIsSet_;
    std::string nameTelegraphCode_;
    bool nameTelegraphCodeIsSet_;
    bool permanent_;
    bool permanentIsSet_;
    std::string initialIssueDate_;
    bool initialIssueDateIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HkIdCardResult_H_

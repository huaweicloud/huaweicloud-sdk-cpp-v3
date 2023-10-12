
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VietnamIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VietnamIdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  VietnamIdCardResult
    : public ModelBase
{
public:
    VietnamIdCardResult();
    virtual ~VietnamIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VietnamIdCardResult members

    /// <summary>
    /// 返回证件正反面。字段值为“front”或“back” 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 卡证编号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 国籍。 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 籍贯。 
    /// </summary>

    std::string getOriginPlace() const;
    bool originPlaceIsSet() const;
    void unsetoriginPlace();
    void setOriginPlace(const std::string& value);

    /// <summary>
    /// 居住地。 
    /// </summary>

    std::string getResidencePlace() const;
    bool residencePlaceIsSet() const;
    void unsetresidencePlace();
    void setResidencePlace(const std::string& value);

    /// <summary>
    /// 有效日期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 个人识别。当参数“side”为back时，返回此字段。 
    /// </summary>

    std::string getPersonalIdentification() const;
    bool personalIdentificationIsSet() const;
    void unsetpersonalIdentification();
    void setPersonalIdentification(const std::string& value);

    /// <summary>
    /// 签发日期。当参数“side”为back时，返回此字段。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 身份证背面第一行机器码。当参数“side”为back时，返回此字段。 
    /// </summary>

    std::string getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(const std::string& value);

    /// <summary>
    /// 身份证背面第二行机器码。当参数“side”为back时，返回此字段。 
    /// </summary>

    std::string getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(const std::string& value);

    /// <summary>
    /// 身份证背面第三行机器码。当参数“side”为back时，返回此字段。 
    /// </summary>

    std::string getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。注：置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 当参数return_portrait_image为true时，返回头像的base64编码。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 当参数return_portrait_location为true时，返回头像在原图上的位置，以列表形式表示，包含头像区域四个顶点的二维坐标（x,y）；坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 输入参数return_idcard_type为true时，返回身份证的类型：normal是身份证原件，copy是复印的身份证，screen是屏幕翻拍。 
    /// </summary>

    std::string getIdcardType() const;
    bool idcardTypeIsSet() const;
    void unsetidcardType();
    void setIdcardType(const std::string& value);

    /// <summary>
    /// 对应所有在原图上识别到的字段位置信息，包含所有文字区域四个顶点的二维坐标（x,y）。采用图像坐标系，坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


protected:
    std::string side_;
    bool sideIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string originPlace_;
    bool originPlaceIsSet_;
    std::string residencePlace_;
    bool residencePlaceIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string personalIdentification_;
    bool personalIdentificationIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string machineCode1_;
    bool machineCode1IsSet_;
    std::string machineCode2_;
    bool machineCode2IsSet_;
    std::string machineCode3_;
    bool machineCode3IsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string idcardType_;
    bool idcardTypeIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VietnamIdCardResult_H_

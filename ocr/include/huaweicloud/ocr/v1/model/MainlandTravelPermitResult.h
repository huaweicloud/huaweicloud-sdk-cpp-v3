
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/MainlandTravelPermitConfidence.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  MainlandTravelPermitResult
    : public ModelBase
{
public:
    MainlandTravelPermitResult();
    virtual ~MainlandTravelPermitResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MainlandTravelPermitResult members

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
    /// 有效期限。 
    /// </summary>

    std::string getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(const std::string& value);

    /// <summary>
    /// 签发机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 证件号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 签发地点。 
    /// </summary>

    std::string getIssuePlace() const;
    bool issuePlaceIsSet() const;
    void unsetissuePlace();
    void setIssuePlace(const std::string& value);

    /// <summary>
    /// 签发次数。 
    /// </summary>

    std::string getIssueTimes() const;
    bool issueTimesIsSet() const;
    void unsetissueTimes();
    void setIssueTimes(const std::string& value);

    /// <summary>
    /// 回乡证背面的香港/澳门/台湾身份证姓名。 
    /// </summary>

    std::string getIdName() const;
    bool idNameIsSet() const;
    void unsetidName();
    void setIdName(const std::string& value);

    /// <summary>
    /// 回乡证背面的香港/澳门/台湾身份证号码。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 机读码第一行。 
    /// </summary>

    std::string getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(const std::string& value);

    /// <summary>
    /// 机读码第二行。 
    /// </summary>

    std::string getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(const std::string& value);

    /// <summary>
    /// 机读码第三行。 
    /// </summary>

    std::string getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(const std::string& value);

    /// <summary>
    /// 证件类别。可选值包括： - “港澳居民来往内地通行证” - “台湾居民来往大陆通行证” 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 证件图片正反面信息。可选值包括： - \&quot;front\&quot;：证件图片为正面 - \&quot;back\&quot;：证件图片为反面 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 头像的base64编码。当输入参数“return_portrait_image”为“true”时，才返回该参数。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 
    /// </summary>

    MainlandTravelPermitConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const MainlandTravelPermitConfidence& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string validPeriod_;
    bool validPeriodIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string issuePlace_;
    bool issuePlaceIsSet_;
    std::string issueTimes_;
    bool issueTimesIsSet_;
    std::string idName_;
    bool idNameIsSet_;
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string machineCode1_;
    bool machineCode1IsSet_;
    std::string machineCode2_;
    bool machineCode2IsSet_;
    std::string machineCode3_;
    bool machineCode3IsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string side_;
    bool sideIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    MainlandTravelPermitConfidence confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitResult_H_

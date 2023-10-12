
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/ExitEntryPermitConfidence.h>
#include <string>
#include <vector>
#include <huaweicloud/ocr/v1/model/ExitEntryPermitEndorsementInfo.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  ExitEntryPermitResult
    : public ModelBase
{
public:
    ExitEntryPermitResult();
    virtual ~ExitEntryPermitResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExitEntryPermitResult members

    /// <summary>
    /// 姓名。 
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
    /// 性别。 
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
    /// 证件号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 签发机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 签发地点。 
    /// </summary>

    std::string getIssuePlace() const;
    bool issuePlaceIsSet() const;
    void unsetissuePlace();
    void setIssuePlace(const std::string& value);

    /// <summary>
    /// 有效期限。 
    /// </summary>

    std::string getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(const std::string& value);

    /// <summary>
    /// 机器码。 
    /// </summary>

    std::string getMachineCode() const;
    bool machineCodeIsSet() const;
    void unsetmachineCode();
    void setMachineCode(const std::string& value);

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
    /// 证件类型。可选值包括： - \&quot;往来港澳通行证 \&quot; - \&quot;往来台湾通行证\&quot; 
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
    /// 
    /// </summary>

    ExitEntryPermitEndorsementInfo getEndorsementInfoHk() const;
    bool endorsementInfoHkIsSet() const;
    void unsetendorsementInfoHk();
    void setEndorsementInfoHk(const ExitEntryPermitEndorsementInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ExitEntryPermitEndorsementInfo getEndorsementInfoMo() const;
    bool endorsementInfoMoIsSet() const;
    void unsetendorsementInfoMo();
    void setEndorsementInfoMo(const ExitEntryPermitEndorsementInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ExitEntryPermitEndorsementInfo getEndorsementInfoTw() const;
    bool endorsementInfoTwIsSet() const;
    void unsetendorsementInfoTw();
    void setEndorsementInfoTw(const ExitEntryPermitEndorsementInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ExitEntryPermitConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const ExitEntryPermitConfidence& value);


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
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string issuePlace_;
    bool issuePlaceIsSet_;
    std::string validPeriod_;
    bool validPeriodIsSet_;
    std::string machineCode_;
    bool machineCodeIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string side_;
    bool sideIsSet_;
    ExitEntryPermitEndorsementInfo endorsementInfoHk_;
    bool endorsementInfoHkIsSet_;
    ExitEntryPermitEndorsementInfo endorsementInfoMo_;
    bool endorsementInfoMoIsSet_;
    ExitEntryPermitEndorsementInfo endorsementInfoTw_;
    bool endorsementInfoTwIsSet_;
    ExitEntryPermitConfidence confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitResult_H_

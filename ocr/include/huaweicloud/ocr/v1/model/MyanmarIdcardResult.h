
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/MyanmarIdcardTranslationInfo.h>
#include <vector>
#include <huaweicloud/ocr/v1/model/MyanmarIdcardConfidence.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarIdcardResult
    : public ModelBase
{
public:
    MyanmarIdcardResult();
    virtual ~MyanmarIdcardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MyanmarIdcardResult members

    /// <summary>
    /// 标示正面还是反面，取值为front或back。 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 身份证类型。取值如下所示： - new_version：新版身份证 - old_version：旧版 
    /// </summary>

    std::string getClass() const;
    bool classIsSet() const;
    void unsetclass();
    void setClass(const std::string& value);

    /// <summary>
    /// 身份证号码。 
    /// </summary>

    std::string getNrcId() const;
    bool nrcIdIsSet() const;
    void unsetnrcId();
    void setNrcId(const std::string& value);

    /// <summary>
    /// 签发日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父亲名字。 
    /// </summary>

    std::string getFatherName() const;
    bool fatherNameIsSet() const;
    void unsetfatherName();
    void setFatherName(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 族群或宗教。 
    /// </summary>

    std::string getBloodlinesReligion() const;
    bool bloodlinesReligionIsSet() const;
    void unsetbloodlinesReligion();
    void setBloodlinesReligion(const std::string& value);

    /// <summary>
    /// 身高。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 血型。 
    /// </summary>

    std::string getBloodGroup() const;
    bool bloodGroupIsSet() const;
    void unsetbloodGroup();
    void setBloodGroup(const std::string& value);

    /// <summary>
    /// 身份证的卡号（背面）。 
    /// </summary>

    std::string getCardId() const;
    bool cardIdIsSet() const;
    void unsetcardId();
    void setCardId(const std::string& value);

    /// <summary>
    /// 背面的身份证号码。 
    /// </summary>

    std::string getNrcIdBack() const;
    bool nrcIdBackIsSet() const;
    void unsetnrcIdBack();
    void setNrcIdBack(const std::string& value);

    /// <summary>
    /// 职业。 
    /// </summary>

    std::string getProfession() const;
    bool professionIsSet() const;
    void unsetprofession();
    void setProfession(const std::string& value);

    /// <summary>
    /// 地址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MyanmarIdcardConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const MyanmarIdcardConfidence& value);

    /// <summary>
    /// 头像的base64编码。 当输入参数“return_portrait_image”为“true”时，才返回该参数。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 身份证的类型。取值如下所示： - normal：身份证原件 - copy：复印的身份证 当输入参数“return_idcard_type”为“true”时，才返回该参数。 
    /// </summary>

    std::string getIdcardType() const;
    bool idcardTypeIsSet() const;
    void unsetidcardType();
    void setIdcardType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MyanmarIdcardTranslationInfo getTranslationInfo() const;
    bool translationInfoIsSet() const;
    void unsettranslationInfo();
    void setTranslationInfo(const MyanmarIdcardTranslationInfo& value);


protected:
    std::string side_;
    bool sideIsSet_;
    std::string class_;
    bool classIsSet_;
    std::string nrcId_;
    bool nrcIdIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fatherName_;
    bool fatherNameIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string bloodlinesReligion_;
    bool bloodlinesReligionIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string bloodGroup_;
    bool bloodGroupIsSet_;
    std::string cardId_;
    bool cardIdIsSet_;
    std::string nrcIdBack_;
    bool nrcIdBackIsSet_;
    std::string profession_;
    bool professionIsSet_;
    std::string address_;
    bool addressIsSet_;
    MyanmarIdcardConfidence confidence_;
    bool confidenceIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string idcardType_;
    bool idcardTypeIsSet_;
    MyanmarIdcardTranslationInfo translationInfo_;
    bool translationInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardResult_H_

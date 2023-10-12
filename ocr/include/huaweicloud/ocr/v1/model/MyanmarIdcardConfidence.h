
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardConfidence_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarIdcardConfidence
    : public ModelBase
{
public:
    MyanmarIdcardConfidence();
    virtual ~MyanmarIdcardConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MyanmarIdcardConfidence members

    /// <summary>
    /// 身份证号码置信度。 
    /// </summary>

    float getNrcId() const;
    bool nrcIdIsSet() const;
    void unsetnrcId();
    void setNrcId(float value);

    /// <summary>
    /// 签发日期置信度。 
    /// </summary>

    float getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(float value);

    /// <summary>
    /// 姓名置信度。 
    /// </summary>

    float getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(float value);

    /// <summary>
    /// 出生日期置信度。 
    /// </summary>

    float getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(float value);

    /// <summary>
    /// 族群或宗教置信度。 
    /// </summary>

    float getBloodlinesReligion() const;
    bool bloodlinesReligionIsSet() const;
    void unsetbloodlinesReligion();
    void setBloodlinesReligion(float value);

    /// <summary>
    /// 身高置信度。 
    /// </summary>

    float getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(float value);

    /// <summary>
    /// 血型置信度。 
    /// </summary>

    float getBloodGroup() const;
    bool bloodGroupIsSet() const;
    void unsetbloodGroup();
    void setBloodGroup(float value);

    /// <summary>
    /// 身份证的卡号（背面）置信度。 
    /// </summary>

    float getCardId() const;
    bool cardIdIsSet() const;
    void unsetcardId();
    void setCardId(float value);

    /// <summary>
    /// 背面的身份证号码。 
    /// </summary>

    float getNrcIdBack() const;
    bool nrcIdBackIsSet() const;
    void unsetnrcIdBack();
    void setNrcIdBack(float value);

    /// <summary>
    /// 职业置信度。 
    /// </summary>

    float getProfession() const;
    bool professionIsSet() const;
    void unsetprofession();
    void setProfession(float value);

    /// <summary>
    /// 地址置信度。 
    /// </summary>

    float getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(float value);


protected:
    float nrcId_;
    bool nrcIdIsSet_;
    float issueDate_;
    bool issueDateIsSet_;
    float name_;
    bool nameIsSet_;
    float birth_;
    bool birthIsSet_;
    float bloodlinesReligion_;
    bool bloodlinesReligionIsSet_;
    float height_;
    bool heightIsSet_;
    float bloodGroup_;
    bool bloodGroupIsSet_;
    float cardId_;
    bool cardIdIsSet_;
    float nrcIdBack_;
    bool nrcIdBackIsSet_;
    float profession_;
    bool professionIsSet_;
    float address_;
    bool addressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardConfidence_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ColombiaIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ColombiaIdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
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
class HUAWEICLOUD_OCR_V1_EXPORT  ColombiaIdCardResult
    : public ModelBase
{
public:
    ColombiaIdCardResult();
    virtual ~ColombiaIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColombiaIdCardResult members

    /// <summary>
    /// 证件图片正反面信息。可选值包括： - front: 证件图片正面 - back:  证件图片反面
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 卡证编号。当响应字段\&quot;side\&quot;为front时，返回此字段。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 名。当响应字段\&quot;side\&quot;为front时，返回此字段。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 姓。当响应字段\&quot;side\&quot;为front时，返回此字段。
    /// </summary>

    std::string getLastName() const;
    bool lastNameIsSet() const;
    void unsetlastName();
    void setLastName(const std::string& value);

    /// <summary>
    /// 出生日期。
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 出生地。
    /// </summary>

    std::string getBirthPlace() const;
    bool birthPlaceIsSet() const;
    void unsetbirthPlace();
    void setBirthPlace(const std::string& value);

    /// <summary>
    /// 性别。
    /// </summary>

    std::string getGender() const;
    bool genderIsSet() const;
    void unsetgender();
    void setGender(const std::string& value);

    /// <summary>
    /// 血型。
    /// </summary>

    std::string getBloodType() const;
    bool bloodTypeIsSet() const;
    void unsetbloodType();
    void setBloodType(const std::string& value);

    /// <summary>
    /// 签发日期。
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 签发地区。
    /// </summary>

    std::string getIssueAuthority() const;
    bool issueAuthorityIsSet() const;
    void unsetissueAuthority();
    void setIssueAuthority(const std::string& value);

    /// <summary>
    /// 身高。
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 公民编码一。
    /// </summary>

    std::string getCitizenCode1() const;
    bool citizenCode1IsSet() const;
    void unsetcitizenCode1();
    void setCitizenCode1(const std::string& value);

    /// <summary>
    /// 公民编码二。
    /// </summary>

    std::string getCitizenCode2() const;
    bool citizenCode2IsSet() const;
    void unsetcitizenCode2();
    void setCitizenCode2(const std::string& value);

    /// <summary>
    /// 公民编码三。
    /// </summary>

    std::string getCitizenCode3() const;
    bool citizenCode3IsSet() const;
    void unsetcitizenCode3();
    void setCitizenCode3(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。注：置信度由算法给出，不直接等价于对应字段的准确率。
    /// </summary>

    std::map<std::string, float>& getConfidence();
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(std::map<std::string, float> value);


protected:
    std::string side_;
    bool sideIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string lastName_;
    bool lastNameIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string birthPlace_;
    bool birthPlaceIsSet_;
    std::string gender_;
    bool genderIsSet_;
    std::string bloodType_;
    bool bloodTypeIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string issueAuthority_;
    bool issueAuthorityIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string citizenCode1_;
    bool citizenCode1IsSet_;
    std::string citizenCode2_;
    bool citizenCode2IsSet_;
    std::string citizenCode3_;
    bool citizenCode3IsSet_;
    std::map<std::string, float> confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ColombiaIdCardResult_H_

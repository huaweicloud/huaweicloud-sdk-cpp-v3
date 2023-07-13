
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitConfidence_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  MainlandTravelPermitConfidence
    : public ModelBase
{
public:
    MainlandTravelPermitConfidence();
    virtual ~MainlandTravelPermitConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MainlandTravelPermitConfidence members

    /// <summary>
    /// 中文姓名的置信度。 
    /// </summary>

    float getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(float value);

    /// <summary>
    /// 英文姓名的置信度。 
    /// </summary>

    float getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(float value);

    /// <summary>
    /// 出生日期的置信度。 
    /// </summary>

    float getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(float value);

    /// <summary>
    /// 性别的置信度。 
    /// </summary>

    float getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(float value);

    /// <summary>
    /// 有效期限的置信度。 
    /// </summary>

    float getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(float value);

    /// <summary>
    /// 签发机关的置信度。 
    /// </summary>

    float getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(float value);

    /// <summary>
    /// 证件号的置信度。 
    /// </summary>

    float getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(float value);

    /// <summary>
    /// 签发地点的置信度。 
    /// </summary>

    float getIssuePlace() const;
    bool issuePlaceIsSet() const;
    void unsetissuePlace();
    void setIssuePlace(float value);

    /// <summary>
    /// 签发次数的置信度。 
    /// </summary>

    float getIssueTimes() const;
    bool issueTimesIsSet() const;
    void unsetissueTimes();
    void setIssueTimes(float value);

    /// <summary>
    /// 证件类别的置信度。 
    /// </summary>

    float getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(float value);

    /// <summary>
    /// 证件图片正反面信息的置信度。 
    /// </summary>

    float getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(float value);

    /// <summary>
    /// 回乡证背面的香港/澳门/台湾身份证姓名的置信度。 
    /// </summary>

    float getIdName() const;
    bool idNameIsSet() const;
    void unsetidName();
    void setIdName(float value);

    /// <summary>
    /// 回乡证背面的香港/澳门/台湾身份证号码的置信度。 
    /// </summary>

    float getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(float value);

    /// <summary>
    /// 机读码第一行的置信度。 
    /// </summary>

    float getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(float value);

    /// <summary>
    /// 机读码第二行的置信度。 
    /// </summary>

    float getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(float value);

    /// <summary>
    /// 机读码第三行的置信度。 
    /// </summary>

    float getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(float value);


protected:
    float name_;
    bool nameIsSet_;
    float nameEn_;
    bool nameEnIsSet_;
    float birthDate_;
    bool birthDateIsSet_;
    float sex_;
    bool sexIsSet_;
    float validPeriod_;
    bool validPeriodIsSet_;
    float issuingAuthority_;
    bool issuingAuthorityIsSet_;
    float number_;
    bool numberIsSet_;
    float issuePlace_;
    bool issuePlaceIsSet_;
    float issueTimes_;
    bool issueTimesIsSet_;
    float type_;
    bool typeIsSet_;
    float side_;
    bool sideIsSet_;
    float idName_;
    bool idNameIsSet_;
    float idNumber_;
    bool idNumberIsSet_;
    float machineCode1_;
    bool machineCode1IsSet_;
    float machineCode2_;
    bool machineCode2IsSet_;
    float machineCode3_;
    bool machineCode3IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MainlandTravelPermitConfidence_H_

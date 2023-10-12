
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitConfidence_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  ExitEntryPermitConfidence
    : public ModelBase
{
public:
    ExitEntryPermitConfidence();
    virtual ~ExitEntryPermitConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExitEntryPermitConfidence members

    /// <summary>
    /// 姓名的置信度。 
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
    /// 性别的置信度 
    /// </summary>

    float getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(float value);

    /// <summary>
    /// 证件号的置信度。 
    /// </summary>

    float getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(float value);

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
    /// 签发地点的置信度。 
    /// </summary>

    float getIssuePlace() const;
    bool issuePlaceIsSet() const;
    void unsetissuePlace();
    void setIssuePlace(float value);

    /// <summary>
    /// 机器码的置信度。 
    /// </summary>

    float getMachineCode() const;
    bool machineCodeIsSet() const;
    void unsetmachineCode();
    void setMachineCode(float value);

    /// <summary>
    /// 证件类型的置信度。 
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
    /// 香港签注信息的置信度。 
    /// </summary>

    Object getEndorsementInfoHk() const;
    bool endorsementInfoHkIsSet() const;
    void unsetendorsementInfoHk();
    void setEndorsementInfoHk(const Object& value);

    /// <summary>
    /// 澳门签注信息的置信度。 
    /// </summary>

    Object getEndorsementInfoMo() const;
    bool endorsementInfoMoIsSet() const;
    void unsetendorsementInfoMo();
    void setEndorsementInfoMo(const Object& value);

    /// <summary>
    /// 台湾签注信息的置信度。 
    /// </summary>

    Object getEndorsementInfoTw() const;
    bool endorsementInfoTwIsSet() const;
    void unsetendorsementInfoTw();
    void setEndorsementInfoTw(const Object& value);


protected:
    float name_;
    bool nameIsSet_;
    float nameEn_;
    bool nameEnIsSet_;
    float birthDate_;
    bool birthDateIsSet_;
    float sex_;
    bool sexIsSet_;
    float number_;
    bool numberIsSet_;
    float validPeriod_;
    bool validPeriodIsSet_;
    float issuingAuthority_;
    bool issuingAuthorityIsSet_;
    float issuePlace_;
    bool issuePlaceIsSet_;
    float machineCode_;
    bool machineCodeIsSet_;
    float type_;
    bool typeIsSet_;
    float side_;
    bool sideIsSet_;
    Object endorsementInfoHk_;
    bool endorsementInfoHkIsSet_;
    Object endorsementInfoMo_;
    bool endorsementInfoMoIsSet_;
    Object endorsementInfoTw_;
    bool endorsementInfoTwIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitConfidence_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardConfidence_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  ChileIdCardConfidence
    : public ModelBase
{
public:
    ChileIdCardConfidence();
    virtual ~ChileIdCardConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChileIdCardConfidence members

    /// <summary>
    /// 姓氏置信度。 
    /// </summary>

    float getSurname() const;
    bool surnameIsSet() const;
    void unsetsurname();
    void setSurname(float value);

    /// <summary>
    /// 名置信度。 
    /// </summary>

    float getGivenName() const;
    bool givenNameIsSet() const;
    void unsetgivenName();
    void setGivenName(float value);

    /// <summary>
    /// 国籍置信度。 
    /// </summary>

    float getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(float value);

    /// <summary>
    /// 性别置信度。 
    /// </summary>

    float getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(float value);

    /// <summary>
    /// 出生日置信度。 
    /// </summary>

    float getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(float value);

    /// <summary>
    /// 发行日置信度。 
    /// </summary>

    float getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(float value);

    /// <summary>
    /// 有效期置信度。 
    /// </summary>

    float getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(float value);

    /// <summary>
    /// 文档编号置信度。 
    /// </summary>

    float getDocumentNumber() const;
    bool documentNumberIsSet() const;
    void unsetdocumentNumber();
    void setDocumentNumber(float value);

    /// <summary>
    /// 身份证号置信度。 
    /// </summary>

    float getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(float value);


protected:
    float surname_;
    bool surnameIsSet_;
    float givenName_;
    bool givenNameIsSet_;
    float nationality_;
    bool nationalityIsSet_;
    float sex_;
    bool sexIsSet_;
    float birth_;
    bool birthIsSet_;
    float issueDate_;
    bool issueDateIsSet_;
    float expiryDate_;
    bool expiryDateIsSet_;
    float documentNumber_;
    bool documentNumberIsSet_;
    float number_;
    bool numberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardConfidence_H_

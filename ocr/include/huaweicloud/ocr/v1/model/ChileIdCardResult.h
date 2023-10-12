
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/ChileIdCardConfidence.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  ChileIdCardResult
    : public ModelBase
{
public:
    ChileIdCardResult();
    virtual ~ChileIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChileIdCardResult members

    /// <summary>
    /// 姓氏。 
    /// </summary>

    std::vector<std::string>& getSurname();
    bool surnameIsSet() const;
    void unsetsurname();
    void setSurname(const std::vector<std::string>& value);

    /// <summary>
    /// 名。 
    /// </summary>

    std::string getGivenName() const;
    bool givenNameIsSet() const;
    void unsetgivenName();
    void setGivenName(const std::string& value);

    /// <summary>
    /// 国籍。 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 发行日。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 有效期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 文档编号。 
    /// </summary>

    std::string getDocumentNumber() const;
    bool documentNumberIsSet() const;
    void unsetdocumentNumber();
    void setDocumentNumber(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChileIdCardConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const ChileIdCardConfidence& value);


protected:
    std::vector<std::string> surname_;
    bool surnameIsSet_;
    std::string givenName_;
    bool givenNameIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string documentNumber_;
    bool documentNumberIsSet_;
    std::string number_;
    bool numberIsSet_;
    ChileIdCardConfidence confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ChileIdCardResult_H_

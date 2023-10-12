
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategory_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategory_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  QualificationCategory
    : public ModelBase
{
public:
    QualificationCategory();
    virtual ~QualificationCategory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QualificationCategory members

    /// <summary>
    /// 诚信考核信息（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 初次领证日期（非必有，依赖对应从业资格证板式） 
    /// </summary>

    std::string getInitialIssueDate() const;
    bool initialIssueDateIsSet() const;
    void unsetinitialIssueDate();
    void setInitialIssueDate(const std::string& value);

    /// <summary>
    /// 有效起始日期（非必有，依赖对应从业资格证板式） 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 有效期至 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string initialIssueDate_;
    bool initialIssueDateIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategory_H_

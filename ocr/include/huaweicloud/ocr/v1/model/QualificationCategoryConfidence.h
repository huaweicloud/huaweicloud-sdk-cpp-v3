
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategoryConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategoryConfidence_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  QualificationCategoryConfidence
    : public ModelBase
{
public:
    QualificationCategoryConfidence();
    virtual ~QualificationCategoryConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualificationCategoryConfidence members

    /// <summary>
    /// 诚信考核信息（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    float getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(float value);

    /// <summary>
    /// 初次领证日期（非必有，依赖对应从业资格证板式） 
    /// </summary>

    float getInitialIssueDate() const;
    bool initialIssueDateIsSet() const;
    void unsetinitialIssueDate();
    void setInitialIssueDate(float value);

    /// <summary>
    /// 有效起始日期（非必有，依赖对应从业资格证板式） 
    /// </summary>

    float getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(float value);

    /// <summary>
    /// 有效期至 
    /// </summary>

    float getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(float value);


protected:
    float category_;
    bool categoryIsSet_;
    float initialIssueDate_;
    bool initialIssueDateIsSet_;
    float issueDate_;
    bool issueDateIsSet_;
    float expiryDate_;
    bool expiryDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCategoryConfidence_H_

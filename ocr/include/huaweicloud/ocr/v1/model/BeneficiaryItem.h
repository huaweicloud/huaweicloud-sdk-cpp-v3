
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BeneficiaryItem_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BeneficiaryItem_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/InsurancePolicyDetail.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  BeneficiaryItem
    : public ModelBase
{
public:
    BeneficiaryItem();
    virtual ~BeneficiaryItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BeneficiaryItem members

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getBeneficiaryName() const;
    bool beneficiaryNameIsSet() const;
    void unsetbeneficiaryName();
    void setBeneficiaryName(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getBeneficiaryType() const;
    bool beneficiaryTypeIsSet() const;
    void unsetbeneficiaryType();
    void setBeneficiaryType(const InsurancePolicyDetail& value);

    /// <summary>
    /// 受益顺序。 
    /// </summary>

    Object getBeneficiaryOrder() const;
    bool beneficiaryOrderIsSet() const;
    void unsetbeneficiaryOrder();
    void setBeneficiaryOrder(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getBeneficiaryShare() const;
    bool beneficiaryShareIsSet() const;
    void unsetbeneficiaryShare();
    void setBeneficiaryShare(const InsurancePolicyDetail& value);


protected:
    InsurancePolicyDetail beneficiaryName_;
    bool beneficiaryNameIsSet_;
    InsurancePolicyDetail beneficiaryType_;
    bool beneficiaryTypeIsSet_;
    Object beneficiaryOrder_;
    bool beneficiaryOrderIsSet_;
    InsurancePolicyDetail beneficiaryShare_;
    bool beneficiaryShareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BeneficiaryItem_H_

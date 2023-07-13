
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InsuranceItem_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InsuranceItem_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/InsurancePolicyDetail.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  InsuranceItem
    : public ModelBase
{
public:
    InsuranceItem();
    virtual ~InsuranceItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InsuranceItem members

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsuranceName() const;
    bool insuranceNameIsSet() const;
    void unsetinsuranceName();
    void setInsuranceName(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurancePeriod() const;
    bool insurancePeriodIsSet() const;
    void unsetinsurancePeriod();
    void setInsurancePeriod(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsuranceAmount() const;
    bool insuranceAmountIsSet() const;
    void unsetinsuranceAmount();
    void setInsuranceAmount(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getPaymentFrequency() const;
    bool paymentFrequencyIsSet() const;
    void unsetpaymentFrequency();
    void setPaymentFrequency(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getPaymentPeriod() const;
    bool paymentPeriodIsSet() const;
    void unsetpaymentPeriod();
    void setPaymentPeriod(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getPaymentAmount() const;
    bool paymentAmountIsSet() const;
    void unsetpaymentAmount();
    void setPaymentAmount(const InsurancePolicyDetail& value);


protected:
    InsurancePolicyDetail insuranceName_;
    bool insuranceNameIsSet_;
    InsurancePolicyDetail insurancePeriod_;
    bool insurancePeriodIsSet_;
    InsurancePolicyDetail insuranceAmount_;
    bool insuranceAmountIsSet_;
    InsurancePolicyDetail paymentFrequency_;
    bool paymentFrequencyIsSet_;
    InsurancePolicyDetail paymentPeriod_;
    bool paymentPeriodIsSet_;
    InsurancePolicyDetail paymentAmount_;
    bool paymentAmountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InsuranceItem_H_

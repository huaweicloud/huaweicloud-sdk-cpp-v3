
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurantItem_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurantItem_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  InsurantItem
    : public ModelBase
{
public:
    InsurantItem();
    virtual ~InsurantItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InsurantItem members

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurantName() const;
    bool insurantNameIsSet() const;
    void unsetinsurantName();
    void setInsurantName(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurantSex() const;
    bool insurantSexIsSet() const;
    void unsetinsurantSex();
    void setInsurantSex(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurantBirthday() const;
    bool insurantBirthdayIsSet() const;
    void unsetinsurantBirthday();
    void setInsurantBirthday(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurantIdType() const;
    bool insurantIdTypeIsSet() const;
    void unsetinsurantIdType();
    void setInsurantIdType(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getInsurantIdNumber() const;
    bool insurantIdNumberIsSet() const;
    void unsetinsurantIdNumber();
    void setInsurantIdNumber(const InsurancePolicyDetail& value);


protected:
    InsurancePolicyDetail insurantName_;
    bool insurantNameIsSet_;
    InsurancePolicyDetail insurantSex_;
    bool insurantSexIsSet_;
    InsurancePolicyDetail insurantBirthday_;
    bool insurantBirthdayIsSet_;
    InsurancePolicyDetail insurantIdType_;
    bool insurantIdTypeIsSet_;
    InsurancePolicyDetail insurantIdNumber_;
    bool insurantIdNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurantItem_H_

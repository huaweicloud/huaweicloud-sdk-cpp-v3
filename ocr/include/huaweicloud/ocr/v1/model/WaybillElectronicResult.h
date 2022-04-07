
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WaybillElectronicResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WaybillElectronicResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  WaybillElectronicResult
    : public ModelBase
{
public:
    WaybillElectronicResult();
    virtual ~WaybillElectronicResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WaybillElectronicResult members

    /// <summary>
    /// 三段码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 收件人姓名。 
    /// </summary>

    std::string getReceiverName() const;
    bool receiverNameIsSet() const;
    void unsetreceiverName();
    void setReceiverName(const std::string& value);

    /// <summary>
    /// 收件人电话。 
    /// </summary>

    std::string getReceiverPhone() const;
    bool receiverPhoneIsSet() const;
    void unsetreceiverPhone();
    void setReceiverPhone(const std::string& value);

    /// <summary>
    /// 收件人地址。 
    /// </summary>

    std::string getReceiverAddress() const;
    bool receiverAddressIsSet() const;
    void unsetreceiverAddress();
    void setReceiverAddress(const std::string& value);

    /// <summary>
    /// 寄件人姓名。 
    /// </summary>

    std::string getSenderName() const;
    bool senderNameIsSet() const;
    void unsetsenderName();
    void setSenderName(const std::string& value);

    /// <summary>
    /// 寄件人电话。 
    /// </summary>

    std::string getSenderPhone() const;
    bool senderPhoneIsSet() const;
    void unsetsenderPhone();
    void setSenderPhone(const std::string& value);

    /// <summary>
    /// 寄件人地址。 
    /// </summary>

    std::string getSenderAddress() const;
    bool senderAddressIsSet() const;
    void unsetsenderAddress();
    void setSenderAddress(const std::string& value);

    /// <summary>
    /// 条形码运单号。 
    /// </summary>

    std::string getWaybillNumber() const;
    bool waybillNumberIsSet() const;
    void unsetwaybillNumber();
    void setWaybillNumber(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，取值范围0~1。 置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string receiverName_;
    bool receiverNameIsSet_;
    std::string receiverPhone_;
    bool receiverPhoneIsSet_;
    std::string receiverAddress_;
    bool receiverAddressIsSet_;
    std::string senderName_;
    bool senderNameIsSet_;
    std::string senderPhone_;
    bool senderPhoneIsSet_;
    std::string senderAddress_;
    bool senderAddressIsSet_;
    std::string waybillNumber_;
    bool waybillNumberIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WaybillElectronicResult_H_

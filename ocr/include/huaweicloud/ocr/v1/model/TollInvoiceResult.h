
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_TollInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_TollInvoiceResult_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  TollInvoiceResult
    : public ModelBase
{
public:
    TollInvoiceResult();
    virtual ~TollInvoiceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TollInvoiceResult members

    /// <summary>
    /// 发票代码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 发票号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 入口。 
    /// </summary>

    std::string getEntry() const;
    bool entryIsSet() const;
    void unsetentry();
    void setEntry(const std::string& value);

    /// <summary>
    /// 出口。 
    /// </summary>

    std::string getExit() const;
    bool exitIsSet() const;
    void unsetexit();
    void setExit(const std::string& value);

    /// <summary>
    /// 收费金额。 
    /// </summary>

    std::string getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(const std::string& value);

    /// <summary>
    /// 收费员。 
    /// </summary>

    std::string getCashier() const;
    bool cashierIsSet() const;
    void unsetcashier();
    void setCashier(const std::string& value);

    /// <summary>
    /// 车辆类型。 
    /// </summary>

    std::string getVehicleType() const;
    bool vehicleTypeIsSet() const;
    void unsetvehicleType();
    void setVehicleType(const std::string& value);

    /// <summary>
    /// 日期。 
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 时间。 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string entry_;
    bool entryIsSet_;
    std::string exit_;
    bool exitIsSet_;
    std::string amount_;
    bool amountIsSet_;
    std::string cashier_;
    bool cashierIsSet_;
    std::string vehicleType_;
    bool vehicleTypeIsSet_;
    std::string date_;
    bool dateIsSet_;
    std::string time_;
    bool timeIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_TollInvoiceResult_H_


#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_TaxiInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_TaxiInvoiceResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  TaxiInvoiceResult
    : public ModelBase
{
public:
    TaxiInvoiceResult();
    virtual ~TaxiInvoiceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaxiInvoiceResult members

    /// <summary>
    /// 归属地区。 
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

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
    /// 电话（包括电话、监督电话）。 
    /// </summary>

    std::string getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetphoneNumber();
    void setPhoneNumber(const std::string& value);

    /// <summary>
    /// 单位。 
    /// </summary>

    std::string getCompany() const;
    bool companyIsSet() const;
    void unsetcompany();
    void setCompany(const std::string& value);

    /// <summary>
    /// 车号。 
    /// </summary>

    std::string getTaxiNumber() const;
    bool taxiNumberIsSet() const;
    void unsettaxiNumber();
    void setTaxiNumber(const std::string& value);

    /// <summary>
    /// 证号。 
    /// </summary>

    std::string getCertificateNumber() const;
    bool certificateNumberIsSet() const;
    void unsetcertificateNumber();
    void setCertificateNumber(const std::string& value);

    /// <summary>
    /// 识别编号。 
    /// </summary>

    std::string getIdentificationNumber() const;
    bool identificationNumberIsSet() const;
    void unsetidentificationNumber();
    void setIdentificationNumber(const std::string& value);

    /// <summary>
    /// 开票日期。 
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 上车时间。 
    /// </summary>

    std::string getBoardingTime() const;
    bool boardingTimeIsSet() const;
    void unsetboardingTime();
    void setBoardingTime(const std::string& value);

    /// <summary>
    /// 下车时间。 
    /// </summary>

    std::string getAlightingTime() const;
    bool alightingTimeIsSet() const;
    void unsetalightingTime();
    void setAlightingTime(const std::string& value);

    /// <summary>
    /// 时间(起止时间、上下车时间)。 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 单价。 
    /// </summary>

    std::string getUnitPrice() const;
    bool unitPriceIsSet() const;
    void unsetunitPrice();
    void setUnitPrice(const std::string& value);

    /// <summary>
    /// 总里程。 
    /// </summary>

    std::string getDistance() const;
    bool distanceIsSet() const;
    void unsetdistance();
    void setDistance(const std::string& value);

    /// <summary>
    /// 等候时间。 
    /// </summary>

    std::string getWaitingTime() const;
    bool waitingTimeIsSet() const;
    void unsetwaitingTime();
    void setWaitingTime(const std::string& value);

    /// <summary>
    /// 金额。 
    /// </summary>

    std::string getFare() const;
    bool fareIsSet() const;
    void unsetfare();
    void setFare(const std::string& value);

    /// <summary>
    /// 燃油附加费。 
    /// </summary>

    std::string getFuelOilSurcharge() const;
    bool fuelOilSurchargeIsSet() const;
    void unsetfuelOilSurcharge();
    void setFuelOilSurcharge(const std::string& value);

    /// <summary>
    /// 电调费（预约费）。 
    /// </summary>

    std::string getCallServiceSurcharge() const;
    bool callServiceSurchargeIsSet() const;
    void unsetcallServiceSurcharge();
    void setCallServiceSurcharge(const std::string& value);

    /// <summary>
    /// 实收金额。 
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 对应所有在原图上识别到的字段位置信息，包含所有文字区域四个顶点的二维坐标（x,y）。采用图像坐标系，坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


protected:
    std::string location_;
    bool locationIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string phoneNumber_;
    bool phoneNumberIsSet_;
    std::string company_;
    bool companyIsSet_;
    std::string taxiNumber_;
    bool taxiNumberIsSet_;
    std::string certificateNumber_;
    bool certificateNumberIsSet_;
    std::string identificationNumber_;
    bool identificationNumberIsSet_;
    std::string date_;
    bool dateIsSet_;
    std::string boardingTime_;
    bool boardingTimeIsSet_;
    std::string alightingTime_;
    bool alightingTimeIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string unitPrice_;
    bool unitPriceIsSet_;
    std::string distance_;
    bool distanceIsSet_;
    std::string waitingTime_;
    bool waitingTimeIsSet_;
    std::string fare_;
    bool fareIsSet_;
    std::string fuelOilSurcharge_;
    bool fuelOilSurchargeIsSet_;
    std::string callServiceSurcharge_;
    bool callServiceSurchargeIsSet_;
    std::string total_;
    bool totalIsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_TaxiInvoiceResult_H_

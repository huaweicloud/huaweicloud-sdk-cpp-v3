
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FlightItineraryResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FlightItineraryResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>
#include <huaweicloud/ocr/v1/model/ItineraryList.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  FlightItineraryResult
    : public ModelBase
{
public:
    FlightItineraryResult();
    virtual ~FlightItineraryResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlightItineraryResult members

    /// <summary>
    /// 印刷序号。 
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// 旅客姓名。 
    /// </summary>

    std::string getPassengerName() const;
    bool passengerNameIsSet() const;
    void unsetpassengerName();
    void setPassengerName(const std::string& value);

    /// <summary>
    /// 有效身份证件号码。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 备注。 
    /// </summary>

    std::string getEndorsementsRestrictions() const;
    bool endorsementsRestrictionsIsSet() const;
    void unsetendorsementsRestrictions();
    void setEndorsementsRestrictions(const std::string& value);

    /// <summary>
    /// 订单号。 
    /// </summary>

    std::string getOrderNumber() const;
    bool orderNumberIsSet() const;
    void unsetorderNumber();
    void setOrderNumber(const std::string& value);

    /// <summary>
    /// 票价。 
    /// </summary>

    std::string getFare() const;
    bool fareIsSet() const;
    void unsetfare();
    void setFare(const std::string& value);

    /// <summary>
    /// 民航（CAAC)发展基金。 
    /// </summary>

    std::string getCaacDevelopmentFund() const;
    bool caacDevelopmentFundIsSet() const;
    void unsetcaacDevelopmentFund();
    void setCaacDevelopmentFund(const std::string& value);

    /// <summary>
    /// 燃油附加费。 
    /// </summary>

    std::string getFuelSurcharge() const;
    bool fuelSurchargeIsSet() const;
    void unsetfuelSurcharge();
    void setFuelSurcharge(const std::string& value);

    /// <summary>
    /// 其他税费。 
    /// </summary>

    std::string getOtherTaxes() const;
    bool otherTaxesIsSet() const;
    void unsetotherTaxes();
    void setOtherTaxes(const std::string& value);

    /// <summary>
    /// 合计。 
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// 电子客票号码。 
    /// </summary>

    std::string getETicketNumber() const;
    bool eTicketNumberIsSet() const;
    void unseteTicketNumber();
    void setETicketNumber(const std::string& value);

    /// <summary>
    /// 验证码。 
    /// </summary>

    std::string getCheckCode() const;
    bool checkCodeIsSet() const;
    void unsetcheckCode();
    void setCheckCode(const std::string& value);

    /// <summary>
    /// 提示信息。 
    /// </summary>

    std::string getReferenceInformation() const;
    bool referenceInformationIsSet() const;
    void unsetreferenceInformation();
    void setReferenceInformation(const std::string& value);

    /// <summary>
    /// 保险费。 
    /// </summary>

    std::string getInsurance() const;
    bool insuranceIsSet() const;
    void unsetinsurance();
    void setInsurance(const std::string& value);

    /// <summary>
    /// 销售单位代号。 
    /// </summary>

    std::string getAgentCode() const;
    bool agentCodeIsSet() const;
    void unsetagentCode();
    void setAgentCode(const std::string& value);

    /// <summary>
    /// 填开单位。 
    /// </summary>

    std::string getIssueOrganization() const;
    bool issueOrganizationIsSet() const;
    void unsetissueOrganization();
    void setIssueOrganization(const std::string& value);

    /// <summary>
    /// 填开日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 机票行程列表。 
    /// </summary>

    std::vector<ItineraryList>& getItineraryList();
    bool itineraryListIsSet() const;
    void unsetitineraryList();
    void setItineraryList(const std::vector<ItineraryList>& value);

    /// <summary>
    /// 相关字段的置信度信息，取值范围0~1。  置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。  置信度由算法给出，不直接等价于对应字段的准确率。  &gt; 说明：  - （1）置信度中的相关字段均与返回值中的相关字段一一对应；  - （2）置信度中的itinerary_list的顺序与返回值中的itinerary_list的顺序是一致的。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string serialNumber_;
    bool serialNumberIsSet_;
    std::string passengerName_;
    bool passengerNameIsSet_;
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string endorsementsRestrictions_;
    bool endorsementsRestrictionsIsSet_;
    std::string orderNumber_;
    bool orderNumberIsSet_;
    std::string fare_;
    bool fareIsSet_;
    std::string caacDevelopmentFund_;
    bool caacDevelopmentFundIsSet_;
    std::string fuelSurcharge_;
    bool fuelSurchargeIsSet_;
    std::string otherTaxes_;
    bool otherTaxesIsSet_;
    std::string total_;
    bool totalIsSet_;
    std::string eTicketNumber_;
    bool eTicketNumberIsSet_;
    std::string checkCode_;
    bool checkCodeIsSet_;
    std::string referenceInformation_;
    bool referenceInformationIsSet_;
    std::string insurance_;
    bool insuranceIsSet_;
    std::string agentCode_;
    bool agentCodeIsSet_;
    std::string issueOrganization_;
    bool issueOrganizationIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::vector<ItineraryList> itineraryList_;
    bool itineraryListIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FlightItineraryResult_H_

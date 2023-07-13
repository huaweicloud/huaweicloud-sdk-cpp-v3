
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ItineraryList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ItineraryList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 机票行程列表。
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  ItineraryList
    : public ModelBase
{
public:
    ItineraryList();
    virtual ~ItineraryList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ItineraryList members

    /// <summary>
    /// 始发站。 
    /// </summary>

    std::string getDepartureStation() const;
    bool departureStationIsSet() const;
    void unsetdepartureStation();
    void setDepartureStation(const std::string& value);

    /// <summary>
    /// 目的站。 
    /// </summary>

    std::string getDestinationStation() const;
    bool destinationStationIsSet() const;
    void unsetdestinationStation();
    void setDestinationStation(const std::string& value);

    /// <summary>
    /// 承运人。 
    /// </summary>

    std::string getCarrier() const;
    bool carrierIsSet() const;
    void unsetcarrier();
    void setCarrier(const std::string& value);

    /// <summary>
    /// 航班号。 
    /// </summary>

    std::string getFlight() const;
    bool flightIsSet() const;
    void unsetflight();
    void setFlight(const std::string& value);

    /// <summary>
    /// 座位等级。 
    /// </summary>

    std::string getCabinClass() const;
    bool cabinClassIsSet() const;
    void unsetcabinClass();
    void setCabinClass(const std::string& value);

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
    /// 客票类别。 
    /// </summary>

    std::string getFareBasis() const;
    bool fareBasisIsSet() const;
    void unsetfareBasis();
    void setFareBasis(const std::string& value);

    /// <summary>
    /// 客票生效日期。 
    /// </summary>

    std::string getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const std::string& value);

    /// <summary>
    /// 有效截止日期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 免费行李。 
    /// </summary>

    std::string getBaggageAllowance() const;
    bool baggageAllowanceIsSet() const;
    void unsetbaggageAllowance();
    void setBaggageAllowance(const std::string& value);


protected:
    std::string departureStation_;
    bool departureStationIsSet_;
    std::string destinationStation_;
    bool destinationStationIsSet_;
    std::string carrier_;
    bool carrierIsSet_;
    std::string flight_;
    bool flightIsSet_;
    std::string cabinClass_;
    bool cabinClassIsSet_;
    std::string date_;
    bool dateIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string fareBasis_;
    bool fareBasisIsSet_;
    std::string effectiveDate_;
    bool effectiveDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string baggageAllowance_;
    bool baggageAllowanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ItineraryList_H_

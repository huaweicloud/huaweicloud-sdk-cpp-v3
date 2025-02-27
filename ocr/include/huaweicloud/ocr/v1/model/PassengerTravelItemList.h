
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PassengerTravelItemList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PassengerTravelItemList_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  PassengerTravelItemList
    : public ModelBase
{
public:
    PassengerTravelItemList();
    virtual ~PassengerTravelItemList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PassengerTravelItemList members

    /// <summary>
    /// 出行人。 
    /// </summary>

    std::string getTravelerName() const;
    bool travelerNameIsSet() const;
    void unsettravelerName();
    void setTravelerName(const std::string& value);

    /// <summary>
    /// 有效身份证件号。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 出行日期。 
    /// </summary>

    std::string getTravelDate() const;
    bool travelDateIsSet() const;
    void unsettravelDate();
    void setTravelDate(const std::string& value);

    /// <summary>
    /// 出发地。 
    /// </summary>

    std::string getDepartureLocation() const;
    bool departureLocationIsSet() const;
    void unsetdepartureLocation();
    void setDepartureLocation(const std::string& value);

    /// <summary>
    /// 到达地。 
    /// </summary>

    std::string getArrivalLocation() const;
    bool arrivalLocationIsSet() const;
    void unsetarrivalLocation();
    void setArrivalLocation(const std::string& value);

    /// <summary>
    /// 等级。 
    /// </summary>

    std::string getClass() const;
    bool classIsSet() const;
    void unsetclass();
    void setClass(const std::string& value);

    /// <summary>
    /// 交通工具类型。 
    /// </summary>

    std::string getTransportationType() const;
    bool transportationTypeIsSet() const;
    void unsettransportationType();
    void setTransportationType(const std::string& value);


protected:
    std::string travelerName_;
    bool travelerNameIsSet_;
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string travelDate_;
    bool travelDateIsSet_;
    std::string departureLocation_;
    bool departureLocationIsSet_;
    std::string arrivalLocation_;
    bool arrivalLocationIsSet_;
    std::string class_;
    bool classIsSet_;
    std::string transportationType_;
    bool transportationTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PassengerTravelItemList_H_

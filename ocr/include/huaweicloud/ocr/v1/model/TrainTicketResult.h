
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_TrainTicketResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_TrainTicketResult_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  TrainTicketResult
    : public ModelBase
{
public:
    TrainTicketResult();
    virtual ~TrainTicketResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainTicketResult members

    /// <summary>
    /// 火车票左上角的车票ID。 
    /// </summary>

    std::string getTicketId() const;
    bool ticketIdIsSet() const;
    void unsetticketId();
    void setTicketId(const std::string& value);

    /// <summary>
    /// 检票口信息。 
    /// </summary>

    std::string getCheckPort() const;
    bool checkPortIsSet() const;
    void unsetcheckPort();
    void setCheckPort(const std::string& value);

    /// <summary>
    /// 车次。 
    /// </summary>

    std::string getTrainNumber() const;
    bool trainNumberIsSet() const;
    void unsettrainNumber();
    void setTrainNumber(const std::string& value);

    /// <summary>
    /// 始发站。 
    /// </summary>

    std::string getDepartureStation() const;
    bool departureStationIsSet() const;
    void unsetdepartureStation();
    void setDepartureStation(const std::string& value);

    /// <summary>
    /// 终点站。 
    /// </summary>

    std::string getDestinationStation() const;
    bool destinationStationIsSet() const;
    void unsetdestinationStation();
    void setDestinationStation(const std::string& value);

    /// <summary>
    /// 始发站拼音。 
    /// </summary>

    std::string getDepartureStationEn() const;
    bool departureStationEnIsSet() const;
    void unsetdepartureStationEn();
    void setDepartureStationEn(const std::string& value);

    /// <summary>
    /// 终点站拼音。 
    /// </summary>

    std::string getDestinationStationEn() const;
    bool destinationStationEnIsSet() const;
    void unsetdestinationStationEn();
    void setDestinationStationEn(const std::string& value);

    /// <summary>
    /// 开车时间。 
    /// </summary>

    std::string getDepartureTime() const;
    bool departureTimeIsSet() const;
    void unsetdepartureTime();
    void setDepartureTime(const std::string& value);

    /// <summary>
    /// 座位号。 
    /// </summary>

    std::string getSeatNumber() const;
    bool seatNumberIsSet() const;
    void unsetseatNumber();
    void setSeatNumber(const std::string& value);

    /// <summary>
    /// 票价。 
    /// </summary>

    std::string getTicketPrice() const;
    bool ticketPriceIsSet() const;
    void unsetticketPrice();
    void setTicketPrice(const std::string& value);

    /// <summary>
    /// 售票方式。 
    /// </summary>

    std::string getSaleMethod() const;
    bool saleMethodIsSet() const;
    void unsetsaleMethod();
    void setSaleMethod(const std::string& value);

    /// <summary>
    /// 座位类别。 
    /// </summary>

    std::string getSeatCategory() const;
    bool seatCategoryIsSet() const;
    void unsetseatCategory();
    void setSeatCategory(const std::string& value);

    /// <summary>
    /// 是否改签票, \&quot;Yes\&quot;表示改签票，\&quot;No\&quot;表示非改签票。 
    /// </summary>

    std::string getTicketChanging() const;
    bool ticketChangingIsSet() const;
    void unsetticketChanging();
    void setTicketChanging(const std::string& value);

    /// <summary>
    /// 车票持有人的身份证号。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 车票持有人姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 车票最下方的序列号。 
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// 车票售票地点。 
    /// </summary>

    std::string getSaleLocation() const;
    bool saleLocationIsSet() const;
    void unsetsaleLocation();
    void setSaleLocation(const std::string& value);

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
    std::string ticketId_;
    bool ticketIdIsSet_;
    std::string checkPort_;
    bool checkPortIsSet_;
    std::string trainNumber_;
    bool trainNumberIsSet_;
    std::string departureStation_;
    bool departureStationIsSet_;
    std::string destinationStation_;
    bool destinationStationIsSet_;
    std::string departureStationEn_;
    bool departureStationEnIsSet_;
    std::string destinationStationEn_;
    bool destinationStationEnIsSet_;
    std::string departureTime_;
    bool departureTimeIsSet_;
    std::string seatNumber_;
    bool seatNumberIsSet_;
    std::string ticketPrice_;
    bool ticketPriceIsSet_;
    std::string saleMethod_;
    bool saleMethodIsSet_;
    std::string seatCategory_;
    bool seatCategoryIsSet_;
    std::string ticketChanging_;
    bool ticketChangingIsSet_;
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    std::string saleLocation_;
    bool saleLocationIsSet_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_TrainTicketResult_H_

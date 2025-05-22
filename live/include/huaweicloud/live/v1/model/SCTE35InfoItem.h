
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35InfoItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35InfoItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SCTE35信号信息的item结构。
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  SCTE35InfoItem
    : public ModelBase
{
public:
    SCTE35InfoItem();
    virtual ~SCTE35InfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SCTE35InfoItem members

    /// <summary>
    /// 信号类型，splice_insert/time_signal。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 广告信号的Event ID，Time Signal打印数组第一个。
    /// </summary>

    int32_t getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(int32_t value);

    /// <summary>
    /// 广告信号的执行时间，unix time，单位：秒。
    /// </summary>

    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(int64_t value);

    /// <summary>
    /// 广告信号时长，-1表示没有携带,单位：秒。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// // Splice Insert填空\&quot;-\&quot;； // Time Signal，支持0x30，0x31，0x32，0x33，0x34，0x35，0x36，0x37 // 0x30: ProviderAdvertisementStart // 0x31: ProviderAdvertisementEnd // 0x32: DistributorAdvertisementStart // 0x33: DistributorAdvertisementEnd // 0x34: ProviderPlacementOpportunityStart // 0x35: ProviderPlacementOpportunityEnd // 0x36: DistributorPlacementOpportunityStart // 0x37: DistributorPlacementOpportunityEnd
    /// </summary>

    std::string getSegmentationType() const;
    bool segmentationTypeIsSet() const;
    void unsetsegmentationType();
    void setSegmentationType(const std::string& value);

    /// <summary>
    /// 广告信号原始数据的base64值。
    /// </summary>

    std::string getBase64Data() const;
    bool base64DataIsSet() const;
    void unsetbase64Data();
    void setBase64Data(const std::string& value);

    /// <summary>
    /// 广告信号全量信息。
    /// </summary>

    std::string getRawSplice() const;
    bool rawSpliceIsSet() const;
    void unsetrawSplice();
    void setRawSplice(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t eventId_;
    bool eventIdIsSet_;
    int64_t startDate_;
    bool startDateIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string segmentationType_;
    bool segmentationTypeIsSet_;
    std::string base64Data_;
    bool base64DataIsSet_;
    std::string rawSplice_;
    bool rawSpliceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35InfoItem_H_

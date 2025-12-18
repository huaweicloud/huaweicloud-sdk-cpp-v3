
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticResourceDataItem_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticResourceDataItem_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议已购资源使用数据的单个时间点数据。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StatisticResourceDataItem
    : public ModelBase
{
public:
    StatisticResourceDataItem();
    virtual ~StatisticResourceDataItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticResourceDataItem members

    /// <summary>
    /// 日期/月份。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// VMR方数。 category &#x3D; used_vmr_info时有效。
    /// </summary>

    std::string getVmrParties() const;
    bool vmrPartiesIsSet() const;
    void unsetvmrParties();
    void setVmrParties(const std::string& value);

    /// <summary>
    /// VMR并发使用数。 category &#x3D; used_vmr_info时有效。
    /// </summary>

    std::string getMaxConcurrencyVmrCount() const;
    bool maxConcurrencyVmrCountIsSet() const;
    void unsetmaxConcurrencyVmrCount();
    void setMaxConcurrencyVmrCount(const std::string& value);

    /// <summary>
    /// 直播端口并发使用数。 category &#x3D; used_live_info时有效。
    /// </summary>

    std::string getLivePortUsedCount() const;
    bool livePortUsedCountIsSet() const;
    void unsetlivePortUsedCount();
    void setLivePortUsedCount(const std::string& value);

    /// <summary>
    /// 录播使用空间(G)。 category &#x3D; used_record_info时有效。
    /// </summary>

    std::string getRecordUsedSize() const;
    bool recordUsedSizeIsSet() const;
    void unsetrecordUsedSize();
    void setRecordUsedSize(const std::string& value);

    /// <summary>
    /// PSTN外呼时长(分钟)。 category &#x3D; used_pstn_info时有效。
    /// </summary>

    std::string getPstnUsedDuration() const;
    bool pstnUsedDurationIsSet() const;
    void unsetpstnUsedDuration();
    void setPstnUsedDuration(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string vmrParties_;
    bool vmrPartiesIsSet_;
    std::string maxConcurrencyVmrCount_;
    bool maxConcurrencyVmrCountIsSet_;
    std::string livePortUsedCount_;
    bool livePortUsedCountIsSet_;
    std::string recordUsedSize_;
    bool recordUsedSizeIsSet_;
    std::string pstnUsedDuration_;
    bool pstnUsedDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticResourceDataItem_H_

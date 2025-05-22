
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticReq_H_


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
/// 请求频道scte35信号的字段。
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  SCTE35StatisticReq
    : public ModelBase
{
public:
    SCTE35StatisticReq();
    virtual ~SCTE35StatisticReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SCTE35StatisticReq members

    /// <summary>
    /// 信号类型：all/splice_insert/time_signal。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 查询信号的起始时间，unix time，单位：秒。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询信号的结束时间，unix time，单位：秒；实际使用使用比start_time大。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticReq_H_

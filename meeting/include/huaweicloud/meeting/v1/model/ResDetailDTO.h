
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResDetailDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResDetailDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ResDetailDTO
    : public ModelBase
{
public:
    ResDetailDTO();
    virtual ~ResDetailDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResDetailDTO members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getSumCount() const;
    bool sumCountIsSet() const;
    void unsetsumCount();
    void setSumCount(int32_t value);

    /// <summary>
    /// 赠送数量。
    /// </summary>

    int32_t getTrialCount() const;
    bool trialCountIsSet() const;
    void unsettrialCount();
    void setTrialCount(int32_t value);

    /// <summary>
    /// 到期数量。
    /// </summary>

    int32_t getExpiredCount() const;
    bool expiredCountIsSet() const;
    void unsetexpiredCount();
    void setExpiredCount(int32_t value);

    /// <summary>
    /// 即将到期数量，到期时间在30天内。
    /// </summary>

    int32_t getExpiringCount() const;
    bool expiringCountIsSet() const;
    void unsetexpiringCount();
    void setExpiringCount(int32_t value);

    /// <summary>
    /// 已使用数（录播存储空间、会议并发、推流并发方数暂无法查询）。
    /// </summary>

    int32_t getUsedCount() const;
    bool usedCountIsSet() const;
    void unsetusedCount();
    void setUsedCount(int32_t value);


protected:
    int32_t sumCount_;
    bool sumCountIsSet_;
    int32_t trialCount_;
    bool trialCountIsSet_;
    int32_t expiredCount_;
    bool expiredCountIsSet_;
    int32_t expiringCount_;
    bool expiringCountIsSet_;
    int32_t usedCount_;
    bool usedCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResDetailDTO_H_

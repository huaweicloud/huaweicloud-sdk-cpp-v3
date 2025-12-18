
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowOrgResResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOrgResResponse();
    virtual ~ShowOrgResResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrgResResponse members

    /// <summary>
    /// 企业管理员查询所属企业的资源使用信息。
    /// </summary>

    double getUsedRecStorage() const;
    bool usedRecStorageIsSet() const;
    void unsetusedRecStorage();
    void setUsedRecStorage(double value);

    /// <summary>
    /// 当前已用的会议并发数量。
    /// </summary>

    int32_t getUsedAccountsCount() const;
    bool usedAccountsCountIsSet() const;
    void unsetusedAccountsCount();
    void setUsedAccountsCount(int32_t value);

    /// <summary>
    /// 当前已用的直播推流资源。
    /// </summary>

    int32_t getUsedLiveCount() const;
    bool usedLiveCountIsSet() const;
    void unsetusedLiveCount();
    void setUsedLiveCount(int32_t value);

    /// <summary>
    /// 当前已用的直播推流资源。
    /// </summary>

    int32_t getConfCount() const;
    bool confCountIsSet() const;
    void unsetconfCount();
    void setConfCount(int32_t value);

    /// <summary>
    /// 当日会议总时长。
    /// </summary>

    int64_t getConfLength() const;
    bool confLengthIsSet() const;
    void unsetconfLength();
    void setConfLength(int64_t value);

    /// <summary>
    /// 当日活跃用户数。
    /// </summary>

    int32_t getActiveAttendeeCount() const;
    bool activeAttendeeCountIsSet() const;
    void unsetactiveAttendeeCount();
    void setActiveAttendeeCount(int32_t value);

    /// <summary>
    /// 当日总与会人数。
    /// </summary>

    int32_t getTotalAttendeeCount() const;
    bool totalAttendeeCountIsSet() const;
    void unsettotalAttendeeCount();
    void setTotalAttendeeCount(int32_t value);


protected:
    double usedRecStorage_;
    bool usedRecStorageIsSet_;
    int32_t usedAccountsCount_;
    bool usedAccountsCountIsSet_;
    int32_t usedLiveCount_;
    bool usedLiveCountIsSet_;
    int32_t confCount_;
    bool confCountIsSet_;
    int64_t confLength_;
    bool confLengthIsSet_;
    int32_t activeAttendeeCount_;
    bool activeAttendeeCountIsSet_;
    int32_t totalAttendeeCount_;
    bool totalAttendeeCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResResponse_H_

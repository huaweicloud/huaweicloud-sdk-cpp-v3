
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/WeeklyTop10.h>
#include <huaweicloud/antiddos/v1/model/WeeklyCount.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListWeeklyReportsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWeeklyReportsResponse();
    virtual ~ListWeeklyReportsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWeeklyReportsResponse members

    /// <summary>
    /// 一周内DDoS拦截次数
    /// </summary>

    int32_t getDdosInterceptTimes() const;
    bool ddosInterceptTimesIsSet() const;
    void unsetddosInterceptTimes();
    void setDdosInterceptTimes(int32_t value);

    /// <summary>
    /// 一周的攻击次数统计数据
    /// </summary>

    std::vector<WeeklyCount>& getWeekdata();
    bool weekdataIsSet() const;
    void unsetweekdata();
    void setWeekdata(const std::vector<WeeklyCount>& value);

    /// <summary>
    /// 被攻击次数排名前10的IP地址
    /// </summary>

    std::vector<WeeklyTop10>& getTop10();
    bool top10IsSet() const;
    void unsettop10();
    void setTop10(const std::vector<WeeklyTop10>& value);


protected:
    int32_t ddosInterceptTimes_;
    bool ddosInterceptTimesIsSet_;
    std::vector<WeeklyCount> weekdata_;
    bool weekdataIsSet_;
    std::vector<WeeklyTop10> top10_;
    bool top10IsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsResponse_H_

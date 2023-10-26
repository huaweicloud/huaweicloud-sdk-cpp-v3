
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyCount_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyCount_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// WeeklyCount
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  WeeklyCount
    : public ModelBase
{
public:
    WeeklyCount();
    virtual ~WeeklyCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WeeklyCount members

    /// <summary>
    /// DDoS拦截次数
    /// </summary>

    int32_t getDdosInterceptTimes() const;
    bool ddosInterceptTimesIsSet() const;
    void unsetddosInterceptTimes();
    void setDdosInterceptTimes(int32_t value);

    /// <summary>
    /// DDoS黑洞次数
    /// </summary>

    int32_t getDdosBlackholeTimes() const;
    bool ddosBlackholeTimesIsSet() const;
    void unsetddosBlackholeTimes();
    void setDdosBlackholeTimes(int32_t value);

    /// <summary>
    /// 最大攻击流量
    /// </summary>

    int32_t getMaxAttackBps() const;
    bool maxAttackBpsIsSet() const;
    void unsetmaxAttackBps();
    void setMaxAttackBps(int32_t value);

    /// <summary>
    /// 最大攻击连接数
    /// </summary>

    int32_t getMaxAttackConns() const;
    bool maxAttackConnsIsSet() const;
    void unsetmaxAttackConns();
    void setMaxAttackConns(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getPeriodStartDate() const;
    bool periodStartDateIsSet() const;
    void unsetperiodStartDate();
    void setPeriodStartDate(int64_t value);


protected:
    int32_t ddosInterceptTimes_;
    bool ddosInterceptTimesIsSet_;
    int32_t ddosBlackholeTimes_;
    bool ddosBlackholeTimesIsSet_;
    int32_t maxAttackBps_;
    bool maxAttackBpsIsSet_;
    int32_t maxAttackConns_;
    bool maxAttackConnsIsSet_;
    int64_t periodStartDate_;
    bool periodStartDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyCount_H_

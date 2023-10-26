
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyData_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyData_H_


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
/// EIP防护流量响应体
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  DailyData
    : public ModelBase
{
public:
    DailyData();
    virtual ~DailyData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DailyData members

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getPeriodStart() const;
    bool periodStartIsSet() const;
    void unsetperiodStart();
    void setPeriodStart(int64_t value);

    /// <summary>
    /// 入流量（bit/s）
    /// </summary>

    int32_t getBpsIn() const;
    bool bpsInIsSet() const;
    void unsetbpsIn();
    void setBpsIn(int32_t value);

    /// <summary>
    /// 攻击流量（bit/s）
    /// </summary>

    int64_t getBpsAttack() const;
    bool bpsAttackIsSet() const;
    void unsetbpsAttack();
    void setBpsAttack(int64_t value);

    /// <summary>
    /// 总流量
    /// </summary>

    int64_t getTotalBps() const;
    bool totalBpsIsSet() const;
    void unsettotalBps();
    void setTotalBps(int64_t value);

    /// <summary>
    /// 入报文速率（个/s）
    /// </summary>

    int64_t getPpsIn() const;
    bool ppsInIsSet() const;
    void unsetppsIn();
    void setPpsIn(int64_t value);

    /// <summary>
    /// 攻击文速率（个/s）
    /// </summary>

    int64_t getPpsAttack() const;
    bool ppsAttackIsSet() const;
    void unsetppsAttack();
    void setPpsAttack(int64_t value);

    /// <summary>
    /// 总报文速率
    /// </summary>

    int64_t getTotalPps() const;
    bool totalPpsIsSet() const;
    void unsettotalPps();
    void setTotalPps(int64_t value);


protected:
    int64_t periodStart_;
    bool periodStartIsSet_;
    int32_t bpsIn_;
    bool bpsInIsSet_;
    int64_t bpsAttack_;
    bool bpsAttackIsSet_;
    int64_t totalBps_;
    bool totalBpsIsSet_;
    int64_t ppsIn_;
    bool ppsInIsSet_;
    int64_t ppsAttack_;
    bool ppsAttackIsSet_;
    int64_t totalPps_;
    bool totalPpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyData_H_

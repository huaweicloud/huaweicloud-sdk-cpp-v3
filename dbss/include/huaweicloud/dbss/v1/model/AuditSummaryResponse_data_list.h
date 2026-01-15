
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryResponse_data_list_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryResponse_data_list_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSummaryResponse_data_list
    : public ModelBase
{
public:
    AuditSummaryResponse_data_list();
    virtual ~AuditSummaryResponse_data_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSummaryResponse_data_list members

    /// <summary>
    /// ID
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 状态 - 1：success - 2：failure
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    int64_t getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(int64_t value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 审计时长
    /// </summary>

    int64_t getAuditDuration() const;
    bool auditDurationIsSet() const;
    void unsetauditDuration();
    void setAuditDuration(int64_t value);

    /// <summary>
    /// 语句总量
    /// </summary>

    int64_t getTotalSql() const;
    bool totalSqlIsSet() const;
    void unsettotalSql();
    void setTotalSql(int64_t value);

    /// <summary>
    /// 风险总量
    /// </summary>

    int64_t getTotalRisk() const;
    bool totalRiskIsSet() const;
    void unsettotalRisk();
    void setTotalRisk(int64_t value);

    /// <summary>
    /// 今日语句
    /// </summary>

    int64_t getTodaySql() const;
    bool todaySqlIsSet() const;
    void unsettodaySql();
    void setTodaySql(int64_t value);

    /// <summary>
    /// 今日风险
    /// </summary>

    int64_t getTodayRisk() const;
    bool todayRiskIsSet() const;
    void unsettodayRisk();
    void setTodayRisk(int64_t value);

    /// <summary>
    /// 今日会话
    /// </summary>

    int64_t getTodaySession() const;
    bool todaySessionIsSet() const;
    void unsettodaySession();
    void setTodaySession(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 保留字1
    /// </summary>

    std::string getReserve1() const;
    bool reserve1IsSet() const;
    void unsetreserve1();
    void setReserve1(const std::string& value);

    /// <summary>
    /// 保留字2
    /// </summary>

    std::string getReserve2() const;
    bool reserve2IsSet() const;
    void unsetreserve2();
    void setReserve2(const std::string& value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    int64_t auditDuration_;
    bool auditDurationIsSet_;
    int64_t totalSql_;
    bool totalSqlIsSet_;
    int64_t totalRisk_;
    bool totalRiskIsSet_;
    int64_t todaySql_;
    bool todaySqlIsSet_;
    int64_t todayRisk_;
    bool todayRiskIsSet_;
    int64_t todaySession_;
    bool todaySessionIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string reserve1_;
    bool reserve1IsSet_;
    std::string reserve2_;
    bool reserve2IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryResponse_data_list_H_

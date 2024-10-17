
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSummaryInfosResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSummaryInfosResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditSummaryResponse_data_list.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditSummaryInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditSummaryInfosResponse();
    virtual ~ListAuditSummaryInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditSummaryInfosResponse members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 审计总时长
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
    /// 列表信息
    /// </summary>

    std::vector<AuditSummaryResponse_data_list>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<AuditSummaryResponse_data_list>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
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
    std::vector<AuditSummaryResponse_data_list> dataList_;
    bool dataListIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSummaryInfosResponse_H_

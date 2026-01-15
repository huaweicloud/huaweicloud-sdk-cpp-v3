
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AlarmLogRequest_time.h>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  AlarmLogRequest
    : public ModelBase
{
public:
    AlarmLogRequest();
    virtual ~AlarmLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmLogRequest members

    /// <summary>
    /// 
    /// </summary>

    AlarmLogRequest_time getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const AlarmLogRequest_time& value);

    /// <summary>
    /// 风险级别 - LOW：低 - MEDIUM：中 - HIGH：高
    /// </summary>

    std::vector<std::string>& getRisk();
    bool riskIsSet() const;
    void unsetrisk();
    void setRisk(const std::vector<std::string>& value);

    /// <summary>
    /// 告警类型 - RISK_RULE：风险规则 - RISK_CPU：CPU超限 - RISK_MEMORY：内存超限 - RISK_DISK：磁盘超限 - RISK_DISK_CAPACITY：磁盘容量不足六个月 - RISK_BACKUP：备份失败 - AUDIT_QPS_OVERFLOW：流量超限入库延迟告警 - RISK_AGENT：Agent异常 - AUDIT_BACKUP_FAILED：实例备份失败(运维侧)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 告警确认状态 - DONE：已确认 - UNDO：未确认
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    AlarmLogRequest_time time_;
    bool timeIsSet_;
    std::vector<std::string> risk_;
    bool riskIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogRequest_H_

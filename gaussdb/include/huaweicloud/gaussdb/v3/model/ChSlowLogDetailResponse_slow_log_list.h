
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowLogDetailResponse_slow_log_list_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowLogDetailResponse_slow_log_list_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChSlowLogDetailResponse_slow_log_list
    : public ModelBase
{
public:
    ChSlowLogDetailResponse_slow_log_list();
    virtual ~ChSlowLogDetailResponse_slow_log_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChSlowLogDetailResponse_slow_log_list members

    /// <summary>
    /// ClickHouse实例节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 数据库语句执行时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 数据库语句等待锁时间。
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 数据库语句执行结果行数。
    /// </summary>

    int32_t getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(int32_t value);

    /// <summary>
    /// 数据库语句扫描行数。
    /// </summary>

    int32_t getRowsExamined() const;
    bool rowsExaminedIsSet() const;
    void unsetrowsExamined();
    void setRowsExamined(int32_t value);

    /// <summary>
    /// 所属数据库名。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 执行语句账号。
    /// </summary>

    std::string getUsers() const;
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::string& value);

    /// <summary>
    /// 数据库执行语句。
    /// </summary>

    std::string getQuerySample() const;
    bool querySampleIsSet() const;
    void unsetquerySample();
    void setQuerySample(const std::string& value);

    /// <summary>
    /// 数据库语句类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 数据库语句发生时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 日志单行序列号，第一次查询时不需要此参数，后续分页查询时需要使用，可从上次查询的返回信息中获取。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 慢日志数量。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    int32_t rowsSent_;
    bool rowsSentIsSet_;
    int32_t rowsExamined_;
    bool rowsExaminedIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string users_;
    bool usersIsSet_;
    std::string querySample_;
    bool querySampleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChSlowLogDetailResponse_slow_log_list_H_

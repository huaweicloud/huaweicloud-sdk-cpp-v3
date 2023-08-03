
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLogStatistics_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLogStatistics_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 慢日志信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SlowLogStatistics
    : public ModelBase
{
public:
    SlowLogStatistics();
    virtual ~SlowLogStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SlowLogStatistics members

    /// <summary>
    /// 执行次数。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);

    /// <summary>
    /// 平均执行时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 平均等待锁时间。
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 平均结果行数量。
    /// </summary>

    int64_t getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(int64_t value);

    /// <summary>
    /// 平均扫描的行数量。
    /// </summary>

    int64_t getRowsExamined() const;
    bool rowsExaminedIsSet() const;
    void unsetrowsExamined();
    void setRowsExamined(int64_t value);

    /// <summary>
    /// 所属数据库。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 帐号。
    /// </summary>

    std::string getUsers() const;
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::string& value);

    /// <summary>
    /// 执行语法。
    /// </summary>

    std::string getQuerySample() const;
    bool querySampleIsSet() const;
    void unsetquerySample();
    void setQuerySample(const std::string& value);

    /// <summary>
    /// 语句类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getClientIP() const;
    bool clientIPIsSet() const;
    void unsetclientIP();
    void setClientIP(const std::string& value);


protected:
    std::string count_;
    bool countIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    int64_t rowsSent_;
    bool rowsSentIsSet_;
    int64_t rowsExamined_;
    bool rowsExaminedIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string users_;
    bool usersIsSet_;
    std::string querySample_;
    bool querySampleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string clientIP_;
    bool clientIPIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLogStatistics_H_

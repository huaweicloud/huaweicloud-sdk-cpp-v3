
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLog_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLog_H_

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
class HUAWEICLOUD_RDS_V3_EXPORT  SlowLog
    : public ModelBase
{
public:
    SlowLog();
    virtual ~SlowLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SlowLog members

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

    std::string getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(const std::string& value);

    /// <summary>
    /// 平均扫描的行数量。
    /// </summary>

    std::string getRowsExamined() const;
    bool rowsExaminedIsSet() const;
    void unsetrowsExamined();
    void setRowsExamined(const std::string& value);

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
    /// 发生时间，UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);


protected:
    std::string count_;
    bool countIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    std::string rowsSent_;
    bool rowsSentIsSet_;
    std::string rowsExamined_;
    bool rowsExaminedIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string users_;
    bool usersIsSet_;
    std::string querySample_;
    bool querySampleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowLog_H_


#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlSlowLogStatisticsItem_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlSlowLogStatisticsItem_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlSlowLogStatisticsItem
    : public ModelBase
{
public:
    MysqlSlowLogStatisticsItem();
    virtual ~MysqlSlowLogStatisticsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlSlowLogStatisticsItem members

    /// <summary>
    /// 执行次数。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);

    /// <summary>
    /// 执行时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 等待锁时间。mysql支持
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 结果行数量。mysql支持
    /// </summary>

    int64_t getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(int64_t value);

    /// <summary>
    /// 扫描的行数量。mysql支持
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
    /// IP地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 语句类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


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
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlSlowLogStatisticsItem_H_

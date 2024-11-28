
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsItem_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSlowLogStatisticsItem
    : public ModelBase
{
public:
    ShowSlowLogStatisticsItem();
    virtual ~ShowSlowLogStatisticsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSlowLogStatisticsItem members

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 执行次数。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);

    /// <summary>
    /// 所属数据库。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 平均等待锁时间。
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 执行语法。
    /// </summary>

    std::string getQuerySample() const;
    bool querySampleIsSet() const;
    void unsetquerySample();
    void setQuerySample(const std::string& value);

    /// <summary>
    /// 平均扫描的行数量。
    /// </summary>

    int32_t getRowsExamined() const;
    bool rowsExaminedIsSet() const;
    void unsetrowsExamined();
    void setRowsExamined(int32_t value);

    /// <summary>
    /// 平均结果行统计数量。
    /// </summary>

    int32_t getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(int32_t value);

    /// <summary>
    /// 平均执行时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 语句类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 账号。
    /// </summary>

    std::string getUsers() const;
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::string& value);


protected:
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string count_;
    bool countIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string querySample_;
    bool querySampleIsSet_;
    int32_t rowsExamined_;
    bool rowsExaminedIsSet_;
    int32_t rowsSent_;
    bool rowsSentIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsItem_H_

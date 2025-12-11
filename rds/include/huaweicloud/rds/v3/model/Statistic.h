
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Statistic_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Statistic_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  Statistic
    : public ModelBase
{
public:
    Statistic();
    virtual ~Statistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Statistic members

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 由SQL的语法解析树计算出的内部哈希码。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 调用次数
    /// </summary>

    int64_t getCalls() const;
    bool callsIsSet() const;
    void unsetcalls();
    void setCalls(int64_t value);

    /// <summary>
    /// SQL语句的文本形式。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// 扫描行数
    /// </summary>

    int64_t getRows() const;
    bool rowsIsSet() const;
    void unsetrows();
    void setRows(int64_t value);

    /// <summary>
    /// 是否可以执行sql限流
    /// </summary>

    double getCanUse() const;
    bool canUseIsSet() const;
    void unsetcanUse();
    void setCanUse(double value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    int64_t calls_;
    bool callsIsSet_;
    std::string query_;
    bool queryIsSet_;
    int64_t rows_;
    bool rowsIsSet_;
    double canUse_;
    bool canUseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Statistic_H_

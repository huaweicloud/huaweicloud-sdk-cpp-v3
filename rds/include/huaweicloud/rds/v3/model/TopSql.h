
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSql_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSql_H_


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
/// top sql信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TopSql
    : public ModelBase
{
public:
    TopSql();
    virtual ~TopSql();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopSql members

    /// <summary>
    /// 采样时间
    /// </summary>

    std::string getSampleTime() const;
    bool sampleTimeIsSet() const;
    void unsetsampleTime();
    void setSampleTime(const std::string& value);

    /// <summary>
    /// 个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// Query ID
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);


protected:
    std::string sampleTime_;
    bool sampleTimeIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSql_H_

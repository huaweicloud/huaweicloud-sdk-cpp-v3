
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreTablesRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreTablesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowRestoreTablesRequest
    : public ModelBase
{
public:
    ShowRestoreTablesRequest();
    virtual ~ShowRestoreTablesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRestoreTablesRequest members

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 备份时间点，时间戳格式。  通过[查询可恢复时间段](https://support.huaweicloud.com/api-gaussdbformysql/ShowBackupRestoreTime.html)获取。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);

    /// <summary>
    /// 是否是最新库表。 - true：是最新库表。 - false：是恢复时间点库表。
    /// </summary>

    std::string getLastTableInfo() const;
    bool lastTableInfoIsSet() const;
    void unsetlastTableInfo();
    void setLastTableInfo(const std::string& value);

    /// <summary>
    /// 数据库名称，模糊匹配。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 表名称，模糊匹配。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string restoreTime_;
    bool restoreTimeIsSet_;
    std::string lastTableInfo_;
    bool lastTableInfoIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRestoreTablesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRestoreTablesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreTablesRequest_H_

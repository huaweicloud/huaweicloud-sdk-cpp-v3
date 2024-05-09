
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfigCheckRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfigCheckRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/TableReplConfig.h>
#include <huaweicloud/gaussdb/v3/model/DbConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HTAP库配置校验请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DbConfigCheckRequestV3
    : public ModelBase
{
public:
    DbConfigCheckRequestV3();
    virtual ~DbConfigCheckRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbConfigCheckRequestV3 members

    /// <summary>
    /// GaussDB(for MySQL)实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// GaussDB(for MySQL)只读节点ID。如为空，则取GaussDB(for MySQL)主节点ID
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// GaussDB(for MySQL)数据库名。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// 目标数据库名。字符长度限制3~128位，仅支持英文大小写字母、数字以及下划线_。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// 同步任务名称。字符长度限制3~128位，仅支持英文大小写字母、数字以及下划线_。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 库配置列表。
    /// </summary>

    std::vector<DbConfig>& getDbConfigs();
    bool dbConfigsIsSet() const;
    void unsetdbConfigs();
    void setDbConfigs(const std::vector<DbConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    TableReplConfig getTableReplConfig() const;
    bool tableReplConfigIsSet() const;
    void unsettableReplConfig();
    void setTableReplConfig(const TableReplConfig& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::vector<DbConfig> dbConfigs_;
    bool dbConfigsIsSet_;
    TableReplConfig tableReplConfig_;
    bool tableReplConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfigCheckRequestV3_H_

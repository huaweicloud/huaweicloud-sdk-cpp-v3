
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationConfigByDataBaseResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationConfigByDataBaseResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DataBaseInfo.h>
#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/TableReplConfig.h>
#include <huaweicloud/gaussdb/v3/model/TableConfigCheckResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListStarRocksDataReplicationConfigByDataBaseResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStarRocksDataReplicationConfigByDataBaseResponse();
    virtual ~ListStarRocksDataReplicationConfigByDataBaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStarRocksDataReplicationConfigByDataBaseResponse members

    /// <summary>
    /// GaussDB(for MySQL)实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// GaussDB(for MySQL)节点ID。
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DataBaseInfo getDatabaseInfo() const;
    bool databaseInfoIsSet() const;
    void unsetdatabaseInfo();
    void setDatabaseInfo(const DataBaseInfo& value);

    /// <summary>
    /// 表配置信息。
    /// </summary>

    std::vector<TableConfigCheckResult>& getTableInfos();
    bool tableInfosIsSet() const;
    void unsettableInfos();
    void setTableInfos(const std::vector<TableConfigCheckResult>& value);

    /// <summary>
    /// 
    /// </summary>

    TableReplConfig getTableReplConfig() const;
    bool tableReplConfigIsSet() const;
    void unsettableReplConfig();
    void setTableReplConfig(const TableReplConfig& value);

    /// <summary>
    /// 
    /// </summary>

    TableReplConfig getNewTableReplConfig() const;
    bool newTableReplConfigIsSet() const;
    void unsetnewTableReplConfig();
    void setNewTableReplConfig(const TableReplConfig& value);

    /// <summary>
    /// 目标数据库名。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// 同步任务表是否变化。
    /// </summary>

    bool isIsTablesChange() const;
    bool isTablesChangeIsSet() const;
    void unsetisTablesChange();
    void setIsTablesChange(bool value);

    /// <summary>
    /// 最近一次alter table的异常信息。
    /// </summary>

    std::string getLastErrorOfAlterTable() const;
    bool lastErrorOfAlterTableIsSet() const;
    void unsetlastErrorOfAlterTable();
    void setLastErrorOfAlterTable(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    DataBaseInfo databaseInfo_;
    bool databaseInfoIsSet_;
    std::vector<TableConfigCheckResult> tableInfos_;
    bool tableInfosIsSet_;
    TableReplConfig tableReplConfig_;
    bool tableReplConfigIsSet_;
    TableReplConfig newTableReplConfig_;
    bool newTableReplConfigIsSet_;
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    bool isTablesChange_;
    bool isTablesChangeIsSet_;
    std::string lastErrorOfAlterTable_;
    bool lastErrorOfAlterTableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationConfigByDataBaseResponse_H_


#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckChDatabaseTableConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckChDatabaseTableConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/ChDatabaseTablesConfigsInfo.h>
#include <huaweicloud/gaussdb/v3/model/ChDatabaseConfigsInfo.h>
#include <huaweicloud/gaussdb/v3/model/ChDatabaseTableReplConfigInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 表配置校验请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckChDatabaseTableConfigRequestBody
    : public ModelBase
{
public:
    CheckChDatabaseTableConfigRequestBody();
    virtual ~CheckChDatabaseTableConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckChDatabaseTableConfigRequestBody members

    /// <summary>
    /// 源实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// 源节点ID。TaurusDB只读节点ID。如为空，则取TaurusDB主节点ID。
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// 源数据库名。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// 库配置列表。
    /// </summary>

    std::vector<ChDatabaseConfigsInfo>& getDbConfigs();
    bool dbConfigsIsSet() const;
    void unsetdbConfigs();
    void setDbConfigs(const std::vector<ChDatabaseConfigsInfo>& value);

    /// <summary>
    /// 表配置信息。
    /// </summary>

    std::vector<ChDatabaseTablesConfigsInfo>& getTablesConfigs();
    bool tablesConfigsIsSet() const;
    void unsettablesConfigs();
    void setTablesConfigs(const std::vector<ChDatabaseTablesConfigsInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ChDatabaseTableReplConfigInfo getTableReplConfig() const;
    bool tableReplConfigIsSet() const;
    void unsettableReplConfig();
    void setTableReplConfig(const ChDatabaseTableReplConfigInfo& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::vector<ChDatabaseConfigsInfo> dbConfigs_;
    bool dbConfigsIsSet_;
    std::vector<ChDatabaseTablesConfigsInfo> tablesConfigs_;
    bool tablesConfigsIsSet_;
    ChDatabaseTableReplConfigInfo tableReplConfig_;
    bool tableReplConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckChDatabaseTableConfigRequestBody_H_

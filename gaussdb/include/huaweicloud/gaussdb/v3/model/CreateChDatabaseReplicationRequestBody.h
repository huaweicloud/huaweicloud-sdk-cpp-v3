
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChDatabaseReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChDatabaseReplicationRequestBody_H_


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
/// ClickHouse创建数据同步请求。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChDatabaseReplicationRequestBody
    : public ModelBase
{
public:
    CreateChDatabaseReplicationRequestBody();
    virtual ~CreateChDatabaseReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChDatabaseReplicationRequestBody members

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
    /// 源数据库。
    /// </summary>

    std::string getSourceDatabase() const;
    bool sourceDatabaseIsSet() const;
    void unsetsourceDatabase();
    void setSourceDatabase(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string sourceDatabase_;
    bool sourceDatabaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChDatabaseReplicationRequestBody_H_


#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_CreateTableResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_CreateTableResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Secondary_index.h>
#include <huaweicloud/kvs/v1/model/Provisioned_throughput.h>
#include <huaweicloud/kvs/v1/model/Primary_key_schema.h>
#include <huaweicloud/kvs/v1/model/Pre_split_key_options.h>
#include <huaweicloud/kvs/v1/model/Ttl_specification.h>
#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Global_secondary_index.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  CreateTableResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTableResponse();
    virtual ~CreateTableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// CreateTableResponse members

    /// <summary>
    /// 表名，仓内唯一。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 计费模式，可为\&quot;provisioned\&quot;或\&quot;on_demand\&quot;
    /// </summary>

    std::string getBillMode() const;
    bool billModeIsSet() const;
    void unsetbillMode();
    void setBillMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Provisioned_throughput getProvisionedThroughput() const;
    bool provisionedThroughputIsSet() const;
    void unsetprovisionedThroughput();
    void setProvisionedThroughput(const Provisioned_throughput& value);

    /// <summary>
    /// 
    /// </summary>

    Primary_key_schema getPrimaryKeySchema() const;
    bool primaryKeySchemaIsSet() const;
    void unsetprimaryKeySchema();
    void setPrimaryKeySchema(const Primary_key_schema& value);

    /// <summary>
    /// 本地二级索引模板，可以多个。
    /// </summary>

    std::vector<Secondary_index>& getLocalSecondaryIndexSchema();
    bool localSecondaryIndexSchemaIsSet() const;
    void unsetlocalSecondaryIndexSchema();
    void setLocalSecondaryIndexSchema(const std::vector<Secondary_index>& value);

    /// <summary>
    /// 全局二级索引模板。
    /// </summary>

    std::vector<Global_secondary_index>& getGlobalSecondaryIndexSchema();
    bool globalSecondaryIndexSchemaIsSet() const;
    void unsetglobalSecondaryIndexSchema();
    void setGlobalSecondaryIndexSchema(const std::vector<Global_secondary_index>& value);

    /// <summary>
    /// 
    /// </summary>

    Pre_split_key_options getPreSplitKeyOptions() const;
    bool preSplitKeyOptionsIsSet() const;
    void unsetpreSplitKeyOptions();
    void setPreSplitKeyOptions(const Pre_split_key_options& value);

    /// <summary>
    /// 
    /// </summary>

    Ttl_specification getTtlSpecification() const;
    bool ttlSpecificationIsSet() const;
    void unsetttlSpecification();
    void setTtlSpecification(const Ttl_specification& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string billMode_;
    bool billModeIsSet_;
    Provisioned_throughput provisionedThroughput_;
    bool provisionedThroughputIsSet_;
    Primary_key_schema primaryKeySchema_;
    bool primaryKeySchemaIsSet_;
    std::vector<Secondary_index> localSecondaryIndexSchema_;
    bool localSecondaryIndexSchemaIsSet_;
    std::vector<Global_secondary_index> globalSecondaryIndexSchema_;
    bool globalSecondaryIndexSchemaIsSet_;
    Pre_split_key_options preSplitKeyOptions_;
    bool preSplitKeyOptionsIsSet_;
    Ttl_specification ttlSpecification_;
    bool ttlSpecificationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_CreateTableResponse_H_

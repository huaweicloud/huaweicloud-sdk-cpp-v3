
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_DescribeTableResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_DescribeTableResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Secondary_index.h>
#include <huaweicloud/kvs/v1/model/Primary_key_schema.h>
#include <string>
#include <huaweicloud/kvs/v1/model/Run_time_info.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  DescribeTableResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribeTableResponse();
    virtual ~DescribeTableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// DescribeTableResponse members

    /// <summary>
    /// 表名。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

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

    Run_time_info getRunTimeInfo() const;
    bool runTimeInfoIsSet() const;
    void unsetrunTimeInfo();
    void setRunTimeInfo(const Run_time_info& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Primary_key_schema primaryKeySchema_;
    bool primaryKeySchemaIsSet_;
    std::vector<Secondary_index> localSecondaryIndexSchema_;
    bool localSecondaryIndexSchemaIsSet_;
    std::vector<Global_secondary_index> globalSecondaryIndexSchema_;
    bool globalSecondaryIndexSchemaIsSet_;
    Run_time_info runTimeInfo_;
    bool runTimeInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_DescribeTableResponse_H_

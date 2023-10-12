
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_DescribeTableResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_DescribeTableResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/GsiIndex.h>
#include <huaweicloud/kvs/v1/model/LsiIndex.h>
#include <string>
#include <huaweicloud/kvs/v1/model/RuntimeInfo.h>
#include <huaweicloud/kvs/v1/model/PrimaryKeySchema.h>
#include <vector>

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
    /// 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrimaryKeySchema getPrimaryKeySchema() const;
    bool primaryKeySchemaIsSet() const;
    void unsetprimaryKeySchema();
    void setPrimaryKeySchema(const PrimaryKeySchema& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<LsiIndex>& getLocal2ndIndexSchema();
    bool local2ndIndexSchemaIsSet() const;
    void unsetlocal2ndIndexSchema();
    void setLocal2ndIndexSchema(const std::vector<LsiIndex>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<GsiIndex>& getGlobal2ndIndexSchema();
    bool global2ndIndexSchemaIsSet() const;
    void unsetglobal2ndIndexSchema();
    void setGlobal2ndIndexSchema(const std::vector<GsiIndex>& value);

    /// <summary>
    /// 
    /// </summary>

    RuntimeInfo getRuntimeInfo() const;
    bool runtimeInfoIsSet() const;
    void unsetruntimeInfo();
    void setRuntimeInfo(const RuntimeInfo& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    PrimaryKeySchema primaryKeySchema_;
    bool primaryKeySchemaIsSet_;
    std::vector<LsiIndex> local2ndIndexSchema_;
    bool local2ndIndexSchemaIsSet_;
    std::vector<GsiIndex> global2ndIndexSchema_;
    bool global2ndIndexSchemaIsSet_;
    RuntimeInfo runtimeInfo_;
    bool runtimeInfoIsSet_;

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

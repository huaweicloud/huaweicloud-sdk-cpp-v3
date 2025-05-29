
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Batch_get_kv_of_table_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Batch_get_kv_of_table_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Get_oper.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单个表的所有kv操作。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Batch_get_kv_of_table
    : public ModelBase
{
public:
    Batch_get_kv_of_table();
    virtual ~Batch_get_kv_of_table();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Batch_get_kv_of_table members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 行操作数组，行操作类型可以是多个文档的get。
    /// </summary>

    std::vector<Get_oper>& getGetKvOpers();
    bool getKvOpersIsSet() const;
    void unsetgetKvOpers();
    void setGetKvOpers(const std::vector<Get_oper>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<Get_oper> getKvOpers_;
    bool getKvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Batch_get_kv_of_table_H_

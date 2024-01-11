
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_oper_ids_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_oper_ids_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Kv_oper_ids.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 某个表的行操作数组， 可以是多个文档的_put_kv或delete_kv。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Table_oper_ids
    : public ModelBase
{
public:
    Table_oper_ids();
    virtual ~Table_oper_ids();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Table_oper_ids members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Kv_oper_ids getKvOperIds() const;
    bool kvOperIdsIsSet() const;
    void unsetkvOperIds();
    void setKvOperIds(const Kv_oper_ids& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Kv_oper_ids kvOperIds_;
    bool kvOperIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_oper_ids_H_

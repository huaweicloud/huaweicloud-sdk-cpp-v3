
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_batch_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_batch_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Oper_item.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Table_batch
    : public ModelBase
{
public:
    Table_batch();
    virtual ~Table_batch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Table_batch members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// kv操作数组。
    /// </summary>

    std::vector<Oper_item>& getKvOpers();
    bool kvOpersIsSet() const;
    void unsetkvOpers();
    void setKvOpers(const std::vector<Oper_item>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<Oper_item> kvOpers_;
    bool kvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_batch_H_

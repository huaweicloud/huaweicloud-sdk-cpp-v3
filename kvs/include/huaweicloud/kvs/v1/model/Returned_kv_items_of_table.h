
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_kv_items_of_table_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_kv_items_of_table_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Returned_kv_item.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Returned_kv_items_of_table
    : public ModelBase
{
public:
    Returned_kv_items_of_table();
    virtual ~Returned_kv_items_of_table();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Returned_kv_items_of_table members

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

    std::vector<Returned_kv_item>& getReturnedKvItems();
    bool returnedKvItemsIsSet() const;
    void unsetreturnedKvItems();
    void setReturnedKvItems(const std::vector<Returned_kv_item>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<Returned_kv_item> returnedKvItems_;
    bool returnedKvItemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_kv_items_of_table_H_

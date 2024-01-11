
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Trans_get_kv_of_table_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Trans_get_kv_of_table_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/Projection_blob.h>
#include <vector>
#include <huaweicloud/kvs/v1/model/Get_kv.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Trans_get_kv_of_table
    : public ModelBase
{
public:
    Trans_get_kv_of_table();
    virtual ~Trans_get_kv_of_table();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Trans_get_kv_of_table members

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

    std::vector<Get_kv>& getGetKvOpers();
    bool getKvOpersIsSet() const;
    void unsetgetKvOpers();
    void setGetKvOpers(const std::vector<Get_kv>& value);

    /// <summary>
    /// 对kv_doc有效，返回哪些字段列表，默认全部。
    /// </summary>

    std::vector<std::string>& getProjectionFields();
    bool projectionFieldsIsSet() const;
    void unsetprojectionFields();
    void setProjectionFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Projection_blob getProjectionBlob() const;
    bool projectionBlobIsSet() const;
    void unsetprojectionBlob();
    void setProjectionBlob(const Projection_blob& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<Get_kv> getKvOpers_;
    bool getKvOpersIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    Projection_blob projectionBlob_;
    bool projectionBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Trans_get_kv_of_table_H_

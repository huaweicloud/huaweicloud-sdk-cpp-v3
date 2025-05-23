
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_blob_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_blob_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Kv_blob
    : public ModelBase
{
public:
    Kv_blob();
    virtual ~Kv_blob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Kv_blob members

    /// <summary>
    /// 用户自定义的主键名及值。 &gt; 内容字段：主键字段名和值，组合索引多个元素。
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

    /// <summary>
    /// 属性信息，最大2kb。
    /// </summary>

    BsonBinary getXblob() const;
    bool xblobIsSet() const;
    void unsetxblob();
    void setXblob(const BsonBinary& value);

    /// <summary>
    /// 非结构化数据内容。
    /// </summary>

    BsonBinary getXattr() const;
    bool xattrIsSet() const;
    void unsetxattr();
    void setXattr(const BsonBinary& value);


protected:
    Document primaryKey_;
    bool primaryKeyIsSet_;
    BsonBinary xblob_;
    bool xblobIsSet_;
    BsonBinary xattr_;
    bool xattrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_blob_H_

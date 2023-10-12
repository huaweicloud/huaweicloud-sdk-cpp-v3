
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_KvBlobData_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_KvBlobData_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  KvBlobData
    : public ModelBase
{
public:
    KvBlobData();
    virtual ~KvBlobData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// KvBlobData members

    /// <summary>
    /// 
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getTotalBytes() const;
    bool totalBytesIsSet() const;
    void unsettotalBytes();
    void setTotalBytes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLen() const;
    bool lenIsSet() const;
    void unsetlen();
    void setLen(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    BsonBinary getBlobdata() const;
    bool blobdataIsSet() const;
    void unsetblobdata();
    void setBlobdata(const BsonBinary& value);

    /// <summary>
    /// 
    /// </summary>

    BsonBinary getXattr() const;
    bool xattrIsSet() const;
    void unsetxattr();
    void setXattr(const BsonBinary& value);


protected:
    Document primaryKey_;
    bool primaryKeyIsSet_;
    int32_t totalBytes_;
    bool totalBytesIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t len_;
    bool lenIsSet_;
    BsonBinary blobdata_;
    bool blobdataIsSet_;
    BsonBinary xattr_;
    bool xattrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_KvBlobData_H_

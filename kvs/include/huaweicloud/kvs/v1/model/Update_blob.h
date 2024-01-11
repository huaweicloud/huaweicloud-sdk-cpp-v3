
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_blob_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_blob_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  Update_blob
    : public ModelBase
{
public:
    Update_blob();
    virtual ~Update_blob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Update_blob members

    /// <summary>
    /// 属性信息。
    /// </summary>

    BsonBinary getXattr() const;
    bool xattrIsSet() const;
    void unsetxattr();
    void setXattr(const BsonBinary& value);

    /// <summary>
    /// value部分的偏移位置。 &gt; - 超过value当前size无效 &gt; - \&quot;offset\&quot;与\&quot;len\&quot;与\&quot;blob_data\&quot; 要么都带，要么都不带。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 更新内容长度。
    /// </summary>

    int32_t getLen() const;
    bool lenIsSet() const;
    void unsetlen();
    void setLen(int32_t value);

    /// <summary>
    /// 二进制内容。
    /// </summary>

    BsonBinary getBlobData() const;
    bool blobDataIsSet() const;
    void unsetblobData();
    void setBlobData(const BsonBinary& value);


protected:
    BsonBinary xattr_;
    bool xattrIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t len_;
    bool lenIsSet_;
    BsonBinary blobData_;
    bool blobDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_blob_H_

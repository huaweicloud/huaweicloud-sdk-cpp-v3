
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateBlobAttr_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateBlobAttr_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  UpdateBlobAttr
    : public ModelBase
{
public:
    UpdateBlobAttr();
    virtual ~UpdateBlobAttr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// UpdateBlobAttr members

    /// <summary>
    /// 
    /// </summary>

    BsonBinary getXattr() const;
    bool xattrIsSet() const;
    void unsetxattr();
    void setXattr(const BsonBinary& value);


protected:
    BsonBinary xattr_;
    bool xattrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateBlobAttr_H_


#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Kv_blob_attr.h>
#include <huaweicloud/core/bson/Bson.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  RenameKvResponse
    : public ModelBase, public HttpResponse
{
public:
    RenameKvResponse();
    virtual ~RenameKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// RenameKvResponse members

    /// <summary>
    /// 用户自定义的主键名及值。
    /// </summary>

    Document getOldPrimaryKey() const;
    bool oldPrimaryKeyIsSet() const;
    void unsetoldPrimaryKey();
    void setOldPrimaryKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Kv_blob_attr getKvBlobAttr() const;
    bool kvBlobAttrIsSet() const;
    void unsetkvBlobAttr();
    void setKvBlobAttr(const Kv_blob_attr& value);


protected:
    Document oldPrimaryKey_;
    bool oldPrimaryKeyIsSet_;
    Kv_blob_attr kvBlobAttr_;
    bool kvBlobAttrIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvResponse_H_

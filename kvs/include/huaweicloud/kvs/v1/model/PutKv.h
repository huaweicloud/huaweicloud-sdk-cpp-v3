
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKv_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKv_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/KvBlob.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  PutKv
    : public ModelBase
{
public:
    PutKv();
    virtual ~PutKv();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// PutKv members

    /// <summary>
    /// 
    /// </summary>

    int32_t getOperId() const;
    bool operIdIsSet() const;
    void unsetoperId();
    void setOperId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Document getKvDoc() const;
    bool kvDocIsSet() const;
    void unsetkvDoc();
    void setKvDoc(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    KvBlob getKvBlob() const;
    bool kvBlobIsSet() const;
    void unsetkvBlob();
    void setKvBlob(const KvBlob& value);


protected:
    int32_t operId_;
    bool operIdIsSet_;
    Document kvDoc_;
    bool kvDocIsSet_;
    KvBlob kvBlob_;
    bool kvBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKv_H_

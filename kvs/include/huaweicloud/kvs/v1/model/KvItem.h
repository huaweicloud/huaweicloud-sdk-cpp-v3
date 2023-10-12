
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_KvItem_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_KvItem_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>
#include <huaweicloud/kvs/v1/model/KvBlobData.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  KvItem
    : public ModelBase
{
public:
    KvItem();
    virtual ~KvItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// KvItem members

    /// <summary>
    /// 
    /// </summary>

    KvBlobData getKvBlobData() const;
    bool kvBlobDataIsSet() const;
    void unsetkvBlobData();
    void setKvBlobData(const KvBlobData& value);

    /// <summary>
    /// 
    /// </summary>

    Document getKvDoc() const;
    bool kvDocIsSet() const;
    void unsetkvDoc();
    void setKvDoc(const Document& value);


protected:
    KvBlobData kvBlobData_;
    bool kvBlobDataIsSet_;
    Document kvDoc_;
    bool kvDocIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_KvItem_H_


#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Oper_item_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Oper_item_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Put_kv.h>
#include <huaweicloud/kvs/v1/model/Delete_kv.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// put_kv或delete_kv或get_kv操作。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Oper_item
    : public ModelBase
{
public:
    Oper_item();
    virtual ~Oper_item();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Oper_item members

    /// <summary>
    /// 
    /// </summary>

    Put_kv getPutKv() const;
    bool putKvIsSet() const;
    void unsetputKv();
    void setPutKv(const Put_kv& value);

    /// <summary>
    /// 
    /// </summary>

    Delete_kv getDeleteKv() const;
    bool deleteKvIsSet() const;
    void unsetdeleteKv();
    void setDeleteKv(const Delete_kv& value);


protected:
    Put_kv putKv_;
    bool putKvIsSet_;
    Delete_kv deleteKv_;
    bool deleteKvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Oper_item_H_

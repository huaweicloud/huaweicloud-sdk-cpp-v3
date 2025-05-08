
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_oper_ids_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_oper_ids_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Kv_oper_ids
    : public ModelBase
{
public:
    Kv_oper_ids();
    virtual ~Kv_oper_ids();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Kv_oper_ids members

    /// <summary>
    /// 上传kv操作, \&quot;oper_id\&quot;数组。 - 数组元素：请求内的操作编码，未成功的操作返回该标识。
    /// </summary>

    std::vector<int32_t>& getPutKvIds();
    bool putKvIdsIsSet() const;
    void unsetputKvIds();
    void setPutKvIds(std::vector<int32_t> value);

    /// <summary>
    /// 请求内的操作编码，未成功的操作返回该标识。 - 数组元素：请求内的操作编码，未成功的操作返回该标识。
    /// </summary>

    std::vector<int32_t>& getDeleteKvIds();
    bool deleteKvIdsIsSet() const;
    void unsetdeleteKvIds();
    void setDeleteKvIds(std::vector<int32_t> value);

    /// <summary>
    /// 请求内的操作编码，未成功的操作返回该标识。 - 数组元素：请求内的操作编码，未成功的操作返回该标识。
    /// </summary>

    std::vector<int32_t>& getUpdateKvIds();
    bool updateKvIdsIsSet() const;
    void unsetupdateKvIds();
    void setUpdateKvIds(std::vector<int32_t> value);


protected:
    std::vector<int32_t> putKvIds_;
    bool putKvIdsIsSet_;
    std::vector<int32_t> deleteKvIds_;
    bool deleteKvIdsIsSet_;
    std::vector<int32_t> updateKvIds_;
    bool updateKvIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Kv_oper_ids_H_

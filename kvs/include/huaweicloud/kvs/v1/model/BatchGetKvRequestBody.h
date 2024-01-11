
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Batch_get_kv_of_table.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  BatchGetKvRequestBody
    : public ModelBase
{
public:
    BatchGetKvRequestBody();
    virtual ~BatchGetKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// BatchGetKvRequestBody members

    /// <summary>
    /// 按照table分类组织的get操作。
    /// </summary>

    std::vector<Batch_get_kv_of_table>& getBatchGetKvOpers();
    bool batchGetKvOpersIsSet() const;
    void unsetbatchGetKvOpers();
    void setBatchGetKvOpers(const std::vector<Batch_get_kv_of_table>& value);


protected:
    std::vector<Batch_get_kv_of_table> batchGetKvOpers_;
    bool batchGetKvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_

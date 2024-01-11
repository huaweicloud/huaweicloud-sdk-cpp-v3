
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Table_batch.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  BatchWriteKvRequestBody
    : public ModelBase
{
public:
    BatchWriteKvRequestBody();
    virtual ~BatchWriteKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// BatchWriteKvRequestBody members

    /// <summary>
    /// 行操作数组，可以是多个表的操作。
    /// </summary>

    std::vector<Table_batch>& getTableOpers();
    bool tableOpersIsSet() const;
    void unsettableOpers();
    void setTableOpers(const std::vector<Table_batch>& value);


protected:
    std::vector<Table_batch> tableOpers_;
    bool tableOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvRequestBody_H_

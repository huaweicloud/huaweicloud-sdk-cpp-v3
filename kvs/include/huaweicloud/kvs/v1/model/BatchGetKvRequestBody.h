
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/TableBatchGet.h>
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
    /// 
    /// </summary>

    std::vector<TableBatchGet>& getTableOpers();
    bool tableOpersIsSet() const;
    void unsettableOpers();
    void setTableOpers(const std::vector<TableBatchGet>& value);


protected:
    std::vector<TableBatchGet> tableOpers_;
    bool tableOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequestBody_H_

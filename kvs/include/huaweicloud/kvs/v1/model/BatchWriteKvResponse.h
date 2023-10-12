
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/TableOperIds.h>
#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  BatchWriteKvResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchWriteKvResponse();
    virtual ~BatchWriteKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// BatchWriteKvResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TableOperIds>& getUnprocessedOpers();
    bool unprocessedOpersIsSet() const;
    void unsetunprocessedOpers();
    void setUnprocessedOpers(const std::vector<TableOperIds>& value);


protected:
    std::vector<TableOperIds> unprocessedOpers_;
    bool unprocessedOpersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchWriteKvResponse_H_

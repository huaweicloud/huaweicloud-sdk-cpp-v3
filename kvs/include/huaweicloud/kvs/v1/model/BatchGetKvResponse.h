
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/TableBatchItem.h>
#include <huaweicloud/kvs/v1/model/ExceptItem.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  BatchGetKvResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchGetKvResponse();
    virtual ~BatchGetKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// BatchGetKvResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ExceptItem>& getExceptions();
    bool exceptionsIsSet() const;
    void unsetexceptions();
    void setExceptions(const std::vector<ExceptItem>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<TableBatchItem>& getTableKvArray();
    bool tableKvArrayIsSet() const;
    void unsettableKvArray();
    void setTableKvArray(const std::vector<TableBatchItem>& value);


protected:
    std::vector<ExceptItem> exceptions_;
    bool exceptionsIsSet_;
    std::vector<TableBatchItem> tableKvArray_;
    bool tableKvArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_


#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Returned_kv_items_of_table.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  TransactGetKvResponse
    : public ModelBase, public HttpResponse
{
public:
    TransactGetKvResponse();
    virtual ~TransactGetKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TransactGetKvResponse members

    /// <summary>
    /// 返回的kvdoc列表，按照table分类组织。
    /// </summary>

    std::vector<Returned_kv_items_of_table>& getReturnedKvItemsOfAll();
    bool returnedKvItemsOfAllIsSet() const;
    void unsetreturnedKvItemsOfAll();
    void setReturnedKvItemsOfAll(const std::vector<Returned_kv_items_of_table>& value);


protected:
    std::vector<Returned_kv_items_of_table> returnedKvItemsOfAll_;
    bool returnedKvItemsOfAllIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvResponse_H_

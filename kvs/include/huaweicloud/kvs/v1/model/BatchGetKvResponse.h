
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Exception_opers_of_table.h>
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
    /// 异常处理的操作，按照table分类组织。
    /// </summary>

    std::vector<Exception_opers_of_table>& getExceptionOpers();
    bool exceptionOpersIsSet() const;
    void unsetexceptionOpers();
    void setExceptionOpers(const std::vector<Exception_opers_of_table>& value);

    /// <summary>
    /// 返回的kvdoc列表，按照table分类组织。
    /// </summary>

    std::vector<Returned_kv_items_of_table>& getReturnedKvItemsOfAll();
    bool returnedKvItemsOfAllIsSet() const;
    void unsetreturnedKvItemsOfAll();
    void setReturnedKvItemsOfAll(const std::vector<Returned_kv_items_of_table>& value);


protected:
    std::vector<Exception_opers_of_table> exceptionOpers_;
    bool exceptionOpersIsSet_;
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

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvResponse_H_

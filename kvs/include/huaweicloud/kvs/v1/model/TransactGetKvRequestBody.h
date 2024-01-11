
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Trans_get_kv_of_table.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  TransactGetKvRequestBody
    : public ModelBase
{
public:
    TransactGetKvRequestBody();
    virtual ~TransactGetKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TransactGetKvRequestBody members

    /// <summary>
    /// 行操作数组，行操作类型可以是多个文档的查询kv操作
    /// </summary>

    std::vector<Trans_get_kv_of_table>& getKvOpers();
    bool kvOpersIsSet() const;
    void unsetkvOpers();
    void setKvOpers(const std::vector<Trans_get_kv_of_table>& value);


protected:
    std::vector<Trans_get_kv_of_table> kvOpers_;
    bool kvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactGetKvRequestBody_H_

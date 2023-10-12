
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyProxyWeightRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyProxyWeightRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ModifyProxyWeightReadonlyNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// proxy实例修改权重请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusModifyProxyWeightRequest
    : public ModelBase
{
public:
    TaurusModifyProxyWeightRequest();
    virtual ~TaurusModifyProxyWeightRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusModifyProxyWeightRequest members

    /// <summary>
    /// 主节点权重
    /// </summary>

    int32_t getMasterWeight() const;
    bool masterWeightIsSet() const;
    void unsetmasterWeight();
    void setMasterWeight(int32_t value);

    /// <summary>
    /// 只读节点权重配置信息
    /// </summary>

    std::vector<ModifyProxyWeightReadonlyNode>& getReadonlyNodes();
    bool readonlyNodesIsSet() const;
    void unsetreadonlyNodes();
    void setReadonlyNodes(const std::vector<ModifyProxyWeightReadonlyNode>& value);


protected:
    int32_t masterWeight_;
    bool masterWeightIsSet_;
    std::vector<ModifyProxyWeightReadonlyNode> readonlyNodes_;
    bool readonlyNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusModifyProxyWeightRequest_H_


#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyWeightReadonlyNode_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyWeightReadonlyNode_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 只读节点权重信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyProxyWeightReadonlyNode
    : public ModelBase
{
public:
    ModifyProxyWeightReadonlyNode();
    virtual ~ModifyProxyWeightReadonlyNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyProxyWeightReadonlyNode members

    /// <summary>
    /// 只读节点ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 只读节点权重
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyWeightReadonlyNode_H_

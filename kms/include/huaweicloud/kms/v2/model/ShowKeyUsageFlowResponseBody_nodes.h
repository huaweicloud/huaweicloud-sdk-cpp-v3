
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_nodes_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_nodes_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyUsageFlowResponseBody_nodes
    : public ModelBase
{
public:
    ShowKeyUsageFlowResponseBody_nodes();
    virtual ~ShowKeyUsageFlowResponseBody_nodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyUsageFlowResponseBody_nodes members

    /// <summary>
    /// **参数解释：** 密钥节点 **取值范围：** 不涉及
    /// </summary>

    Object getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const Object& value);


protected:
    Object key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_nodes_H_

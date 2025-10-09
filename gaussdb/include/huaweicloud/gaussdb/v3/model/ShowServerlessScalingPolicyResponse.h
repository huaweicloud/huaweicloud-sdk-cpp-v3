
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessScalingPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessScalingPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/CustomScalingConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowServerlessScalingPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerlessScalingPolicyResponse();
    virtual ~ShowServerlessScalingPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerlessScalingPolicyResponse members

    /// <summary>
    /// **参数描述**：  自定义扩容步长。  **约束限制**：  不涉及。  **取值范围**：  2-算力上限的一半。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEnlargeStepSize() const;
    bool enlargeStepSizeIsSet() const;
    void unsetenlargeStepSize();
    void setEnlargeStepSize(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomScalingConfig getCustomScalingConfig() const;
    bool customScalingConfigIsSet() const;
    void unsetcustomScalingConfig();
    void setCustomScalingConfig(const CustomScalingConfig& value);


protected:
    std::string enlargeStepSize_;
    bool enlargeStepSizeIsSet_;
    CustomScalingConfig customScalingConfig_;
    bool customScalingConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowServerlessScalingPolicyResponse_H_

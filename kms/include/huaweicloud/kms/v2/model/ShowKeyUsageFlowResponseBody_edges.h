
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_edges_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_edges_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyUsageFlowResponseBody_edges
    : public ModelBase
{
public:
    ShowKeyUsageFlowResponseBody_edges();
    virtual ~ShowKeyUsageFlowResponseBody_edges();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyUsageFlowResponseBody_edges members

    /// <summary>
    /// **参数解释：** 边起点节点ID **取值范围：** 不涉及
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 边终点节点ID **取值范围：** 不涉及
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponseBody_edges_H_

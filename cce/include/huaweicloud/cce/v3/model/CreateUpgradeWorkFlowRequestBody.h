
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateUpgradeWorkFlowRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateUpgradeWorkFlowRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/WorkFlowSpec.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateUpgradeWorkFlowRequestBody
    : public ModelBase
{
public:
    CreateUpgradeWorkFlowRequestBody();
    virtual ~CreateUpgradeWorkFlowRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUpgradeWorkFlowRequestBody members

    /// <summary>
    /// API类型，固定值“WorkFlowTask”，该值不可修改。 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”，该值不可修改。 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkFlowSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const WorkFlowSpec& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    WorkFlowSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateUpgradeWorkFlowRequestBody_H_

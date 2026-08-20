
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointAuthorizationBody_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointAuthorizationBody_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 鉴权信息。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  EndpointAuthorizationBody
    : public ModelBase
{
public:
    EndpointAuthorizationBody();
    virtual ~EndpointAuthorizationBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointAuthorizationBody members

    /// <summary>
    /// **参数解释**： 鉴权参数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    Object getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const Object& value);

    /// <summary>
    /// **参数解释**： 鉴权模式。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getScheme() const;
    bool schemeIsSet() const;
    void unsetscheme();
    void setScheme(const std::string& value);


protected:
    Object parameters_;
    bool parametersIsSet_;
    std::string scheme_;
    bool schemeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointAuthorizationBody_H_

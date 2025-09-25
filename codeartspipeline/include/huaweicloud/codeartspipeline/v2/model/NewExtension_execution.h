
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_execution_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_execution_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 插件类型。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  NewExtension_execution
    : public ModelBase
{
public:
    NewExtension_execution();
    virtual ~NewExtension_execution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NewExtension_execution members

    /// <summary>
    /// **参数解释**： 插件类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： sha256。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);


protected:
    std::string target_;
    bool targetIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string sha256_;
    bool sha256IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_execution_H_

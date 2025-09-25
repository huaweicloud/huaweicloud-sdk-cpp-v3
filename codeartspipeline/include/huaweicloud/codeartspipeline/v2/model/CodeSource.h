
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/CodeSource_params.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CodeSource
    : public ModelBase
{
public:
    CodeSource();
    virtual ~CodeSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodeSource members

    /// <summary>
    /// **参数解释**： 流水线源类型，目前支持“code”、“artifact”等代码源类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CodeSource_params getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const CodeSource_params& value);


protected:
    std::string type_;
    bool typeIsSet_;
    CodeSource_params params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_H_

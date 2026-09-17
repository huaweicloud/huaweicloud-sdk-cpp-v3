
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_related_pipelines_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_related_pipelines_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  QueryVariableGroupDetailResp_related_pipelines
    : public ModelBase
{
public:
    QueryVariableGroupDetailResp_related_pipelines();
    virtual ~QueryVariableGroupDetailResp_related_pipelines();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryVariableGroupDetailResp_related_pipelines members

    /// <summary>
    /// **参数解释**： 流水线ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_related_pipelines_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTagResp_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTagResp_H_


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
/// **参数解释**： 标签响应体。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineTagResp
    : public ModelBase
{
public:
    PipelineTagResp();
    virtual ~PipelineTagResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineTagResp members

    /// <summary>
    /// **参数解释**： 标签ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getTagId() const;
    bool tagIdIsSet() const;
    void unsettagId();
    void setTagId(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签颜色。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::string tagId_;
    bool tagIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTagResp_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowVariableGroupDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowVariableGroupDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/QueryVariableGroupDetailResp_related_pipelines.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/QueryVariableGroupDetailResp_variables.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowVariableGroupDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVariableGroupDetailResponse();
    virtual ~ShowVariableGroupDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVariableGroupDetailResponse members

    /// <summary>
    /// **参数解释**： 参数组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数组描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<QueryVariableGroupDetailResp_variables>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<QueryVariableGroupDetailResp_variables>& value);

    /// <summary>
    /// **参数解释**： 关联的流水线。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<QueryVariableGroupDetailResp_related_pipelines>& getRelatedPipelines();
    bool relatedPipelinesIsSet() const;
    void unsetrelatedPipelines();
    void setRelatedPipelines(const std::vector<QueryVariableGroupDetailResp_related_pipelines>& value);

    /// <summary>
    /// **参数解释**： 创建人ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 编辑人ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getUpdaterId() const;
    bool updaterIdIsSet() const;
    void unsetupdaterId();
    void setUpdaterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 编辑人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdaterName() const;
    bool updaterNameIsSet() const;
    void unsetupdaterName();
    void setUpdaterName(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// **参数解释**： 更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<QueryVariableGroupDetailResp_variables> variables_;
    bool variablesIsSet_;
    std::vector<QueryVariableGroupDetailResp_related_pipelines> relatedPipelines_;
    bool relatedPipelinesIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string updaterId_;
    bool updaterIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string updaterName_;
    bool updaterNameIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    int32_t updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowVariableGroupDetailResponse_H_

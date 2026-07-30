
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadataResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadataResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TrainingExperimentResp.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业元信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobMetadataResponse
    : public ModelBase
{
public:
    JobMetadataResponse();
    virtual ~JobMetadataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobMetadataResponse members

    /// <summary>
    /// **参数解释**：训练作业ID，创建成功后由ModelArts生成返回，无需填写。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业名称。 **取值范围**：限制为1-64位只含数字、字母、下划线和中划线的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：指定作业所处的工作空间。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：对训练作业的描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业创建时间戳，单位为毫秒，创建成功后由ModelArts生成返回，无需填写。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**：训练作业创建用户的用户名，创建成功后由ModelArts生成返回，无需填写。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业高级功能配置。
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    TrainingExperimentResp getTrainingExperimentReference() const;
    bool trainingExperimentReferenceIsSet() const;
    void unsettrainingExperimentReference();
    void setTrainingExperimentReference(const TrainingExperimentResp& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    TrainingExperimentResp trainingExperimentReference_;
    bool trainingExperimentReferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadataResponse_H_

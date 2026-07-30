
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法的元数据，描述算法基本信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmMetadata
    : public ModelBase
{
public:
    AlgorithmMetadata();
    virtual ~AlgorithmMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmMetadata members

    /// <summary>
    /// 算法uuid，创建算法时无需填写。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 算法名称。限制为1-64位只含数字、字母、下划线和中划线的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对算法的描述，默认为“NULL”，字符串的长度限制为[0, 256]。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 指定算法所处的工作空间，默认值为“0”。“0” 为默认的工作空间。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 指定算法所属的ai项目，默认值为\&quot;default-ai-project\&quot;。ai项目已下线，无需关注。
    /// </summary>

    std::string getAiProject() const;
    bool aiProjectIsSet() const;
    void unsetaiProject();
    void setAiProject(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string aiProject_;
    bool aiProjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmMetadata_H_

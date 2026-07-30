
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStorage_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStorage_H_


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
/// 工作流出存储信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowStorage
    : public ModelBase
{
public:
    WorkflowStorage();
    virtual ~WorkflowStorage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowStorage members

    /// <summary>
    /// 工作流存储的名称。填写1-64位，只包含英文、数字、下划线（_）和中划线（-），并且以英文开头的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作流存储的类型，当前只支持obs。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 统一存储的根路径，当前只支持OBS路径。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStorage_H_

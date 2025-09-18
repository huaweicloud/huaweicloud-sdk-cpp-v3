
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateConfigsVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateConfigsVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 状态流流转线流转配置信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkflowTemplateConfigsVO
    : public ModelBase
{
public:
    WorkflowTemplateConfigsVO();
    virtual ~WorkflowTemplateConfigsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowTemplateConfigsVO members

    /// <summary>
    /// 操作项配置
    /// </summary>

    std::vector<std::map<std::string, Object>>& getConfigValue();
    bool configValueIsSet() const;
    void unsetconfigValue();
    void setConfigValue(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::vector<std::map<std::string, Object>> configValue_;
    bool configValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateConfigsVO_H_

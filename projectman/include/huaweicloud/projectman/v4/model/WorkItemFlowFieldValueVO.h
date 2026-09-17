
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldValueVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldValueVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
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
/// 工作项字段值
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowFieldValueVO
    : public ModelBase
{
public:
    WorkItemFlowFieldValueVO();
    virtual ~WorkItemFlowFieldValueVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowFieldValueVO members

    /// <summary>
    /// 引用属性名
    /// </summary>

    std::string getRefProp() const;
    bool refPropIsSet() const;
    void unsetrefProp();
    void setRefProp(const std::string& value);

    /// <summary>
    /// 配置值对象列表
    /// </summary>

    std::vector<std::map<std::string, Object>>& getSettingValObject();
    bool settingValObjectIsSet() const;
    void unsetsettingValObject();
    void setSettingValObject(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::string refProp_;
    bool refPropIsSet_;
    std::vector<std::map<std::string, Object>> settingValObject_;
    bool settingValObjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldValueVO_H_

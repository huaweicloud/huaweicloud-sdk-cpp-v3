
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRuleConfigVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRuleConfigVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowFieldConfigVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项流转规则配置
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowRuleConfigVO
    : public ModelBase
{
public:
    WorkItemFlowRuleConfigVO();
    virtual ~WorkItemFlowRuleConfigVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowRuleConfigVO members

    /// <summary>
    /// 规则编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 规则开关
    /// </summary>

    bool isOpen() const;
    bool openIsSet() const;
    void unsetopen();
    void setOpen(bool value);

    /// <summary>
    /// 字段配置值列表
    /// </summary>

    std::vector<WorkItemFlowFieldConfigVO>& getConfigValue();
    bool configValueIsSet() const;
    void unsetconfigValue();
    void setConfigValue(const std::vector<WorkItemFlowFieldConfigVO>& value);


protected:
    std::string code_;
    bool codeIsSet_;
    bool open_;
    bool openIsSet_;
    std::vector<WorkItemFlowFieldConfigVO> configValue_;
    bool configValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowRuleConfigVO_H_

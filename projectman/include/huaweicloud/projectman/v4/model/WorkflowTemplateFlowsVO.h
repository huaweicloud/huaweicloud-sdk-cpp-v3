
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateFlowsVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateFlowsVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkflowTemplateConfigsVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 状态流中流转线信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkflowTemplateFlowsVO
    : public ModelBase
{
public:
    WorkflowTemplateFlowsVO();
    virtual ~WorkflowTemplateFlowsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowTemplateFlowsVO members

    /// <summary>
    /// 流转线编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 流转线名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 流转前校验配置
    /// </summary>

    std::vector<WorkflowTemplateConfigsVO>& getBeforeRuleValidator();
    bool beforeRuleValidatorIsSet() const;
    void unsetbeforeRuleValidator();
    void setBeforeRuleValidator(const std::vector<WorkflowTemplateConfigsVO>& value);

    /// <summary>
    /// 流转中界面配置
    /// </summary>

    std::vector<WorkflowTemplateConfigsVO>& getBeforeRuleConfigs();
    bool beforeRuleConfigsIsSet() const;
    void unsetbeforeRuleConfigs();
    void setBeforeRuleConfigs(const std::vector<WorkflowTemplateConfigsVO>& value);

    /// <summary>
    /// 流转线的入口状态
    /// </summary>

    std::string getFromCode() const;
    bool fromCodeIsSet() const;
    void unsetfromCode();
    void setFromCode(const std::string& value);

    /// <summary>
    /// 流转线的出口状态
    /// </summary>

    std::string getToCode() const;
    bool toCodeIsSet() const;
    void unsettoCode();
    void setToCode(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<WorkflowTemplateConfigsVO> beforeRuleValidator_;
    bool beforeRuleValidatorIsSet_;
    std::vector<WorkflowTemplateConfigsVO> beforeRuleConfigs_;
    bool beforeRuleConfigsIsSet_;
    std::string fromCode_;
    bool fromCodeIsSet_;
    std::string toCode_;
    bool toCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateFlowsVO_H_


#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowNodeConfigVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowNodeConfigVO_H_


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
/// 工作流节点配置
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowNodeConfigVO
    : public ModelBase
{
public:
    WorkItemFlowNodeConfigVO();
    virtual ~WorkItemFlowNodeConfigVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowNodeConfigVO members

    /// <summary>
    /// 节点编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否为结束节点
    /// </summary>

    bool isEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(bool value);

    /// <summary>
    /// 是否为最末节点
    /// </summary>

    bool isLast() const;
    bool lastIsSet() const;
    void unsetlast();
    void setLast(bool value);

    /// <summary>
    /// 是否为开始节点
    /// </summary>

    bool isStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(bool value);

    /// <summary>
    /// 是否允许挂起
    /// </summary>

    bool isEnableSuspend() const;
    bool enableSuspendIsSet() const;
    void unsetenableSuspend();
    void setEnableSuspend(bool value);

    /// <summary>
    /// 节点扩展配置
    /// </summary>

    std::map<std::string, Object>& getExtraConfig();
    bool extraConfigIsSet() const;
    void unsetextraConfig();
    void setExtraConfig(const std::map<std::string, Object>& value);

    /// <summary>
    /// 静态规则列表
    /// </summary>

    std::vector<std::map<std::string, Object>>& getStaticRules();
    bool staticRulesIsSet() const;
    void unsetstaticRules();
    void setStaticRules(const std::vector<std::map<std::string, Object>>& value);

    /// <summary>
    /// 静态动作配置
    /// </summary>

    std::map<std::string, Object>& getStaticActions();
    bool staticActionsIsSet() const;
    void unsetstaticActions();
    void setStaticActions(const std::map<std::string, Object>& value);

    /// <summary>
    /// 是否任意状态可流转
    /// </summary>

    bool isAnyStatus() const;
    bool anyStatusIsSet() const;
    void unsetanyStatus();
    void setAnyStatus(bool value);

    /// <summary>
    /// 提交时是否可操作
    /// </summary>

    bool isSubmitCanOperate() const;
    bool submitCanOperateIsSet() const;
    void unsetsubmitCanOperate();
    void setSubmitCanOperate(bool value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool end_;
    bool endIsSet_;
    bool last_;
    bool lastIsSet_;
    bool start_;
    bool startIsSet_;
    bool enableSuspend_;
    bool enableSuspendIsSet_;
    std::map<std::string, Object> extraConfig_;
    bool extraConfigIsSet_;
    std::vector<std::map<std::string, Object>> staticRules_;
    bool staticRulesIsSet_;
    std::map<std::string, Object> staticActions_;
    bool staticActionsIsSet_;
    bool anyStatus_;
    bool anyStatusIsSet_;
    bool submitCanOperate_;
    bool submitCanOperateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowNodeConfigVO_H_

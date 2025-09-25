
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowTemplateDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowTemplateDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/TemplateState.h>
#include <map>
#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/TemplateParam.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowTemplateDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTemplateDetailResponse();
    virtual ~ShowTemplateDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTemplateDetailResponse members

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 模板名字
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板类型
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名字
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户名字
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 是否内置模板
    /// </summary>

    bool isIsBuildIn() const;
    bool isBuildInIsSet() const;
    void unsetisBuildIn();
    void setIsBuildIn(bool value);

    /// <summary>
    /// 局点
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名字
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    std::string getLastModifyTime() const;
    bool lastModifyTimeIsSet() const;
    void unsetlastModifyTime();
    void setLastModifyTime(const std::string& value);

    /// <summary>
    /// 是否关注
    /// </summary>

    bool isIsWatch() const;
    bool isWatchIsSet() const;
    void unsetisWatch();
    void setIsWatch(bool value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板参数
    /// </summary>

    std::vector<TemplateParam>& getParameter();
    bool parameterIsSet() const;
    void unsetparameter();
    void setParameter(const std::vector<TemplateParam>& value);

    /// <summary>
    /// 编排flow详情，描述流水线内各阶段任务的串并行关系。map类型数据，key为阶段名字，默认第一阶段initial，最后阶段为final，其余名字以&#39;state_数字&#39;标识。value为该阶段内任务(以&#39;Task_数字&#39;标识)以及后续阶段的标识。本字段为描述流水线基础编排数据之一，建议可通过流水线真实界面基于模板创建接口中获取
    /// </summary>

    std::map<std::string, std::map<std::string, std::string>>& getFlow();
    bool flowIsSet() const;
    void unsetflow();
    void setFlow(const std::map<std::string, std::map<std::string, std::string>>& value);

    /// <summary>
    /// 编排State详情，map类型数据。本字段为描述流水线基础编排数据之一，建议可通过流水线真实界面基于模板创建接口中获取
    /// </summary>

    std::map<std::string, TemplateState>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::map<std::string, TemplateState>& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    bool isBuildIn_;
    bool isBuildInIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastModifyTime_;
    bool lastModifyTimeIsSet_;
    bool isWatch_;
    bool isWatchIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<TemplateParam> parameter_;
    bool parameterIsSet_;
    std::map<std::string, std::map<std::string, std::string>> flow_;
    bool flowIsSet_;
    std::map<std::string, TemplateState> states_;
    bool statesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowTemplateDetailResponse_H_

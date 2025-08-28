
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateRoleReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateRoleReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RoleBusinessReq.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/RolePluginConfigInfo.h>
#include <huaweicloud/metastudio/v1/model/LlmSourceEnum.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改角色请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateRoleReq
    : public ModelBase
{
public:
    UpdateRoleReq();
    virtual ~UpdateRoleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRoleReq members

    /// <summary>
    /// 角色名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 角色描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 角色业务配置列表
    /// </summary>

    std::vector<RoleBusinessReq>& getRoleBusinessList();
    bool roleBusinessListIsSet() const;
    void unsetroleBusinessList();
    void setRoleBusinessList(const std::vector<RoleBusinessReq>& value);

    /// <summary>
    /// 
    /// </summary>

    LlmSourceEnum getLlmSource() const;
    bool llmSourceIsSet() const;
    void unsetllmSource();
    void setLlmSource(const LlmSourceEnum& value);

    /// <summary>
    /// 大语言模型配置ID。
    /// </summary>

    std::string getLlmConfigId() const;
    bool llmConfigIdIsSet() const;
    void unsetllmConfigId();
    void setLlmConfigId(const std::string& value);

    /// <summary>
    /// 插件配置列表
    /// </summary>

    std::vector<RolePluginConfigInfo>& getPluginConfigList();
    bool pluginConfigListIsSet() const;
    void unsetpluginConfigList();
    void setPluginConfigList(const std::vector<RolePluginConfigInfo>& value);

    /// <summary>
    /// MCP服务端对接配置ID列表
    /// </summary>

    std::vector<std::string>& getMcpServerIdList();
    bool mcpServerIdListIsSet() const;
    void unsetmcpServerIdList();
    void setMcpServerIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 指令集ID。
    /// </summary>

    std::string getInstructionLibraryId() const;
    bool instructionLibraryIdIsSet() const;
    void unsetinstructionLibraryId();
    void setInstructionLibraryId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<RoleBusinessReq> roleBusinessList_;
    bool roleBusinessListIsSet_;
    LlmSourceEnum llmSource_;
    bool llmSourceIsSet_;
    std::string llmConfigId_;
    bool llmConfigIdIsSet_;
    std::vector<RolePluginConfigInfo> pluginConfigList_;
    bool pluginConfigListIsSet_;
    std::vector<std::string> mcpServerIdList_;
    bool mcpServerIdListIsSet_;
    std::string instructionLibraryId_;
    bool instructionLibraryIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateRoleReq_H_

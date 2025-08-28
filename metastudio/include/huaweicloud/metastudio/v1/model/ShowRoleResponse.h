
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowRoleResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowRoleResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/McpServerBaseInfo.h>
#include <huaweicloud/metastudio/v1/model/RoleBusinessInfo.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowRoleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRoleResponse();
    virtual ~ShowRoleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRoleResponse members

    /// <summary>
    /// 角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

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
    /// 角色业务配置列表。
    /// </summary>

    std::vector<RoleBusinessInfo>& getRoleBusinessList();
    bool roleBusinessListIsSet() const;
    void unsetroleBusinessList();
    void setRoleBusinessList(const std::vector<RoleBusinessInfo>& value);

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
    /// MCP服务端对接配置信息列表
    /// </summary>

    std::vector<McpServerBaseInfo>& getMcpServerInfoList();
    bool mcpServerInfoListIsSet() const;
    void unsetmcpServerInfoList();
    void setMcpServerInfoList(const std::vector<McpServerBaseInfo>& value);

    /// <summary>
    /// 指令集ID。
    /// </summary>

    std::string getInstructionLibraryId() const;
    bool instructionLibraryIdIsSet() const;
    void unsetinstructionLibraryId();
    void setInstructionLibraryId(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<RoleBusinessInfo> roleBusinessList_;
    bool roleBusinessListIsSet_;
    LlmSourceEnum llmSource_;
    bool llmSourceIsSet_;
    std::string llmConfigId_;
    bool llmConfigIdIsSet_;
    std::vector<RolePluginConfigInfo> pluginConfigList_;
    bool pluginConfigListIsSet_;
    std::vector<McpServerBaseInfo> mcpServerInfoList_;
    bool mcpServerInfoListIsSet_;
    std::string instructionLibraryId_;
    bool instructionLibraryIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowRoleResponse_H_

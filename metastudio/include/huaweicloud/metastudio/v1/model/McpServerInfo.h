
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// MCP服务端对接配置基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  McpServerInfo
    : public ModelBase
{
public:
    McpServerInfo();
    virtual ~McpServerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// McpServerInfo members

    /// <summary>
    /// MCP服务端对接配置ID。
    /// </summary>

    std::string getMcpServerId() const;
    bool mcpServerIdIsSet() const;
    void unsetmcpServerId();
    void setMcpServerId(const std::string& value);

    /// <summary>
    /// MCP服务端对接配置名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// MCP服务端地址。
    /// </summary>

    std::string getMcpServerUrl() const;
    bool mcpServerUrlIsSet() const;
    void unsetmcpServerUrl();
    void setMcpServerUrl(const std::string& value);

    /// <summary>
    /// 鉴权头域名称。
    /// </summary>

    std::string getAuthHeaderName() const;
    bool authHeaderNameIsSet() const;
    void unsetauthHeaderName();
    void setAuthHeaderName(const std::string& value);

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


protected:
    std::string mcpServerId_;
    bool mcpServerIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mcpServerUrl_;
    bool mcpServerUrlIsSet_;
    std::string authHeaderName_;
    bool authHeaderNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerInfo_H_

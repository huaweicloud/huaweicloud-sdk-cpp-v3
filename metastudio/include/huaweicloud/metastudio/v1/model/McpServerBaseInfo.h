
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerBaseInfo_H_


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
/// MCP服务端对接配置基础信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  McpServerBaseInfo
    : public ModelBase
{
public:
    McpServerBaseInfo();
    virtual ~McpServerBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// McpServerBaseInfo members

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


protected:
    std::string mcpServerId_;
    bool mcpServerIdIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_McpServerBaseInfo_H_

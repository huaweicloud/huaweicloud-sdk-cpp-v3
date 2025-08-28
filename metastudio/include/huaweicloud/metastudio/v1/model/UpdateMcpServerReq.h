
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateMcpServerReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateMcpServerReq_H_


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
/// 修改MCP服务端对接配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateMcpServerReq
    : public ModelBase
{
public:
    UpdateMcpServerReq();
    virtual ~UpdateMcpServerReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMcpServerReq members

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


protected:
    std::string name_;
    bool nameIsSet_;
    std::string mcpServerUrl_;
    bool mcpServerUrlIsSet_;
    std::string authHeaderName_;
    bool authHeaderNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateMcpServerReq_H_

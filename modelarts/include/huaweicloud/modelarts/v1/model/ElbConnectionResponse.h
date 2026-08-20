
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ResidualResources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ElbConnectionResponse
    : public ModelBase
{
public:
    ElbConnectionResponse();
    virtual ~ElbConnectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ElbConnectionResponse members

    /// <summary>
    /// **参数解释：** 负载均衡器ID。 **约束限制：**  不涉及。 **取值范围：** 不涉及。 **默认取值：**  不涉及。
    /// </summary>

    std::string getElbId() const;
    bool elbIdIsSet() const;
    void unsetelbId();
    void setElbId(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡器的监听器ID。 **约束限制：**  不涉及。 **取值范围：** 不涉及。 **默认取值：**  不涉及。
    /// </summary>

    std::string getListenerId() const;
    bool listenerIdIsSet() const;
    void unsetlistenerId();
    void setListenerId(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡器的HTTPS监听器是否开启双向认证。 **约束限制：** 仅推理服务协议为HTTPS或WSS时可配置为true，否则忽略该配置 **取值范围：** 不涉及。 **默认取值：** false
    /// </summary>

    bool isMTls() const;
    bool mTlsIsSet() const;
    void unsetmTls();
    void setMTls(bool value);

    /// <summary>
    /// **参数解释：** 负载均衡器的HTTPS监听器配置的客户端证书ID。 **约束限制：** 仅推理服务协议为HTTPS或WSS时可配置，否则忽略该配置 **取值范围：** 不涉及。 **默认取值：**  不涉及。
    /// </summary>

    std::string getCaCertId() const;
    bool caCertIdIsSet() const;
    void unsetcaCertId();
    void setCaCertId(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡器的HTTPS监听器配置的服务端证书ID。 **约束限制：** 仅推理服务协议为HTTPS或WSS时可配置，否则忽略该配置。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServerCertId() const;
    bool serverCertIdIsSet() const;
    void unsetserverCertId();
    void setServerCertId(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡器的HTTPS监听器配置的SNI（服务器名称指示）证书ID列表。 **约束限制：** 仅推理服务协议为HTTPS或WSS时可配置，否则忽略该配置。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getSniCertIds();
    bool sniCertIdsIsSet() const;
    void unsetsniCertIds();
    void setSniCertIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** ELB连接状态。 **约束限制：** 仅在响应中返回，请求中传入不生效。 **取值范围：** - CONNECTING：连接中。 - CONNECTED：已连接。 - CONNECT_FAILED：连接失败。 - DISCONNECTING：断开中 - DISCONNET_FAILED：断开失败 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** ELB连接失败时的错误信息。 **约束限制：** 仅在响应中返回，请求中传入不生效；仅当ELB连接状态为CONNECT_FAILED时返回。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResidualResources getResidualResources() const;
    bool residualResourcesIsSet() const;
    void unsetresidualResources();
    void setResidualResources(const ResidualResources& value);


protected:
    std::string elbId_;
    bool elbIdIsSet_;
    std::string listenerId_;
    bool listenerIdIsSet_;
    bool mTls_;
    bool mTlsIsSet_;
    std::string caCertId_;
    bool caCertIdIsSet_;
    std::string serverCertId_;
    bool serverCertIdIsSet_;
    std::vector<std::string> sniCertIds_;
    bool sniCertIdsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    ResidualResources residualResources_;
    bool residualResourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionResponse_H_

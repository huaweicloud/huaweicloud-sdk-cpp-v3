
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ElbConnectionUpdateRequest
    : public ModelBase
{
public:
    ElbConnectionUpdateRequest();
    virtual ~ElbConnectionUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ElbConnectionUpdateRequest members

    /// <summary>
    /// **参数解释：** 负载均衡器ID。 **约束限制：**  不涉及。 **取值范围：** 不涉及。 **默认取值：**  不涉及。
    /// </summary>

    std::string getElbId() const;
    bool elbIdIsSet() const;
    void unsetelbId();
    void setElbId(const std::string& value);

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
    /// **参数解释：** ELB接入操作。 **约束限制：** 不涉及。 **取值范围：** - RETRY：重试连接（仅当连接状态为CONNECT_FAILED时可用）。 - SYNC_ADDR：同步ELB地址（仅当连接状态为CONNECTED时可用）。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string elbId_;
    bool elbIdIsSet_;
    bool mTls_;
    bool mTlsIsSet_;
    std::string caCertId_;
    bool caCertIdIsSet_;
    std::string serverCertId_;
    bool serverCertIdIsSet_;
    std::vector<std::string> sniCertIds_;
    bool sniCertIdsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ElbConnectionUpdateRequest_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditDO_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  AuditDO
    : public ModelBase
{
public:
    AuditDO();
    virtual ~AuditDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditDO members

    /// <summary>
    /// **参数解释**： 操作ID。  **取值范围**： 不涉及。id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作模块。  **取值范围**： 不涉及。
    /// </summary>

    std::string getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作类型。  **取值范围**： 不涉及。
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作时间。  **取值范围**： 不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作信息。  **取值范围**： 不涉及。
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作数据。  **取值范围**： 不涉及。
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// **参数解释**： 原因。  **取值范围**： 不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作人客户端类型。  **取值范围**： 不涉及。
    /// </summary>

    std::string getUserAgent() const;
    bool userAgentIsSet() const;
    void unsetuserAgent();
    void setUserAgent(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作人。  **取值范围**： 不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作人名字。  **取值范围**： 不涉及。
    /// </summary>

    std::string getOperatorNickName() const;
    bool operatorNickNameIsSet() const;
    void unsetoperatorNickName();
    void setOperatorNickName(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作人租户名。  **取值范围**： 不涉及。
    /// </summary>

    std::string getOperatorTenantName() const;
    bool operatorTenantNameIsSet() const;
    void unsetoperatorTenantName();
    void setOperatorTenantName(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作人IP地址。  **取值范围**： 不涉及。
    /// </summary>

    std::string getIpSource() const;
    bool ipSourceIsSet() const;
    void unsetipSource();
    void setIpSource(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string module_;
    bool moduleIsSet_;
    std::string operation_;
    bool operationIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string info_;
    bool infoIsSet_;
    std::string data_;
    bool dataIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string userAgent_;
    bool userAgentIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string operatorNickName_;
    bool operatorNickNameIsSet_;
    std::string operatorTenantName_;
    bool operatorTenantNameIsSet_;
    std::string ipSource_;
    bool ipSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditDO_H_

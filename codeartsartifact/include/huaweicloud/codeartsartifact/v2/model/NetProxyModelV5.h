
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_NetProxyModelV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_NetProxyModelV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/BasicDOV5.h>
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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  NetProxyModelV5
    : public ModelBase
{
public:
    NetProxyModelV5();
    virtual ~NetProxyModelV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetProxyModelV5 members

    /// <summary>
    /// **参数解释**: 仓库状态。 **取值范围**: active：正常。 delete：删除。 disabled：无效。 view：私有库浏览者。 trash：废弃。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 租户id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**: 区域。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建人id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedUserId() const;
    bool createdUserIdIsSet() const;
    void unsetcreatedUserId();
    void setCreatedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建人。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedUserName() const;
    bool createdUserNameIsSet() const;
    void unsetcreatedUserName();
    void setCreatedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改人id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedUserId() const;
    bool modifiedUserIdIsSet() const;
    void unsetmodifiedUserId();
    void setModifiedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改人。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedUserName() const;
    bool modifiedUserNameIsSet() const;
    void unsetmodifiedUserName();
    void setModifiedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: id。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// **参数解释**: 代理名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// **参数解释**: 域名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**: 端口。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数解释**: 用户名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 密码。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否默认。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(int32_t value);

    /// <summary>
    /// **参数解释**: 备注。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::string createdUserId_;
    bool createdUserIdIsSet_;
    std::string createdUserName_;
    bool createdUserNameIsSet_;
    std::string modifiedUserId_;
    bool modifiedUserIdIsSet_;
    std::string modifiedUserName_;
    bool modifiedUserNameIsSet_;
    int64_t id_;
    bool idIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string host_;
    bool hostIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    int32_t isDefault_;
    bool isDefaultIsSet_;
    std::string remark_;
    bool remarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_NetProxyModelV5_H_

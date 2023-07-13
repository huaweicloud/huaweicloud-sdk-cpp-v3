
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegister_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegister_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AgentRegister
    : public ModelBase
{
public:
    AgentRegister();
    virtual ~AgentRegister();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AgentRegister members

    /// <summary>
    /// 客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 客户端所在的主机名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 客户端所在主机的IP
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// 客户端所在主机的操作系统
    /// </summary>

    std::string getHostOs() const;
    bool hostOsIsSet() const;
    void unsethostOs();
    void setHostOs(const std::string& value);

    /// <summary>
    /// 客户端所在主机的主机别名
    /// </summary>

    std::string getHostNickname() const;
    bool hostNicknameIsSet() const;
    void unsethostNickname();
    void setHostNickname(const std::string& value);

    /// <summary>
    /// 客户端版本
    /// </summary>

    std::string getAgentVersion() const;
    bool agentVersionIsSet() const;
    void unsetagentVersion();
    void setAgentVersion(const std::string& value);

    /// <summary>
    /// 客户端类型，分本地客户端和云上客户端(cloud/native)
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string hostIp_;
    bool hostIpIsSet_;
    std::string hostOs_;
    bool hostOsIsSet_;
    std::string hostNickname_;
    bool hostNicknameIsSet_;
    std::string agentVersion_;
    bool agentVersionIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegister_H_

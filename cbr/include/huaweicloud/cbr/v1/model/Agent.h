
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_Agent_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_Agent_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Path.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  Agent
    : public ModelBase
{
public:
    Agent();
    virtual ~Agent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Agent members

    /// <summary>
    /// 客户端创建时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 客户端更新时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 客户端版本号
    /// </summary>

    std::string getAgentVersion() const;
    bool agentVersionIsSet() const;
    void unsetagentVersion();
    void setAgentVersion(const std::string& value);

    /// <summary>
    /// 客户端类型
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);

    /// <summary>
    /// 客户端所在的主机名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 客户端所在的主机昵称
    /// </summary>

    std::string getHostNickname() const;
    bool hostNicknameIsSet() const;
    void unsethostNickname();
    void setHostNickname(const std::string& value);

    /// <summary>
    /// 客户端所在主机的IP
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// 客户端主机所在的操作系统
    /// </summary>

    std::string getHostOs() const;
    bool hostOsIsSet() const;
    void unsethostOs();
    void setHostOs(const std::string& value);

    /// <summary>
    /// 客户端状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 客户端上次激活时间
    /// </summary>

    utility::datetime getLastActiveTime() const;
    bool lastActiveTimeIsSet() const;
    void unsetlastActiveTime();
    void setLastActiveTime(const utility::datetime& value);

    /// <summary>
    /// 客户端的备份路径
    /// </summary>

    std::vector<Path>& getPaths();
    bool pathsIsSet() const;
    void unsetpaths();
    void setPaths(const std::vector<Path>& value);


protected:
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentVersion_;
    bool agentVersionIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string hostNickname_;
    bool hostNicknameIsSet_;
    std::string hostIp_;
    bool hostIpIsSet_;
    std::string hostOs_;
    bool hostOsIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime lastActiveTime_;
    bool lastActiveTimeIsSet_;
    std::vector<Path> paths_;
    bool pathsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_Agent_H_

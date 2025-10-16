
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AddClusterPortResponse
    : public ModelBase, public HttpResponse
{
public:
    AddClusterPortResponse();
    virtual ~AddClusterPortResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddClusterPortResponse members

    /// <summary>
    /// uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 该端口归属的集群id
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 租户的elbId
    /// </summary>

    std::string getElbId() const;
    bool elbIdIsSet() const;
    void unsetelbId();
    void setElbId(const std::string& value);

    /// <summary>
    /// 租户的elb的ip
    /// </summary>

    std::string getElbIp() const;
    bool elbIpIsSet() const;
    void unsetelbIp();
    void setElbIp(const std::string& value);

    /// <summary>
    /// PROXY：代理模式端口 TUNNEL：隧道模式自定端口 TUNNEL_FIXED：隧道模式的固定隧道端口
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// elb监听端口
    /// </summary>

    int32_t getListenerPort() const;
    bool listenerPortIsSet() const;
    void unsetlistenerPort();
    void setListenerPort(int32_t value);

    /// <summary>
    /// elb监听器id
    /// </summary>

    std::string getListenerId() const;
    bool listenerIdIsSet() const;
    void unsetlistenerId();
    void setListenerId(const std::string& value);

    /// <summary>
    /// 后端服务组绑定的后端服务器的业务端口
    /// </summary>

    int32_t getServerGroupPort() const;
    bool serverGroupPortIsSet() const;
    void unsetserverGroupPort();
    void setServerGroupPort(int32_t value);

    /// <summary>
    /// 后端服务组id
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 最后验证时间
    /// </summary>

    std::string getValidateTime() const;
    bool validateTimeIsSet() const;
    void unsetvalidateTime();
    void setValidateTime(const std::string& value);

    /// <summary>
    /// 资源是否异常。 由于该接口功能是cpcs操作租户的elb。而租户是可以二次操作cpcs创建的端口映射的。cpcs提供了一个检测接口，用以检测cpcs创建的这一套监听端口是否有误。
    /// </summary>

    bool isWrong() const;
    bool wrongIsSet() const;
    void unsetwrong();
    void setWrong(bool value);

    /// <summary>
    /// 若端口有误。即wrong&#x3D;true时。该字段描述错误的地方
    /// </summary>

    std::string getWrongMsg() const;
    bool wrongMsgIsSet() const;
    void unsetwrongMsg();
    void setWrongMsg(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string elbId_;
    bool elbIdIsSet_;
    std::string elbIp_;
    bool elbIpIsSet_;
    std::string mode_;
    bool modeIsSet_;
    int32_t listenerPort_;
    bool listenerPortIsSet_;
    std::string listenerId_;
    bool listenerIdIsSet_;
    int32_t serverGroupPort_;
    bool serverGroupPortIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string validateTime_;
    bool validateTimeIsSet_;
    bool wrong_;
    bool wrongIsSet_;
    std::string wrongMsg_;
    bool wrongMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortResponse_H_

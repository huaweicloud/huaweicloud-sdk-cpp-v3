
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobEndpointInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobEndpointInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseEndpoint.h>
#include <huaweicloud/drs/v5/model/CloudBaseInfo.h>
#include <huaweicloud/drs/v5/model/BaseEndpointConfig.h>
#include <huaweicloud/drs/v5/model/EndpointSslConfig.h>
#include <string>
#include <huaweicloud/drs/v5/model/CustomizedDns.h>
#include <huaweicloud/drs/v5/model/CloudVpcInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建任务数据库信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobEndpointInfo
    : public ModelBase
{
public:
    JobEndpointInfo();
    virtual ~JobEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobEndpointInfo members

    /// <summary>
    /// 数据库类型。取值：  - oracle：Oracle。 - gaussdbv5：GaussDB分布式版。 - redis：Redis。 - rediscluster：Redis集群版。 - gaussredis: GeminiDB Redis。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 数据库实例类型。取值：  - offline：自建数据库。 - ecs：华为云ECS自建数据库。 - cloud：华为云数据库。
    /// </summary>

    std::string getEndpointType() const;
    bool endpointTypeIsSet() const;
    void unsetendpointType();
    void setEndpointType(const std::string& value);

    /// <summary>
    /// 数据库实例角色。取值： - so：源库。 - ta：目标库。
    /// </summary>

    std::string getEndpointRole() const;
    bool endpointRoleIsSet() const;
    void unsetendpointRole();
    void setEndpointRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BaseEndpoint getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const BaseEndpoint& value);

    /// <summary>
    /// 
    /// </summary>

    CloudBaseInfo getCloud() const;
    bool cloudIsSet() const;
    void unsetcloud();
    void setCloud(const CloudBaseInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CloudVpcInfo getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const CloudVpcInfo& value);

    /// <summary>
    /// 
    /// </summary>

    BaseEndpointConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const BaseEndpointConfig& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointSslConfig getSsl() const;
    bool sslIsSet() const;
    void unsetssl();
    void setSsl(const EndpointSslConfig& value);

    /// <summary>
    /// 
    /// </summary>

    CustomizedDns getCustomizedDns() const;
    bool customizedDnsIsSet() const;
    void unsetcustomizedDns();
    void setCustomizedDns(const CustomizedDns& value);


protected:
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string endpointType_;
    bool endpointTypeIsSet_;
    std::string endpointRole_;
    bool endpointRoleIsSet_;
    BaseEndpoint endpoint_;
    bool endpointIsSet_;
    CloudBaseInfo cloud_;
    bool cloudIsSet_;
    CloudVpcInfo vpc_;
    bool vpcIsSet_;
    BaseEndpointConfig config_;
    bool configIsSet_;
    EndpointSslConfig ssl_;
    bool sslIsSet_;
    CustomizedDns customizedDns_;
    bool customizedDnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobEndpointInfo_H_

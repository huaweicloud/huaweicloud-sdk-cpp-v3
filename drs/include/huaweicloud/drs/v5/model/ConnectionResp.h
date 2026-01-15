
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseEndpoint.h>
#include <huaweicloud/drs/v5/model/EndpointSslConfig.h>
#include <string>
#include <huaweicloud/drs/v5/model/ConnectionConfig.h>
#include <huaweicloud/drs/v5/model/CloudVpcInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 连接响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ConnectionResp
    : public ModelBase
{
public:
    ConnectionResp();
    virtual ~ConnectionResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConnectionResp members

    /// <summary>
    /// 连接ID。
    /// </summary>

    std::string getConnectionId() const;
    bool connectionIdIsSet() const;
    void unsetconnectionId();
    void setConnectionId(const std::string& value);

    /// <summary>
    /// 连接名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 连接创建时间，格式为时间戳。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 连接类型。 取值：mysql - postgresql - mongodb - oracle
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConnectionConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const ConnectionConfig& value);

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

    CloudVpcInfo getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const CloudVpcInfo& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointSslConfig getSsl() const;
    bool sslIsSet() const;
    void unsetssl();
    void setSsl(const EndpointSslConfig& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string connectionId_;
    bool connectionIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    ConnectionConfig config_;
    bool configIsSet_;
    BaseEndpoint endpoint_;
    bool endpointIsSet_;
    CloudVpcInfo vpc_;
    bool vpcIsSet_;
    EndpointSslConfig ssl_;
    bool sslIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionResp_H_

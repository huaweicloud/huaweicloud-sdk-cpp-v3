
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateConnectionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateConnectionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseEndpoint.h>
#include <huaweicloud/drs/v5/model/CloudBaseInfo.h>
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
/// 修改连接请求。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateConnectionReq
    : public ModelBase
{
public:
    UpdateConnectionReq();
    virtual ~UpdateConnectionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateConnectionReq members

    /// <summary>
    /// 连接名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库类型。
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
    /// 连接描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

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
    /// 
    /// </summary>

    CloudBaseInfo getCloud() const;
    bool cloudIsSet() const;
    void unsetcloud();
    void setCloud(const CloudBaseInfo& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    ConnectionConfig config_;
    bool configIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    BaseEndpoint endpoint_;
    bool endpointIsSet_;
    CloudVpcInfo vpc_;
    bool vpcIsSet_;
    EndpointSslConfig ssl_;
    bool sslIsSet_;
    CloudBaseInfo cloud_;
    bool cloudIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateConnectionReq_H_


#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/ConstructDisasterRecoveryInstance.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ConstructDisasterRecoveryBody
    : public ModelBase
{
public:
    ConstructDisasterRecoveryBody();
    virtual ~ConstructDisasterRecoveryBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ConstructDisasterRecoveryBody members

    /// <summary>
    /// 容灾ID。 对容灾角色为主的实例下发搭建容灾接口时不传该参数，接口成功响应后返回生成的容灾ID。 对容灾角色为备的实例下发建容灾接口时必传该参数，且必须与上述生成的容灾ID保持一致。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 搭建容灾关系的别名。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 建立容灾关系所需要的容灾密码，搭建同一容灾关系的两次调用容灾密码必须保持一致。 容灾密码为容灾集群内部数据通信所用，不能用于客户端连接使用。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 指定当前实例的容灾角色。取值为master或slave，表示在容灾关系中角色为主或备。
    /// </summary>

    std::string getInstanceRole() const;
    bool instanceRoleIsSet() const;
    void unsetinstanceRole();
    void setInstanceRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConstructDisasterRecoveryInstance getDisasterRecoveryInstance() const;
    bool disasterRecoveryInstanceIsSet() const;
    void unsetdisasterRecoveryInstance();
    void setDisasterRecoveryInstance(const ConstructDisasterRecoveryInstance& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string instanceRole_;
    bool instanceRoleIsSet_;
    ConstructDisasterRecoveryInstance disasterRecoveryInstance_;
    bool disasterRecoveryInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryBody_H_

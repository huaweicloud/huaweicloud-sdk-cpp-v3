
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryRestoreList_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryRestoreList_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可恢复的实例信息结构体
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  QueryRestoreList
    : public ModelBase
{
public:
    QueryRestoreList();
    virtual ~QueryRestoreList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRestoreList members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例模式
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 引擎名称
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎版本
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// VPC ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID列表
    /// </summary>

    std::vector<std::string>& getSubnetIds();
    bool subnetIdsIsSet() const;
    void unsetsubnetIds();
    void setSubnetIds(const std::vector<std::string>& value);

    /// <summary>
    /// 安全组ID列表
    /// </summary>

    std::vector<std::string>& getSecurityGroupIds();
    bool securityGroupIdsIsSet() const;
    void unsetsecurityGroupIds();
    void setSecurityGroupIds(const std::vector<std::string>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::vector<std::string> subnetIds_;
    bool subnetIdsIsSet_;
    std::vector<std::string> securityGroupIds_;
    bool securityGroupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryRestoreList_H_

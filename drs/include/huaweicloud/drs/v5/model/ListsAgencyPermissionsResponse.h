
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListsAgencyPermissionsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListsAgencyPermissionsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListsAgencyPermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListsAgencyPermissionsResponse();
    virtual ~ListsAgencyPermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListsAgencyPermissionsResponse members

    /// <summary>
    /// - DRS FullAccess 数据复制服务所有权限
    /// </summary>

    std::vector<std::string>& getCommonPermissions();
    bool commonPermissionsIsSet() const;
    void unsetcommonPermissions();
    void setCommonPermissions(const std::vector<std::string>& value);

    /// <summary>
    /// -  GaussDB ReadOnlyAccess 云数据库 GaussDB服务的只读访问权限 -  GeminiDB ReadOnlyAccess 分布式多模NoSQL数据库服务只读权限 -  GaussDBforMSQLReadOnlyAccess 云数据库HUAWEIGaussDBforMSQL服务的只读访问权限 -  DWS ReadOnlyAccess 数据仓库服务只读权限 -  DDM ReadOnlyAccess 分布式数据库中间件服务只读权限 -  DDS ReadOnlyPolicy 文档数据库服务资源只读权限 -  RDS ReadOnlyAccess 关系型数据库服务资源只读权限 -  MRS ReadOnlyAccess MapReduce服务只读权限,包括集群查询操作,基础服务弹性云服务器、裸金属服务器、云硬盘、虚拟私有云只读权限
    /// </summary>

    std::vector<std::string>& getEnginePermissions();
    bool enginePermissionsIsSet() const;
    void unsetenginePermissions();
    void setEnginePermissions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> commonPermissions_;
    bool commonPermissionsIsSet_;
    std::vector<std::string> enginePermissions_;
    bool enginePermissionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListsAgencyPermissionsResponse_H_

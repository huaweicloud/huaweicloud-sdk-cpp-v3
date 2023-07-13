
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRouter_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRouter_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Route.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/vpc/v2/model/ExternalGatewayInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// router对象模型
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronRouter
    : public ModelBase
{
public:
    NeutronRouter();
    virtual ~NeutronRouter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronRouter members

    /// <summary>
    /// 功能说明：资源的管理状态。只支持true。 取值范围：true、false 约束：只支持true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 
    /// </summary>

    ExternalGatewayInfo getExternalGatewayInfo() const;
    bool externalGatewayInfoIsSet() const;
    void unsetexternalGatewayInfo();
    void setExternalGatewayInfo(const ExternalGatewayInfo& value);

    /// <summary>
    /// 路由器ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：路由器的名称 取值范围：0-64个字符，仅支持数字、字母、中文、_(下划线)、-（中划线）、.（点）。 约束：如果name非空，则name不能重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：路由信息，见Route对象
    /// </summary>

    std::vector<Route>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<Route>& value);

    /// <summary>
    /// 功能说明：路由器的状态 取值范围：ACTIVE， DOWN，ERROR
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    ExternalGatewayInfo externalGatewayInfo_;
    bool externalGatewayInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<Route> routes_;
    bool routesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRouter_H_

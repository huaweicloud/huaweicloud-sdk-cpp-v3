
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListNetworksRequest
    : public ModelBase
{
public:
    NeutronListNetworksRequest();
    virtual ~NeutronListNetworksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListNetworksRequest members

    /// <summary>
    /// 每页返回的个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的资源ID，为空时查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 按照网络对应的ID过滤查询
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 按照网络的名称过滤查询
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 按照网络的状态过滤查询，取值范围：ACTIVE、ERROR、DOWN
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 按照网络是否支持跨租户共享过滤查询，取值范围：true or false
    /// </summary>

    bool isShared() const;
    bool sharedIsSet() const;
    void unsetshared();
    void setShared(bool value);

    /// <summary>
    /// 按照网络是否外部网络过滤查询，取值范围：true or false
    /// </summary>

    bool isRouterexternal() const;
    bool routerexternalIsSet() const;
    void unsetrouterexternal();
    void setRouterexternal(bool value);

    /// <summary>
    /// 按照网络的管理状态过滤查询，取值范围：true or false
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 按照网络的类型过滤查询
    /// </summary>

    std::string getProvidernetworkType() const;
    bool providernetworkTypeIsSet() const;
    void unsetprovidernetworkType();
    void setProvidernetworkType(const std::string& value);

    /// <summary>
    /// 按照network所属的项目ID过滤
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool shared_;
    bool sharedIsSet_;
    bool routerexternal_;
    bool routerexternalIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string providernetworkType_;
    bool providernetworkTypeIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListNetworksRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListNetworksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListNetworksRequest_H_

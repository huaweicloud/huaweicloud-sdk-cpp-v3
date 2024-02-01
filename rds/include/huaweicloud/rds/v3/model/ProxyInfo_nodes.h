
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_nodes_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_nodes_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyInfo_nodes
    : public ModelBase
{
public:
    ProxyInfo_nodes();
    virtual ~ProxyInfo_nodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyInfo_nodes members

    /// <summary>
    /// 数据库代理节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库代理节点状态。  取值范围： NORMAL: 表示节点正常。 ABNORMAL: 表示节点节点状态异常。 CREATING: 表示节点正在创建中。 CREATEFAIL: 表示节点创建失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库代理节点角色：  master：主节点。  slave：备节点。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 数据库代理节点所在可用区。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 数据库代理节点是否被冻结。  取值范围：  0：未冻结。  1：冻结。
    /// </summary>

    int32_t getFrozenFlag() const;
    bool frozenFlagIsSet() const;
    void unsetfrozenFlag();
    void setFrozenFlag(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    int32_t frozenFlag_;
    bool frozenFlagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_nodes_H_

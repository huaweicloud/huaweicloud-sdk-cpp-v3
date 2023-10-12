
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyNode_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyNode_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyNode
    : public ModelBase
{
public:
    ProxyNode();
    virtual ~ProxyNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyNode members

    /// <summary>
    /// Proxy节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// Proxy节点名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Proxy节点角色。 - master：主节点。 - slave：备节点。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// Proxy节点状态。 - normal：正常。 - abnormal：异常。 - creating：创建中。 - deleted：已删除。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// Proxy节点是否被冻结。 - 0：未冻结。 - 1：冻结。 - 2：冻结删除。
    /// </summary>

    int32_t getFrozenFlag() const;
    bool frozenFlagIsSet() const;
    void unsetfrozenFlag();
    void setFrozenFlag(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t frozenFlag_;
    bool frozenFlagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyNode_H_

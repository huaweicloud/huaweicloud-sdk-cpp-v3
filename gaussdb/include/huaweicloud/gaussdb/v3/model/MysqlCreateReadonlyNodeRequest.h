
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlCreateReadonlyNodeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlCreateReadonlyNodeRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 只读节点信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlCreateReadonlyNodeRequest
    : public ModelBase
{
public:
    MysqlCreateReadonlyNodeRequest();
    virtual ~MysqlCreateReadonlyNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlCreateReadonlyNodeRequest members

    /// <summary>
    /// 指定创建的只读节点故障倒换优先级。  故障倒换优先级的取值范围为1~16，数字越小，优先级越大，即故障倒换时，主节点会优先倒换到优先级高的只读节点上，优先级相同的只读节点选为主节点的概率相同。最多支持9个只读节点设置故障倒换优先级，超过9个的只读节点优先级默认为-1，表示不会参与倒换。可通过修改节点的故障倒换优先级来进行调整。
    /// </summary>

    std::vector<int32_t>& getPriorities();
    bool prioritiesIsSet() const;
    void unsetpriorities();
    void setPriorities(std::vector<int32_t> value);

    /// <summary>
    /// 创建包周期时可指定，表示是否自动从客户的账户中支付，此字段不影响自动续订的支付方式。  - true，为自动支付，默认该方式。 - false，为手动支付。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::vector<int32_t> priorities_;
    bool prioritiesIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlCreateReadonlyNodeRequest_H_


#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodePriorityRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodePriorityRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyNodePriorityRequestBody
    : public ModelBase
{
public:
    ModifyNodePriorityRequestBody();
    virtual ~ModifyNodePriorityRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyNodePriorityRequestBody members

    /// <summary>
    /// 故障倒换优先级。  故障倒换优先级的取值范围为1~16以及-1。取正数时数字越小，优先级越大，即故障倒换时，主节点会优先倒换到优先级高的只读节点上，优先级相同的只读节点选为主节点的概率相同。取-1时表示节点不参与故障倒换，当单可用区实例超过两个只读节点，或者多可用区实例修改后的可用区多于1个时可以设置成-1。 
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);


protected:
    std::string priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodePriorityRequestBody_H_

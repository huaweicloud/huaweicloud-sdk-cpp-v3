
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodeDataIpRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodeDataIpRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyNodeDataIpRequest
    : public ModelBase
{
public:
    ModifyNodeDataIpRequest();
    virtual ~ModifyNodeDataIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyNodeDataIpRequest members

    /// <summary>
    /// **参数解释**：              内网IP地址。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::string getInternalIp() const;
    bool internalIpIsSet() const;
    void unsetinternalIp();
    void setInternalIp(const std::string& value);


protected:
    std::string internalIp_;
    bool internalIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyNodeDataIpRequest_H_

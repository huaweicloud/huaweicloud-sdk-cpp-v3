
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InplaceMigrateNodeResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InplaceMigrateNodeResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/InPlaceMigratetoNodesSpec.h>
#include <huaweicloud/cce/v3/model/TaskStatus.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InplaceMigrateNodeResponse
    : public ModelBase, public HttpResponse
{
public:
    InplaceMigrateNodeResponse();
    virtual ~InplaceMigrateNodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InplaceMigrateNodeResponse members

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： InPlaceMigrateNodesTask 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InPlaceMigratetoNodesSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const InPlaceMigratetoNodesSpec& value);

    /// <summary>
    /// 
    /// </summary>

    TaskStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const TaskStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    InPlaceMigratetoNodesSpec spec_;
    bool specIsSet_;
    TaskStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InplaceMigrateNodeResponse_H_

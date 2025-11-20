
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Context_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Context_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Context
    : public ModelBase
{
public:
    Context();
    virtual ~Context();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Context members

    /// <summary>
    /// **参数解释**： 上下文cluster信息 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getCluster() const;
    bool clusterIsSet() const;
    void unsetcluster();
    void setCluster(const std::string& value);

    /// <summary>
    /// **参数解释**： 上下文user信息 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);


protected:
    std::string cluster_;
    bool clusterIsSet_;
    std::string user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Context_H_

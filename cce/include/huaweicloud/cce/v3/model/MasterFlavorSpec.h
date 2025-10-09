
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterFlavorSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterFlavorSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  MasterFlavorSpec
    : public ModelBase
{
public:
    MasterFlavorSpec();
    virtual ~MasterFlavorSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterFlavorSpec members

    /// <summary>
    /// **参数解释**： 控制节点规格 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 控制节点支持的可用区
    /// </summary>

    std::vector<std::string>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 控制节点所在可用区支持的故障域
    /// </summary>

    std::map<std::string, std::vector<std::string>>& getAzFaultDomains();
    bool azFaultDomainsIsSet() const;
    void unsetazFaultDomains();
    void setAzFaultDomains(const std::map<std::string, std::vector<std::string>>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> azs_;
    bool azsIsSet_;
    std::map<std::string, std::vector<std::string>> azFaultDomains_;
    bool azFaultDomainsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterFlavorSpec_H_

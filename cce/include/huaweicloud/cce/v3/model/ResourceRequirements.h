
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceRequirements_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceRequirements_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ResourceRequirements
    : public ModelBase
{
public:
    ResourceRequirements();
    virtual ~ResourceRequirements();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceRequirements members

    /// <summary>
    /// 资源限制，创建时指定无效
    /// </summary>

    std::map<std::string, std::string>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 资源需求，创建时指定无效
    /// </summary>

    std::map<std::string, std::string>& getRequests();
    bool requestsIsSet() const;
    void unsetrequests();
    void setRequests(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> limits_;
    bool limitsIsSet_;
    std::map<std::string, std::string> requests_;
    bool requestsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceRequirements_H_

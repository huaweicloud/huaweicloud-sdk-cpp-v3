
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingV3Body_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingV3Body_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ip绑定请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  IpBindingV3Body
    : public ModelBase
{
public:
    IpBindingV3Body();
    virtual ~IpBindingV3Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBindingV3Body members

    /// <summary>
    /// 防护ip列表
    /// </summary>

    std::vector<std::string>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingV3Body_H_


#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_RemoveIpGroupIpRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_RemoveIpGroupIpRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// remove ip group ip request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  RemoveIpGroupIpRequestBody
    : public ModelBase
{
public:
    RemoveIpGroupIpRequestBody();
    virtual ~RemoveIpGroupIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveIpGroupIpRequestBody members

    /// <summary>
    /// IP地址组中的IP网段列表，一次最多支持删除20个条目。
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_RemoveIpGroupIpRequestBody_H_

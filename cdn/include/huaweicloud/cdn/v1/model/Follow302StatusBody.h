
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Follow302StatusBody
    : public ModelBase
{
public:
    Follow302StatusBody();
    virtual ~Follow302StatusBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Follow302StatusBody members

    /// <summary>
    /// 加速域名id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// follow302状态，off：关闭，on：开启。
    /// </summary>

    std::string getFollowStatus() const;
    bool followStatusIsSet() const;
    void unsetfollowStatus();
    void setFollowStatus(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string followStatus_;
    bool followStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusBody_H_

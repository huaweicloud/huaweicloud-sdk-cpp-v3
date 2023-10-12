
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirect_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirect_H_


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
class HUAWEICLOUD_CDN_V1_EXPORT  ForceRedirect
    : public ModelBase
{
public:
    ForceRedirect();
    virtual ~ForceRedirect();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForceRedirect members

    /// <summary>
    /// 强制跳转开关。1打开。0关闭。
    /// </summary>

    int32_t getSwitch() const;
    bool switchIsSet() const;
    void unsetswitch();
    void setSwitch(int32_t value);

    /// <summary>
    /// 强制跳转类型。http：强制跳转HTTP。https：强制跳转HTTPS。
    /// </summary>

    std::string getRedirectType() const;
    bool redirectTypeIsSet() const;
    void unsetredirectType();
    void setRedirectType(const std::string& value);


protected:
    int32_t switch_;
    bool switchIsSet_;
    std::string redirectType_;
    bool redirectTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirect_H_

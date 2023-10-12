
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirectConfig_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirectConfig_H_


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
/// 强制跳转。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ForceRedirectConfig
    : public ModelBase
{
public:
    ForceRedirectConfig();
    virtual ~ForceRedirectConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForceRedirectConfig members

    /// <summary>
    /// 强制跳转开关（on：打开，off：关闭）。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 强制跳转类型（http：强制跳转HTTP，https：强制跳转HTTPS）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 重定向跳转码301,302。
    /// </summary>

    int32_t getRedirectCode() const;
    bool redirectCodeIsSet() const;
    void unsetredirectCode();
    void setRedirectCode(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t redirectCode_;
    bool redirectCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ForceRedirectConfig_H_

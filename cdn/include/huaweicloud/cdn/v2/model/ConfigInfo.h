
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ConfigInfo_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ConfigInfo_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopUa.h>
#include <huaweicloud/cdn/v2/model/TopUrl.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置信息
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ConfigInfo
    : public ModelBase
{
public:
    ConfigInfo();
    virtual ~ConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigInfo members

    /// <summary>
    /// 
    /// </summary>

    TopUrl getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const TopUrl& value);

    /// <summary>
    /// 
    /// </summary>

    TopUa getUa() const;
    bool uaIsSet() const;
    void unsetua();
    void setUa(const TopUa& value);


protected:
    TopUrl url_;
    bool urlIsSet_;
    TopUa ua_;
    bool uaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ConfigInfo_H_

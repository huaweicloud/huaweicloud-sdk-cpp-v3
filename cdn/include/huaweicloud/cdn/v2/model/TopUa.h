
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUa_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUa_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// top_ua配置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TopUa
    : public ModelBase
{
public:
    TopUa();
    virtual ~TopUa();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopUa members

    /// <summary>
    /// 配置开关
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUa_H_

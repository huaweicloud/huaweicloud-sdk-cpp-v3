
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ModifyDomainConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ModifyDomainConfigRequestBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Configs.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ModifyDomainConfigRequestBody
    : public ModelBase
{
public:
    ModifyDomainConfigRequestBody();
    virtual ~ModifyDomainConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyDomainConfigRequestBody members

    /// <summary>
    /// 
    /// </summary>

    Configs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const Configs& value);


protected:
    Configs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ModifyDomainConfigRequestBody_H_


#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateInternetAccessOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateInternetAccessOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplatePublicIpOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 公网访问
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateInternetAccessOption
    : public ModelBase
{
public:
    TemplateInternetAccessOption();
    virtual ~TemplateInternetAccessOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateInternetAccessOption members

    /// <summary>
    /// 
    /// </summary>

    TemplatePublicIpOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const TemplatePublicIpOption& value);


protected:
    TemplatePublicIpOption publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateInternetAccessOption_H_


#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateMarketOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateMarketOptions_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateSpotOptions.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费条件
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateMarketOptions
    : public ModelBase
{
public:
    TemplateMarketOptions();
    virtual ~TemplateMarketOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateMarketOptions members

    /// <summary>
    /// 计费类型
    /// </summary>

    std::string getMarketType() const;
    bool marketTypeIsSet() const;
    void unsetmarketType();
    void setMarketType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateSpotOptions getSpotOptions() const;
    bool spotOptionsIsSet() const;
    void unsetspotOptions();
    void setSpotOptions(const TemplateSpotOptions& value);


protected:
    std::string marketType_;
    bool marketTypeIsSet_;
    TemplateSpotOptions spotOptions_;
    bool spotOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateMarketOptions_H_

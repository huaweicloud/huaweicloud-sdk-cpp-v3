
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_prepaid_info_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_prepaid_info_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  MarketModel_prepaid_info
    : public ModelBase
{
public:
    MarketModel_prepaid_info();
    virtual ~MarketModel_prepaid_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MarketModel_prepaid_info members

    /// <summary>
    /// 
    /// </summary>

    std::string getExpiredTime() const;
    bool expiredTimeIsSet() const;
    void unsetexpiredTime();
    void setExpiredTime(const std::string& value);


protected:
    std::string expiredTime_;
    bool expiredTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_prepaid_info_H_

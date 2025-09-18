
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_ip_sets_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_ip_sets_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/Area.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateAcceleratorOption_ip_sets
    : public ModelBase
{
public:
    CreateAcceleratorOption_ip_sets();
    virtual ~CreateAcceleratorOption_ip_sets();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAcceleratorOption_ip_sets members

    /// <summary>
    /// IP地址类型，取值：IPV4，IPV6
    /// </summary>

    std::string getIpType() const;
    bool ipTypeIsSet() const;
    void unsetipType();
    void setIpType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Area getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const Area& value);


protected:
    std::string ipType_;
    bool ipTypeIsSet_;
    Area area_;
    bool areaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_ip_sets_H_


#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_AccelerateIp_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_AccelerateIp_H_


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
/// accelerate Ip
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  AccelerateIp
    : public ModelBase
{
public:
    AccelerateIp();
    virtual ~AccelerateIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccelerateIp members

    /// <summary>
    /// IP地址类型。
    /// </summary>

    std::string getIpType() const;
    bool ipTypeIsSet() const;
    void unsetipType();
    void setIpType(const std::string& value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

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
    std::string ipAddress_;
    bool ipAddressIsSet_;
    Area area_;
    bool areaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_AccelerateIp_H_

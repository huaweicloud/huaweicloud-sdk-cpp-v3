
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplatePublicIpOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplatePublicIpOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateBandwidthOption.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  TemplatePublicIpOption
    : public ModelBase
{
public:
    TemplatePublicIpOption();
    virtual ~TemplatePublicIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplatePublicIpOption members

    /// <summary>
    /// 弹性公网IP类型
    /// </summary>

    std::string getPublicipType() const;
    bool publicipTypeIsSet() const;
    void unsetpublicipType();
    void setPublicipType(const std::string& value);

    /// <summary>
    /// 弹性公网IP计费类型
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const TemplateBandwidthOption& value);

    /// <summary>
    /// EIP是否随实例一同释放
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    std::string publicipType_;
    bool publicipTypeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    TemplateBandwidthOption bandwidth_;
    bool bandwidthIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplatePublicIpOption_H_

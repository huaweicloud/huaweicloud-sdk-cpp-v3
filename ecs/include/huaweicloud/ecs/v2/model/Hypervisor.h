
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// hypervisor信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  Hypervisor
    : public ModelBase
{
public:
    Hypervisor();
    virtual ~Hypervisor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Hypervisor members

    /// <summary>
    /// hypervisor类型
    /// </summary>

    std::string getHypervisorType() const;
    bool hypervisorTypeIsSet() const;
    void unsethypervisorType();
    void setHypervisorType(const std::string& value);

    /// <summary>
    /// hypervisor csd信息
    /// </summary>

    std::string getCsdHypervisor() const;
    bool csdHypervisorIsSet() const;
    void unsetcsdHypervisor();
    void setCsdHypervisor(const std::string& value);


protected:
    std::string hypervisorType_;
    bool hypervisorTypeIsSet_;
    std::string csdHypervisor_;
    bool csdHypervisorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_

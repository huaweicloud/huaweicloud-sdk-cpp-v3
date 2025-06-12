
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourcesCount_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourcesCount_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源总量信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ResourcesCount
    : public ModelBase
{
public:
    ResourcesCount();
    virtual ~ResourcesCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourcesCount members

    /// <summary>
    /// 业务类型。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 资源总数。
    /// </summary>

    double getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(double value);

    /// <summary>
    /// 计费类型。 * PERIODIC: 包周期 * ONE_TIME：一次性 * ON_DEMAND：按需
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 资源来源。 * PURCHASED: 购买 * SP_ALLOCATED：SP分配 * ADMIN_ALLOCATED：系统管理员分配
    /// </summary>

    std::string getResourceSource() const;
    bool resourceSourceIsSet() const;
    void unsetresourceSource();
    void setResourceSource(const std::string& value);


protected:
    std::string businessType_;
    bool businessTypeIsSet_;
    double count_;
    bool countIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string resourceSource_;
    bool resourceSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourcesCount_H_

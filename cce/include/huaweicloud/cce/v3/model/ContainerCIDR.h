
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerCIDR_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerCIDR_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容器网络网段，指定cidrs字段使用时必填。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ContainerCIDR
    : public ModelBase
{
public:
    ContainerCIDR();
    virtual ~ContainerCIDR();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContainerCIDR members

    /// <summary>
    /// 容器网络网段，建议使用网段10.0.0.0/12~19，172.16.0.0/16~19，192.168.0.0/16~19。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


protected:
    std::string cidr_;
    bool cidrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerCIDR_H_


#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建东西向防火墙body体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateEastWestFirewallRequestBody
    : public ModelBase
{
public:
    CreateEastWestFirewallRequestBody();
    virtual ~CreateEastWestFirewallRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEastWestFirewallRequestBody members

    /// <summary>
    /// 出方向关联ER ID,可通过ER服务查询企业路由器列表接口获得，返回值中instances.id即为erid（.表示各对象之间层级的区分）
    /// </summary>

    std::string getErId() const;
    bool erIdIsSet() const;
    void unseterId();
    void setErId(const std::string& value);

    /// <summary>
    /// 创建引流VPC时使用的网段
    /// </summary>

    std::string getInspectionCidr() const;
    bool inspectionCidrIsSet() const;
    void unsetinspectionCidr();
    void setInspectionCidr(const std::string& value);

    /// <summary>
    /// 东西向防火墙模式，填写er
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string erId_;
    bool erIdIsSet_;
    std::string inspectionCidr_;
    bool inspectionCidrIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallRequestBody_H_

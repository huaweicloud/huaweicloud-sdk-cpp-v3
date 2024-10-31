
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ChangeEastWestFirewallStatusResponseData
    : public ModelBase
{
public:
    ChangeEastWestFirewallStatusResponseData();
    virtual ~ChangeEastWestFirewallStatusResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeEastWestFirewallStatusResponseData members

    /// <summary>
    /// 东西向防护对象ID，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。此处仅取type为1的防护对象id，type可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_

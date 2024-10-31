
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsProtectModeObject_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsProtectModeObject_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  IpsProtectModeObject
    : public ModelBase
{
public:
    IpsProtectModeObject();
    virtual ~IpsProtectModeObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsProtectModeObject members

    /// <summary>
    /// ips防护模式id，此处为防护对象id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// ips防护模式，0：观察模式，1：严格模式，2：中等模式，3：宽松模式
    /// </summary>

    int32_t getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsProtectModeObject_H_

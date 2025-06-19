
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ExportIpBlacklistRequest
    : public ModelBase
{
public:
    ExportIpBlacklistRequest();
    virtual ~ExportIpBlacklistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportIpBlacklistRequest members

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// IP黑名单的名字，如果要导出生效范围为EIP的IP黑名单，就指定名字为ip-blacklist-eip.txt，如果要导出生效范围为NAT的IP黑名单，就指定名字为ip-blacklist-nat.txt。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportIpBlacklistRequest& dereference_from_shared_ptr(std::shared_ptr<ExportIpBlacklistRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistRequest_H_

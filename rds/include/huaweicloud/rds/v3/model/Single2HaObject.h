
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2HaObject_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2HaObject_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ADDomainInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单机转主备时必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Single2HaObject
    : public ModelBase
{
public:
    Single2HaObject();
    virtual ~Single2HaObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Single2HaObject members

    /// <summary>
    /// 实例节点可用区码（AZ）。
    /// </summary>

    std::string getAzCodeNewNode() const;
    bool azCodeNewNodeIsSet() const;
    void unsetazCodeNewNode();
    void setAzCodeNewNode(const std::string& value);

    /// <summary>
    /// Dec用户专属存储ID，每个az配置的专属存储不同，实例节点所在专属存储ID，仅支持DEC用户创建时使用。
    /// </summary>

    std::string getDsspoolId() const;
    bool dsspoolIdIsSet() const;
    void unsetdsspoolId();
    void setDsspoolId(const std::string& value);

    /// <summary>
    /// 仅包周期实例进行单机转主备时可指定，表示是否自动从客户的账户中支付。 - true，为自动支付。 - false，为手动支付，默认该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// 
    /// </summary>

    ADDomainInfo getAdDomainInfo() const;
    bool adDomainInfoIsSet() const;
    void unsetadDomainInfo();
    void setAdDomainInfo(const ADDomainInfo& value);


protected:
    std::string azCodeNewNode_;
    bool azCodeNewNodeIsSet_;
    std::string dsspoolId_;
    bool dsspoolIdIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    ADDomainInfo adDomainInfo_;
    bool adDomainInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2HaObject_H_

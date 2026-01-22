
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleUpdateTimeVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleUpdateTimeVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  IpsRuleUpdateTimeVO
    : public ModelBase
{
public:
    IpsRuleUpdateTimeVO();
    virtual ~IpsRuleUpdateTimeVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsRuleUpdateTimeVO members

    /// <summary>
    /// ips类型，0表示基础防御，1表示虚拟补丁
    /// </summary>

    int32_t getIpsType() const;
    bool ipsTypeIsSet() const;
    void unsetipsType();
    void setIpsType(int32_t value);

    /// <summary>
    /// ips规则版本
    /// </summary>

    std::string getIpsVersion() const;
    bool ipsVersionIsSet() const;
    void unsetipsVersion();
    void setIpsVersion(const std::string& value);

    /// <summary>
    /// ips更新时间戳
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    int32_t ipsType_;
    bool ipsTypeIsSet_;
    std::string ipsVersion_;
    bool ipsVersionIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleUpdateTimeVO_H_


#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  IpsRuleVO
    : public ModelBase
{
public:
    IpsRuleVO();
    virtual ~IpsRuleVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsRuleVO members

    /// <summary>
    /// 
    /// </summary>

    std::string getAffectedApplication() const;
    bool affectedApplicationIsSet() const;
    void unsetaffectedApplication();
    void setAffectedApplication(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDefaultStatus() const;
    bool defaultStatusIsSet() const;
    void unsetdefaultStatus();
    void setDefaultStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsCve() const;
    bool ipsCveIsSet() const;
    void unsetipsCve();
    void setIpsCve(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsGroup() const;
    bool ipsGroupIsSet() const;
    void unsetipsGroup();
    void setIpsGroup(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsLevel() const;
    bool ipsLevelIsSet() const;
    void unsetipsLevel();
    void setIpsLevel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsName() const;
    bool ipsNameIsSet() const;
    void unsetipsName();
    void setIpsName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsRulesType() const;
    bool ipsRulesTypeIsSet() const;
    void unsetipsRulesType();
    void setIpsRulesType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpsStatus() const;
    bool ipsStatusIsSet() const;
    void unsetipsStatus();
    void setIpsStatus(const std::string& value);


protected:
    std::string affectedApplication_;
    bool affectedApplicationIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string defaultStatus_;
    bool defaultStatusIsSet_;
    std::string ipsCve_;
    bool ipsCveIsSet_;
    std::string ipsGroup_;
    bool ipsGroupIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    std::string ipsLevel_;
    bool ipsLevelIsSet_;
    std::string ipsName_;
    bool ipsNameIsSet_;
    std::string ipsRulesType_;
    bool ipsRulesTypeIsSet_;
    std::string ipsStatus_;
    bool ipsStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleVO_H_

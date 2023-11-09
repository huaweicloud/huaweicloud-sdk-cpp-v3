
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeaguePartnerVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeaguePartnerVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 联盟合作方信息
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsLeaguePartnerVo
    : public ModelBase
{
public:
    TicsLeaguePartnerVo();
    virtual ~TicsLeaguePartnerVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsLeaguePartnerVo members

    /// <summary>
    /// 联盟合作方Id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 联盟合作方别名
    /// </summary>

    std::string getPartnerDomainAlias() const;
    bool partnerDomainAliasIsSet() const;
    void unsetpartnerDomainAlias();
    void setPartnerDomainAlias(const std::string& value);

    /// <summary>
    /// 联盟合作方租户名
    /// </summary>

    std::string getPartnerDomainName() const;
    bool partnerDomainNameIsSet() const;
    void unsetpartnerDomainName();
    void setPartnerDomainName(const std::string& value);

    /// <summary>
    /// 联盟合作方状态
    /// </summary>

    std::string getPartnerStatus() const;
    bool partnerStatusIsSet() const;
    void unsetpartnerStatus();
    void setPartnerStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string partnerDomainAlias_;
    bool partnerDomainAliasIsSet_;
    std::string partnerDomainName_;
    bool partnerDomainNameIsSet_;
    std::string partnerStatus_;
    bool partnerStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeaguePartnerVo_H_

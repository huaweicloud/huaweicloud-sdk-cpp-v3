
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsApproveLogVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsApproveLogVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/TicsLeagueNoticeVo.h>
#include <huaweicloud/tics/v1/model/TicsLeaguePartnerVo.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 联盟审批日志信息
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsApproveLogVo
    : public ModelBase
{
public:
    TicsApproveLogVo();
    virtual ~TicsApproveLogVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsApproveLogVo members

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建者Id
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 创建者名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 租户别名
    /// </summary>

    std::string getDomainAlias() const;
    bool domainAliasIsSet() const;
    void unsetdomainAlias();
    void setDomainAlias(const std::string& value);

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TicsLeagueNoticeVo getLeague() const;
    bool leagueIsSet() const;
    void unsetleague();
    void setLeague(const TicsLeagueNoticeVo& value);

    /// <summary>
    /// 联盟Id
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 联盟名称
    /// </summary>

    std::string getLeagueName() const;
    bool leagueNameIsSet() const;
    void unsetleagueName();
    void setLeagueName(const std::string& value);

    /// <summary>
    /// 联盟参与方Id
    /// </summary>

    std::string getPartnerId() const;
    bool partnerIdIsSet() const;
    void unsetpartnerId();
    void setPartnerId(const std::string& value);

    /// <summary>
    /// 联盟参与方状态，JOINED.已加入，JOIN_PENDING_APPROVAL.待审核，JOIN_REJECTED.拒绝加入，QUIT.已退出
    /// </summary>

    std::string getPartnerStatus() const;
    bool partnerStatusIsSet() const;
    void unsetpartnerStatus();
    void setPartnerStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<TicsLeaguePartnerVo>& getPartners();
    bool partnersIsSet() const;
    void unsetpartners();
    void setPartners(const std::vector<TicsLeaguePartnerVo>& value);

    /// <summary>
    /// 更新者Id
    /// </summary>

    std::string getUpdateId() const;
    bool updateIdIsSet() const;
    void unsetupdateId();
    void setUpdateId(const std::string& value);

    /// <summary>
    /// 更新者名称
    /// </summary>

    std::string getUpdateName() const;
    bool updateNameIsSet() const;
    void unsetupdateName();
    void setUpdateName(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string domainAlias_;
    bool domainAliasIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    TicsLeagueNoticeVo league_;
    bool leagueIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string leagueName_;
    bool leagueNameIsSet_;
    std::string partnerId_;
    bool partnerIdIsSet_;
    std::string partnerStatus_;
    bool partnerStatusIsSet_;
    std::vector<TicsLeaguePartnerVo> partners_;
    bool partnersIsSet_;
    std::string updateId_;
    bool updateIdIsSet_;
    std::string updateName_;
    bool updateNameIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsApproveLogVo_H_


#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainsWithPort_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainsWithPort_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/SourceWithPort.h>
#include <huaweicloud/cdn/v1/model/DomainOriginHost.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名信息。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  DomainsWithPort
    : public ModelBase
{
public:
    DomainsWithPort();
    virtual ~DomainsWithPort();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DomainsWithPort members

    /// <summary>
    /// 加速域名ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 加速域名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名业务类型，若为web，则表示类型为网站加速；若为download，则表示业务类型为文件下载加速；若为video，则表示业务类型为点播加速；若为wholeSite，则表示类型为全站加速。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 域名所属用户的domain_id。
    /// </summary>

    std::string getUserDomainId() const;
    bool userDomainIdIsSet() const;
    void unsetuserDomainId();
    void setUserDomainId(const std::string& value);

    /// <summary>
    /// 加速域名状态。取值意义： - online表示“已开启” - offline表示“已停用” - configuring表示“配置中” - configure_failed表示“配置失败” - checking表示“审核中” - check_failed表示“审核未通过” - deleting表示“删除中”。
    /// </summary>

    std::string getDomainStatus() const;
    bool domainStatusIsSet() const;
    void unsetdomainStatus();
    void setDomainStatus(const std::string& value);

    /// <summary>
    /// 加速域名对应的CNAME。
    /// </summary>

    std::string getCname() const;
    bool cnameIsSet() const;
    void unsetcname();
    void setCname(const std::string& value);

    /// <summary>
    /// 源站配置。
    /// </summary>

    std::vector<SourceWithPort>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourceWithPort>& value);

    /// <summary>
    /// 
    /// </summary>

    DomainOriginHost getDomainOriginHost() const;
    bool domainOriginHostIsSet() const;
    void unsetdomainOriginHost();
    void setDomainOriginHost(const DomainOriginHost& value);

    /// <summary>
    /// 是否开启HTTPS加速。 0：代表未开启HTTPS加速； 1：代表开启HTTPS加速，且回源方式为协议跟随； 2：代表开启HTTPS加速，且回源方式为HTTP； 3：代表开启HTTPS加速，且回源方式为HTTPS。
    /// </summary>

    int32_t getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(int32_t value);

    /// <summary>
    /// 域名创建时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 域名修改时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);

    /// <summary>
    /// 封禁状态（0代表未禁用；1代表禁用）。
    /// </summary>

    int32_t getDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(int32_t value);

    /// <summary>
    /// 锁定状态（0代表未锁定；1代表锁定）。
    /// </summary>

    int32_t getLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(int32_t value);

    /// <summary>
    /// 自动刷新预热（0代表关闭；1代表打开）。
    /// </summary>

    int32_t getAutoRefreshPreheat() const;
    bool autoRefreshPreheatIsSet() const;
    void unsetautoRefreshPreheat();
    void setAutoRefreshPreheat(int32_t value);

    /// <summary>
    /// 华为云CDN提供的加速服务范围，包含：mainland_china中国大陆、outside_mainland_china中国大陆境外、global全球。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// Range回源状态（off代表关闭 on代表开启）。
    /// </summary>

    std::string getRangeStatus() const;
    bool rangeStatusIsSet() const;
    void unsetrangeStatus();
    void setRangeStatus(const std::string& value);

    /// <summary>
    /// 回源跟随状态（off代表关闭 on代表开启）。
    /// </summary>

    std::string getFollowStatus() const;
    bool followStatusIsSet() const;
    void unsetfollowStatus();
    void setFollowStatus(const std::string& value);

    /// <summary>
    /// 是否暂停源站回源（off代表关闭 on代表开启）。
    /// </summary>

    std::string getOriginStatus() const;
    bool originStatusIsSet() const;
    void unsetoriginStatus();
    void setOriginStatus(const std::string& value);

    /// <summary>
    /// 域名禁用原因。 1：该域名涉嫌违规内容（涉黄/涉赌/涉毒/涉政）已被禁用； 2：该域名因备案失效已被禁用； 3：该域名遭受攻击，已被禁用； 150：该域名涉嫌违规内容涉黄已被禁用； 151：该域名涉嫌违规内容涉政已被禁用； 152：该域名涉嫌违规内容涉暴已被禁用； 153：该域名涉嫌违规内容涉赌已被禁用。
    /// </summary>

    std::string getBannedReason() const;
    bool bannedReasonIsSet() const;
    void unsetbannedReason();
    void setBannedReason(const std::string& value);

    /// <summary>
    /// 域名锁定原因（Changing the config, please wait）。
    /// </summary>

    std::string getLockedReason() const;
    bool lockedReasonIsSet() const;
    void unsetlockedReason();
    void setLockedReason(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，不传表示查询默认项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string userDomainId_;
    bool userDomainIdIsSet_;
    std::string domainStatus_;
    bool domainStatusIsSet_;
    std::string cname_;
    bool cnameIsSet_;
    std::vector<SourceWithPort> sources_;
    bool sourcesIsSet_;
    DomainOriginHost domainOriginHost_;
    bool domainOriginHostIsSet_;
    int32_t httpsStatus_;
    bool httpsStatusIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;
    int32_t disabled_;
    bool disabledIsSet_;
    int32_t locked_;
    bool lockedIsSet_;
    int32_t autoRefreshPreheat_;
    bool autoRefreshPreheatIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string rangeStatus_;
    bool rangeStatusIsSet_;
    std::string followStatus_;
    bool followStatusIsSet_;
    std::string originStatus_;
    bool originStatusIsSet_;
    std::string bannedReason_;
    bool bannedReasonIsSet_;
    std::string lockedReason_;
    bool lockedReasonIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainsWithPort_H_

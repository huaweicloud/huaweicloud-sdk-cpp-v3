
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainsWithPort_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainsWithPort_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/SourcesDomainConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DomainsWithPort
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

    std::vector<SourcesDomainConfig>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesDomainConfig>& value);

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

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

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
    /// 华为云CDN提供的加速服务范围，包含：mainland_china中国大陆、outside_mainland_china中国大陆境外、global全球。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string domainStatus_;
    bool domainStatusIsSet_;
    std::string cname_;
    bool cnameIsSet_;
    std::vector<SourcesDomainConfig> sources_;
    bool sourcesIsSet_;
    int32_t httpsStatus_;
    bool httpsStatusIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int32_t disabled_;
    bool disabledIsSet_;
    int32_t locked_;
    bool lockedIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainsWithPort_H_

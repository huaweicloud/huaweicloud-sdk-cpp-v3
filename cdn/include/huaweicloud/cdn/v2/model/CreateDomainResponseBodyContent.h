
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponseBodyContent_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponseBodyContent_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/DomainOriginHost.h>
#include <string>
#include <huaweicloud/cdn/v2/model/Sources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建域名返回信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateDomainResponseBodyContent
    : public ModelBase
{
public:
    CreateDomainResponseBodyContent();
    virtual ~CreateDomainResponseBodyContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainResponseBodyContent members

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
    /// 域名业务类型： - web:网站加速； - download:文件下载加速； - video:点播加速； - wholeSite:全站加速。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 域名服务范围，若为mainland_china，则表示服务范围为中国大陆；若为outside_mainland_china，则表示服务范围为中国大陆境外；若为global，则表示服务范围为全球。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

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
    /// 源站信息。
    /// </summary>

    std::vector<Sources>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<Sources>& value);

    /// <summary>
    /// 
    /// </summary>

    DomainOriginHost getDomainOriginHost() const;
    bool domainOriginHostIsSet() const;
    void unsetdomainOriginHost();
    void setDomainOriginHost(const DomainOriginHost& value);

    /// <summary>
    /// 是否开启HTTPS加速。
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
    /// range状态，off：关闭，on：开启。
    /// </summary>

    std::string getRangeStatus() const;
    bool rangeStatusIsSet() const;
    void unsetrangeStatus();
    void setRangeStatus(const std::string& value);

    /// <summary>
    /// follow302状态，off：关闭，on：开启。
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
    /// 自动刷新预热（0代表关闭；1代表打开）。
    /// </summary>

    int32_t getAutoRefreshPreheat() const;
    bool autoRefreshPreheatIsSet() const;
    void unsetautoRefreshPreheat();
    void setAutoRefreshPreheat(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string userDomainId_;
    bool userDomainIdIsSet_;
    std::string domainStatus_;
    bool domainStatusIsSet_;
    std::string cname_;
    bool cnameIsSet_;
    std::vector<Sources> sources_;
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
    std::string rangeStatus_;
    bool rangeStatusIsSet_;
    std::string followStatus_;
    bool followStatusIsSet_;
    std::string originStatus_;
    bool originStatusIsSet_;
    int32_t autoRefreshPreheat_;
    bool autoRefreshPreheatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponseBodyContent_H_

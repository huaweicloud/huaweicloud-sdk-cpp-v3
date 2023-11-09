
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueNoticeVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueNoticeVo_H_


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
/// 联盟信息
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsLeagueNoticeVo
    : public ModelBase
{
public:
    TicsLeagueNoticeVo();
    virtual ~TicsLeagueNoticeVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsLeagueNoticeVo members

    /// <summary>
    /// BCS通道名称
    /// </summary>

    std::string getBcsChannelName() const;
    bool bcsChannelNameIsSet() const;
    void unsetbcsChannelName();
    void setBcsChannelName(const std::string& value);

    /// <summary>
    /// BCS浏览器ip
    /// </summary>

    std::string getBcsIp() const;
    bool bcsIpIsSet() const;
    void unsetbcsIp();
    void setBcsIp(const std::string& value);

    /// <summary>
    /// BCS组织名称
    /// </summary>

    std::string getBcsOrgName() const;
    bool bcsOrgNameIsSet() const;
    void unsetbcsOrgName();
    void setBcsOrgName(const std::string& value);

    /// <summary>
    /// BCS服务实例ID
    /// </summary>

    std::string getBlockChainId() const;
    bool blockChainIdIsSet() const;
    void unsetblockChainId();
    void setBlockChainId(const std::string& value);

    /// <summary>
    /// BCS服务实例名称
    /// </summary>

    std::string getBlockChainName() const;
    bool blockChainNameIsSet() const;
    void unsetblockChainName();
    void setBlockChainName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 联盟id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 联盟名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 联盟成员数
    /// </summary>

    int64_t getPartners() const;
    bool partnersIsSet() const;
    void unsetpartners();
    void setPartners(int64_t value);


protected:
    std::string bcsChannelName_;
    bool bcsChannelNameIsSet_;
    std::string bcsIp_;
    bool bcsIpIsSet_;
    std::string bcsOrgName_;
    bool bcsOrgNameIsSet_;
    std::string blockChainId_;
    bool blockChainIdIsSet_;
    std::string blockChainName_;
    bool blockChainNameIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t partners_;
    bool partnersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueNoticeVo_H_

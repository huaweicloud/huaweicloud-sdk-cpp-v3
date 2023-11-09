
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueListVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueListVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_TICS_V1_EXPORT  TicsLeagueListVo
    : public ModelBase
{
public:
    TicsLeagueListVo();
    virtual ~TicsLeagueListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsLeagueListVo members

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
    /// 创建日期
    /// </summary>

    utility::datetime getCreateDate() const;
    bool createDateIsSet() const;
    void unsetcreateDate();
    void setCreateDate(const utility::datetime& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 创建人id
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

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
    /// 联盟状态,CREATING.创建中,CREATE_FAILED.创建失败,NORMAL.正常,UPDATING.升级中,UPDATE_FAILED.升级失败,ROLLING.回滚中,ROLL_FAILED.回滚失败,DELETING.删除中,DELETE_FAILED.删除失败,DELETED.已删除
    /// </summary>

    std::string getLeagueStatus() const;
    bool leagueStatusIsSet() const;
    void unsetleagueStatus();
    void setLeagueStatus(const std::string& value);

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

    /// <summary>
    /// 参与类型,OWNER.所有者,PARTNER.参与者
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 联盟版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


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
    utility::datetime createDate_;
    bool createDateIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string leagueStatus_;
    bool leagueStatusIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t partners_;
    bool partnersIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueListVo_H_

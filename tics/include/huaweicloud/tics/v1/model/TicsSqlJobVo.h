
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsSqlJobVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsSqlJobVo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsSqlJobVo
    : public ModelBase
{
public:
    TicsSqlJobVo();
    virtual ~TicsSqlJobVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsSqlJobVo members

    /// <summary>
    /// 作业审批状态，APPROVED.审批通过，APPROVING.审批中，NEW.新建，REJECTED.驳回，REVOKED.撤销
    /// </summary>

    std::string getApprovalStatus() const;
    bool approvalStatusIsSet() const;
    void unsetapprovalStatus();
    void setApprovalStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

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
    /// 删除标记
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// 作业描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 作业发起方domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 作业id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 作业类型，SQL.联合SQL分析,HFL.横向联邦学习,VFL.纵向联邦学习,PREDICT.预测，DATA_EXCHANGE.数据交换
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 联盟id
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 作业名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 变更时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 变更人id
    /// </summary>

    std::string getUpdateUserId() const;
    bool updateUserIdIsSet() const;
    void unsetupdateUserId();
    void setUpdateUserId(const std::string& value);

    /// <summary>
    /// 变更人名称
    /// </summary>

    std::string getUpdateUserName() const;
    bool updateUserNameIsSet() const;
    void unsetupdateUserName();
    void setUpdateUserName(const std::string& value);


protected:
    std::string approvalStatus_;
    bool approvalStatusIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string updateUserId_;
    bool updateUserIdIsSet_;
    std::string updateUserName_;
    bool updateUserNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsSqlJobVo_H_

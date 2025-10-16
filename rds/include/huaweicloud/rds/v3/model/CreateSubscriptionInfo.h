
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/CreateSubscriptionInfo_initialize_info.h>
#include <huaweicloud/rds/v3/model/CreateSubscription4InstanceInfo.h>
#include <string>
#include <huaweicloud/rds/v3/model/CreateSubscription4PublicationInfo.h>
#include <huaweicloud/rds/v3/model/OperateUsedJobSchedule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订阅详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSubscriptionInfo
    : public ModelBase
{
public:
    CreateSubscriptionInfo();
    virtual ~CreateSubscriptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionInfo members

    /// <summary>
    /// 订阅数据库名。
    /// </summary>

    std::string getSubscriptionDatabase() const;
    bool subscriptionDatabaseIsSet() const;
    void unsetsubscriptionDatabase();
    void setSubscriptionDatabase(const std::string& value);

    /// <summary>
    /// 订阅方式，push:推送。
    /// </summary>

    std::string getSubscriptionType() const;
    bool subscriptionTypeIsSet() const;
    void unsetsubscriptionType();
    void setSubscriptionType(const std::string& value);

    /// <summary>
    /// 初始化类型：不初始化(do_not)、立即初始化(immediate)、首次同步初始化(at_first_sync)。
    /// </summary>

    std::string getInitializeAt() const;
    bool initializeAtIsSet() const;
    void unsetinitializeAt();
    void setInitializeAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscriptionInfo_initialize_info getInitializeInfo() const;
    bool initializeInfoIsSet() const;
    void unsetinitializeInfo();
    void setInitializeInfo(const CreateSubscriptionInfo_initialize_info& value);

    /// <summary>
    /// 独立的分发代理。  true：使用。 false：不使用。
    /// </summary>

    bool isIndependentAgent() const;
    bool independentAgentIsSet() const;
    void unsetindependentAgent();
    void setIndependentAgent(bool value);

    /// <summary>
    /// 
    /// </summary>

    OperateUsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const OperateUsedJobSchedule& value);

    /// <summary>
    /// 备份文件名称。若该值不为空，则订阅初始化方式为通过备份文件初始化。
    /// </summary>

    std::string getBakFileName() const;
    bool bakFileNameIsSet() const;
    void unsetbakFileName();
    void setBakFileName(const std::string& value);

    /// <summary>
    /// 备份文件所在的obs桶名。 若bak_file_name为空，该参数无效。 若该值为空，则备份文件来源为rds的备份文件。 若该值不为空，则备份文件来源为用户obs桶。
    /// </summary>

    std::string getBakBucketName() const;
    bool bakBucketNameIsSet() const;
    void unsetbakBucketName();
    void setBakBucketName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscription4PublicationInfo getPublicationSubscription() const;
    bool publicationSubscriptionIsSet() const;
    void unsetpublicationSubscription();
    void setPublicationSubscription(const CreateSubscription4PublicationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscription4InstanceInfo getLocalSubscription() const;
    bool localSubscriptionIsSet() const;
    void unsetlocalSubscription();
    void setLocalSubscription(const CreateSubscription4InstanceInfo& value);


protected:
    std::string subscriptionDatabase_;
    bool subscriptionDatabaseIsSet_;
    std::string subscriptionType_;
    bool subscriptionTypeIsSet_;
    std::string initializeAt_;
    bool initializeAtIsSet_;
    CreateSubscriptionInfo_initialize_info initializeInfo_;
    bool initializeInfoIsSet_;
    bool independentAgent_;
    bool independentAgentIsSet_;
    OperateUsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;
    std::string bakFileName_;
    bool bakFileNameIsSet_;
    std::string bakBucketName_;
    bool bakBucketNameIsSet_;
    CreateSubscription4PublicationInfo publicationSubscription_;
    bool publicationSubscriptionIsSet_;
    CreateSubscription4InstanceInfo localSubscription_;
    bool localSubscriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_H_

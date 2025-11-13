
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/UsedJobSchedule.h>
#include <string>
#include <huaweicloud/rds/v3/model/Subscription4InstanceInfo.h>
#include <huaweicloud/rds/v3/model/Subscription4PublicationInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订阅详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSubscriptionInfo
    : public ModelBase
{
public:
    ListSubscriptionInfo();
    virtual ~ListSubscriptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionInfo members

    /// <summary>
    /// 订阅id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 订阅状态。normal，abnormal，creating，createfail
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 发布id。
    /// </summary>

    std::string getPublicationId() const;
    bool publicationIdIsSet() const;
    void unsetpublicationId();
    void setPublicationId(const std::string& value);

    /// <summary>
    /// 发布名称。
    /// </summary>

    std::string getPublicationName() const;
    bool publicationNameIsSet() const;
    void unsetpublicationName();
    void setPublicationName(const std::string& value);

    /// <summary>
    /// 订阅服务器来源。true：订阅服务器为云上实例, false：订阅服务器非云上实例。
    /// </summary>

    bool isIsCloud() const;
    bool isCloudIsSet() const;
    void unsetisCloud();
    void setIsCloud(bool value);

    /// <summary>
    /// 目标数据库名。
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
    /// 
    /// </summary>

    Subscription4PublicationInfo getPublicationSubscription() const;
    bool publicationSubscriptionIsSet() const;
    void unsetpublicationSubscription();
    void setPublicationSubscription(const Subscription4PublicationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    Subscription4InstanceInfo getLocalSubscription() const;
    bool localSubscriptionIsSet() const;
    void unsetlocalSubscription();
    void setLocalSubscription(const Subscription4InstanceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    UsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const UsedJobSchedule& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string publicationId_;
    bool publicationIdIsSet_;
    std::string publicationName_;
    bool publicationNameIsSet_;
    bool isCloud_;
    bool isCloudIsSet_;
    std::string subscriptionDatabase_;
    bool subscriptionDatabaseIsSet_;
    std::string subscriptionType_;
    bool subscriptionTypeIsSet_;
    Subscription4PublicationInfo publicationSubscription_;
    bool publicationSubscriptionIsSet_;
    Subscription4InstanceInfo localSubscription_;
    bool localSubscriptionIsSet_;
    UsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionInfo_H_

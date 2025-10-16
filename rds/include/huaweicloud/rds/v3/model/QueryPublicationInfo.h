
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryPublicationInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryPublicationInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PublicationTableInfoResponse.h>
#include <huaweicloud/rds/v3/model/UsedJobSchedule.h>
#include <string>
#include <huaweicloud/rds/v3/model/SubscriptionOptionsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  QueryPublicationInfo
    : public ModelBase
{
public:
    QueryPublicationInfo();
    virtual ~QueryPublicationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryPublicationInfo members

    /// <summary>
    /// 发布id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 发布状态。normal，abnormal，creating，modifying，createfail
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 发布名。
    /// </summary>

    std::string getPublicationName() const;
    bool publicationNameIsSet() const;
    void unsetpublicationName();
    void setPublicationName(const std::string& value);

    /// <summary>
    /// 发布数据库名。
    /// </summary>

    std::string getPublicationDatabase() const;
    bool publicationDatabaseIsSet() const;
    void unsetpublicationDatabase();
    void setPublicationDatabase(const std::string& value);

    /// <summary>
    /// 订阅数。
    /// </summary>

    int32_t getSubscriptionCount() const;
    bool subscriptionCountIsSet() const;
    void unsetsubscriptionCount();
    void setSubscriptionCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionOptionsResult getSubscriptionOptions() const;
    bool subscriptionOptionsIsSet() const;
    void unsetsubscriptionOptions();
    void setSubscriptionOptions(const SubscriptionOptionsResult& value);

    /// <summary>
    /// 
    /// </summary>

    UsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const UsedJobSchedule& value);

    /// <summary>
    /// 是否选择所有数据表。
    /// </summary>

    bool isIsSelectAllTable() const;
    bool isSelectAllTableIsSet() const;
    void unsetisSelectAllTable();
    void setIsSelectAllTable(bool value);

    /// <summary>
    /// 全选所有表后需要去除的表。
    /// </summary>

    std::vector<std::string>& getExtendTables();
    bool extendTablesIsSet() const;
    void unsetextendTables();
    void setExtendTables(const std::vector<std::string>& value);

    /// <summary>
    /// 发布数据表。
    /// </summary>

    std::vector<PublicationTableInfoResponse>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<PublicationTableInfoResponse>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string publicationName_;
    bool publicationNameIsSet_;
    std::string publicationDatabase_;
    bool publicationDatabaseIsSet_;
    int32_t subscriptionCount_;
    bool subscriptionCountIsSet_;
    SubscriptionOptionsResult subscriptionOptions_;
    bool subscriptionOptionsIsSet_;
    UsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;
    bool isSelectAllTable_;
    bool isSelectAllTableIsSet_;
    std::vector<std::string> extendTables_;
    bool extendTablesIsSet_;
    std::vector<PublicationTableInfoResponse> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryPublicationInfo_H_

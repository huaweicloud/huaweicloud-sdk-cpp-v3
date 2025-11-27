
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreatePublicationsRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreatePublicationsRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PublicationTableInfoRequest.h>
#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/OperateUsedJobSchedule.h>
#include <huaweicloud/rds/v3/model/SubscriptionOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建发布详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreatePublicationsRequestBody
    : public ModelBase
{
public:
    CreatePublicationsRequestBody();
    virtual ~CreatePublicationsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePublicationsRequestBody members

    /// <summary>
    /// 发布名称。  发布名称长度可在5～64个字符之间，由字母、数字或下划线组成，不能包含其他特殊字符。
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
    /// 是否立即创建快照。
    /// </summary>

    std::string getIsCreateSnapshotImmediately() const;
    bool isCreateSnapshotImmediatelyIsSet() const;
    void unsetisCreateSnapshotImmediately();
    void setIsCreateSnapshotImmediately(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionOption getSubscriptionOptions() const;
    bool subscriptionOptionsIsSet() const;
    void unsetsubscriptionOptions();
    void setSubscriptionOptions(const SubscriptionOption& value);

    /// <summary>
    /// 
    /// </summary>

    OperateUsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const OperateUsedJobSchedule& value);

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

    std::vector<PublicationTableInfoRequest>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<PublicationTableInfoRequest>& value);


protected:
    std::string publicationName_;
    bool publicationNameIsSet_;
    std::string publicationDatabase_;
    bool publicationDatabaseIsSet_;
    std::string isCreateSnapshotImmediately_;
    bool isCreateSnapshotImmediatelyIsSet_;
    SubscriptionOption subscriptionOptions_;
    bool subscriptionOptionsIsSet_;
    OperateUsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;
    bool isSelectAllTable_;
    bool isSelectAllTableIsSet_;
    std::vector<std::string> extendTables_;
    bool extendTablesIsSet_;
    std::vector<PublicationTableInfoRequest> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreatePublicationsRequestBody_H_

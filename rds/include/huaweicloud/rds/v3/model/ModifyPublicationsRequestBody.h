
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyPublicationsRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyPublicationsRequestBody_H_


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
/// 修改发布详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyPublicationsRequestBody
    : public ModelBase
{
public:
    ModifyPublicationsRequestBody();
    virtual ~ModifyPublicationsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyPublicationsRequestBody members

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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyPublicationsRequestBody_H_

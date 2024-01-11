
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreTablesNewRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreTablesNewRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/RestoreDatabasesInfoNew.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreTablesNewRequestBody
    : public ModelBase
{
public:
    RestoreTablesNewRequestBody();
    virtual ~RestoreTablesNewRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreTablesNewRequestBody members

    /// <summary>
    /// 恢复时间戳
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<RestoreDatabasesInfoNew>& getRestoreTables();
    bool restoreTablesIsSet() const;
    void unsetrestoreTables();
    void setRestoreTables(const std::vector<RestoreDatabasesInfoNew>& value);

    /// <summary>
    /// 是否使用极速恢复，可先根据“获取实例是否能使用极速恢复”接口判断本次恢复是否能使用极速恢复。 如果实例使用了XA事务，采用极速恢复的方式会导致恢复失败！
    /// </summary>

    bool isIsFastRestore() const;
    bool isFastRestoreIsSet() const;
    void unsetisFastRestore();
    void setIsFastRestore(bool value);


protected:
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::vector<RestoreDatabasesInfoNew> restoreTables_;
    bool restoreTablesIsSet_;
    bool isFastRestore_;
    bool isFastRestoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreTablesNewRequestBody_H_

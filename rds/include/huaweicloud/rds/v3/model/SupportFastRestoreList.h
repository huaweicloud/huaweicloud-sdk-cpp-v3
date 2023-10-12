
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupportFastRestoreList_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupportFastRestoreList_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  SupportFastRestoreList
    : public ModelBase
{
public:
    SupportFastRestoreList();
    virtual ~SupportFastRestoreList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportFastRestoreList members

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 表级恢复是否支持极速恢复。
    /// </summary>

    bool isIsSupportFastTableRestore() const;
    bool isSupportFastTableRestoreIsSet() const;
    void unsetisSupportFastTableRestore();
    void setIsSupportFastTableRestore(bool value);

    /// <summary>
    /// 库级恢复是否支持极速恢复。
    /// </summary>

    bool isIsSupportFastDatabaseRestore() const;
    bool isSupportFastDatabaseRestoreIsSet() const;
    void unsetisSupportFastDatabaseRestore();
    void setIsSupportFastDatabaseRestore(bool value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    bool isSupportFastTableRestore_;
    bool isSupportFastTableRestoreIsSet_;
    bool isSupportFastDatabaseRestore_;
    bool isSupportFastDatabaseRestoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupportFastRestoreList_H_

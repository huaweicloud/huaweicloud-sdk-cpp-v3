
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DBUpgradePrecheck_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DBUpgradePrecheck_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DBCheckDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库检查结果
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DBUpgradePrecheck
    : public ModelBase
{
public:
    DBUpgradePrecheck();
    virtual ~DBUpgradePrecheck();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DBUpgradePrecheck members

    /// <summary>
    /// 检查是否通过，0代表通过，1代表未通过
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);

    /// <summary>
    /// 检查项
    /// </summary>

    std::vector<DBCheckDetail>& getChecksPerformed();
    bool checksPerformedIsSet() const;
    void unsetchecksPerformed();
    void setChecksPerformed(const std::vector<DBCheckDetail>& value);


protected:
    int32_t result_;
    bool resultIsSet_;
    std::vector<DBCheckDetail> checksPerformed_;
    bool checksPerformedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DBUpgradePrecheck_H_

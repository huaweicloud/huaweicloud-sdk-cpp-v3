
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlReadOnlySwitch_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlReadOnlySwitch_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置实例只读参数。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlReadOnlySwitch
    : public ModelBase
{
public:
    MysqlReadOnlySwitch();
    virtual ~MysqlReadOnlySwitch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlReadOnlySwitch members

    /// <summary>
    /// 是否设置为只读权限 - true，表示设置为只读权限 - false，表示解除已设置的只读权限
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlReadOnlySwitch_H_

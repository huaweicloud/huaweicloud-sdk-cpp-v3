
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AbnormalRootCause_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AbnormalRootCause_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/LockRootCause.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  AbnormalRootCause
    : public ModelBase
{
public:
    AbnormalRootCause();
    virtual ~AbnormalRootCause();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AbnormalRootCause members

    /// <summary>
    /// **参数解释**： 异常类型。 **取值范围**： LOCK_WAIT：锁等待。 
    /// </summary>

    std::string getAbnormalType() const;
    bool abnormalTypeIsSet() const;
    void unsetabnormalType();
    void setAbnormalType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LockRootCause getLockRootCause() const;
    bool lockRootCauseIsSet() const;
    void unsetlockRootCause();
    void setLockRootCause(const LockRootCause& value);


protected:
    std::string abnormalType_;
    bool abnormalTypeIsSet_;
    LockRootCause lockRootCause_;
    bool lockRootCauseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AbnormalRootCause_H_

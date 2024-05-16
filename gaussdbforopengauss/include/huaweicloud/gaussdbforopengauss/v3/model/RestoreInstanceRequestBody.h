
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreInstanceRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/RecoveryBackupSource.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RecoveryBackupTarget.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RestoreInstanceRequestBody
    : public ModelBase
{
public:
    RestoreInstanceRequestBody();
    virtual ~RestoreInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RecoveryBackupSource getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const RecoveryBackupSource& value);

    /// <summary>
    /// 
    /// </summary>

    RecoveryBackupTarget getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const RecoveryBackupTarget& value);


protected:
    RecoveryBackupSource source_;
    bool sourceIsSet_;
    RecoveryBackupTarget target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreInstanceRequestBody_H_

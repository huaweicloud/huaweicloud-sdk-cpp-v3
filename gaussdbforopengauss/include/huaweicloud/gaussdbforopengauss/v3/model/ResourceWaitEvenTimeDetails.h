
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEvenTimeDetails_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEvenTimeDetails_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/LwlockTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DataIoTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/LockTime.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源类等待事件耗时
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ResourceWaitEvenTimeDetails
    : public ModelBase
{
public:
    ResourceWaitEvenTimeDetails();
    virtual ~ResourceWaitEvenTimeDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceWaitEvenTimeDetails members

    /// <summary>
    /// 
    /// </summary>

    DataIoTime getDataIoTime() const;
    bool dataIoTimeIsSet() const;
    void unsetdataIoTime();
    void setDataIoTime(const DataIoTime& value);

    /// <summary>
    /// 
    /// </summary>

    LockTime getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const LockTime& value);

    /// <summary>
    /// 
    /// </summary>

    LwlockTime getLwlockTime() const;
    bool lwlockTimeIsSet() const;
    void unsetlwlockTime();
    void setLwlockTime(const LwlockTime& value);


protected:
    DataIoTime dataIoTime_;
    bool dataIoTimeIsSet_;
    LockTime lockTime_;
    bool lockTimeIsSet_;
    LwlockTime lwlockTime_;
    bool lwlockTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEvenTimeDetails_H_

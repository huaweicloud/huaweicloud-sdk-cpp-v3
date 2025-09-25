
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventTime_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventTime_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceWaitEventTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CodeWaitEventTime.h>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  WaitEventTime
    : public ModelBase
{
public:
    WaitEventTime();
    virtual ~WaitEventTime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WaitEventTime members

    /// <summary>
    /// 
    /// </summary>

    CodeWaitEventTime getCodeWaitEventTime() const;
    bool codeWaitEventTimeIsSet() const;
    void unsetcodeWaitEventTime();
    void setCodeWaitEventTime(const CodeWaitEventTime& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceWaitEventTime getResourceWaitEventTime() const;
    bool resourceWaitEventTimeIsSet() const;
    void unsetresourceWaitEventTime();
    void setResourceWaitEventTime(const ResourceWaitEventTime& value);


protected:
    CodeWaitEventTime codeWaitEventTime_;
    bool codeWaitEventTimeIsSet_;
    ResourceWaitEventTime resourceWaitEventTime_;
    bool resourceWaitEventTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventTime_H_

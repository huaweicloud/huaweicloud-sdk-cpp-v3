
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateVersionRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateVersionRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新凭据对象的元数据信息请求体
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateVersionRequestBody
    : public ModelBase
{
public:
    UpdateVersionRequestBody();
    virtual ~UpdateVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVersionRequestBody members

    /// <summary>
    /// 凭据版本过期时间，时间戳，即从1970年1月1日至该时间的总秒数。默认为空，凭据订阅“版本过期”事件类型时，有效期判断所依据的值。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);


protected:
    int64_t expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateVersionRequestBody_H_

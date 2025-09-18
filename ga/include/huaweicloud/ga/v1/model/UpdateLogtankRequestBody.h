
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateLogtankOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新云日志请求体。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateLogtankRequestBody
    : public ModelBase
{
public:
    UpdateLogtankRequestBody();
    virtual ~UpdateLogtankRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogtankRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateLogtankOption getLogtank() const;
    bool logtankIsSet() const;
    void unsetlogtank();
    void setLogtank(const UpdateLogtankOption& value);


protected:
    UpdateLogtankOption logtank_;
    bool logtankIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankRequestBody_H_

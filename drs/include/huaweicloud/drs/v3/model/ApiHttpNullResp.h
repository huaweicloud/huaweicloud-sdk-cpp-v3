
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ApiHttpNullResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ApiHttpNullResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 空响应体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ApiHttpNullResp
    : public ModelBase
{
public:
    ApiHttpNullResp();
    virtual ~ApiHttpNullResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApiHttpNullResp members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ApiHttpNullResp_H_

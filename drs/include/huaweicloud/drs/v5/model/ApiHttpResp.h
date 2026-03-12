
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ApiHttpResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ApiHttpResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 空响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ApiHttpResp
    : public ModelBase
{
public:
    ApiHttpResp();
    virtual ~ApiHttpResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApiHttpResp members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ApiHttpResp_H_

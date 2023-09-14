
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigQueryLogInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigQueryLogInfo_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入日志详情
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigQueryLogInfo
    : public ModelBase
{
public:
    AccessConfigQueryLogInfo();
    virtual ~AccessConfigQueryLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessConfigQueryLogInfo members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigQueryLogInfo_H_

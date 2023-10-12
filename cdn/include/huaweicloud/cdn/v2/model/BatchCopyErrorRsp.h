
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyErrorRsp_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyErrorRsp_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BatchCopyErrorRsp_error.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 原域名所有配置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyErrorRsp
    : public ModelBase
{
public:
    BatchCopyErrorRsp();
    virtual ~BatchCopyErrorRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCopyErrorRsp members

    /// <summary>
    /// 
    /// </summary>

    BatchCopyErrorRsp_error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const BatchCopyErrorRsp_error& value);


protected:
    BatchCopyErrorRsp_error error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyErrorRsp_H_


#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BatchCopyResultVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCopyDomainResponse();
    virtual ~BatchCopyDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCopyDomainResponse members

    /// <summary>
    /// 复制配置结果。
    /// </summary>

    std::vector<BatchCopyResultVo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<BatchCopyResultVo>& value);


protected:
    std::vector<BatchCopyResultVo> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainResponse_H_

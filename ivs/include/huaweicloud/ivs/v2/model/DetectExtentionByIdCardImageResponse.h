
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByIdCardImageResponse_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByIdCardImageResponse_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsExtentionByIdCardImageResponseBody_result.h>
#include <string>
#include <huaweicloud/ivs/v2/model/Meta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  DetectExtentionByIdCardImageResponse
    : public ModelBase, public HttpResponse
{
public:
    DetectExtentionByIdCardImageResponse();
    virtual ~DetectExtentionByIdCardImageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetectExtentionByIdCardImageResponse members

    /// <summary>
    /// 
    /// </summary>

    Meta getMeta() const;
    bool metaIsSet() const;
    void unsetmeta();
    void setMeta(const Meta& value);

    /// <summary>
    /// 
    /// </summary>

    IvsExtentionByIdCardImageResponseBody_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const IvsExtentionByIdCardImageResponseBody_result& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    Meta meta_;
    bool metaIsSet_;
    IvsExtentionByIdCardImageResponseBody_result result_;
    bool resultIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByIdCardImageResponse_H_


#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdResponse_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdResponse_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdResponseBody_result.h>
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
class HUAWEICLOUD_IVS_V2_EXPORT  DetectExtentionByNameAndIdResponse
    : public ModelBase, public HttpResponse
{
public:
    DetectExtentionByNameAndIdResponse();
    virtual ~DetectExtentionByNameAndIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectExtentionByNameAndIdResponse members

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

    IvsExtentionByNameAndIdResponseBody_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const IvsExtentionByNameAndIdResponseBody_result& value);


protected:
    Meta meta_;
    bool metaIsSet_;
    IvsExtentionByNameAndIdResponseBody_result result_;
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

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_DetectExtentionByNameAndIdResponse_H_


#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateReferResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateReferResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/RefererRsp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateReferResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateReferResponse();
    virtual ~UpdateReferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReferResponse members

    /// <summary>
    /// 
    /// </summary>

    RefererRsp getReferer() const;
    bool refererIsSet() const;
    void unsetreferer();
    void setReferer(const RefererRsp& value);


protected:
    RefererRsp referer_;
    bool refererIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateReferResponse_H_

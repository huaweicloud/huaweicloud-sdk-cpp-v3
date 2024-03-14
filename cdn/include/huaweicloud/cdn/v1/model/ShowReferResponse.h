
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowReferResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowReferResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowReferResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReferResponse();
    virtual ~ShowReferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReferResponse members

    /// <summary>
    /// 
    /// </summary>

    RefererRsp getReferer() const;
    bool refererIsSet() const;
    void unsetreferer();
    void setReferer(const RefererRsp& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    RefererRsp referer_;
    bool refererIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowReferResponse_H_

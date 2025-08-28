
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewDocumentSegmentResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewDocumentSegmentResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/DocumentSegmentInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PreviewDocumentSegmentResponse
    : public ModelBase, public HttpResponse
{
public:
    PreviewDocumentSegmentResponse();
    virtual ~PreviewDocumentSegmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreviewDocumentSegmentResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DocumentSegmentInfo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DocumentSegmentInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<DocumentSegmentInfo> body_;
    bool bodyIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewDocumentSegmentResponse_H_

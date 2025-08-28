
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartDocumentSegmentTaskReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartDocumentSegmentTaskReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开始分段任务请求信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StartDocumentSegmentTaskReq
    : public ModelBase
{
public:
    StartDocumentSegmentTaskReq();
    virtual ~StartDocumentSegmentTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartDocumentSegmentTaskReq members

    /// <summary>
    /// 文档ID。
    /// </summary>

    std::string getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetdocumentId();
    void setDocumentId(const std::string& value);


protected:
    std::string documentId_;
    bool documentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartDocumentSegmentTaskReq_H_

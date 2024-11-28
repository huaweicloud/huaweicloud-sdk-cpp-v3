
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_detail_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_detail_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  RecaptureDetectResponse_result_detail
    : public ModelBase
{
public:
    RecaptureDetectResponse_result_detail();
    virtual ~RecaptureDetectResponse_result_detail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecaptureDetectResponse_result_detail members

    /// <summary>
    /// 标签值。| original：原始图 recapture：翻拍图
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 置信度，取值范围（0~1）。
    /// </summary>

    std::string getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const std::string& value);


protected:
    std::string label_;
    bool labelIsSet_;
    std::string confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_detail_H_

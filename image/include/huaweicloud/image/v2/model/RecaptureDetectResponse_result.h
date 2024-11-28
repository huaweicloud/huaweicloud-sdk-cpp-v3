
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/RecaptureDetectResponse_result_detail.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调用成功时为图片标签内容。调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  RecaptureDetectResponse_result
    : public ModelBase
{
public:
    RecaptureDetectResponse_result();
    virtual ~RecaptureDetectResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecaptureDetectResponse_result members

    /// <summary>
    /// 总体的结论： true：真实 false：虚假 uncertainty：不确定 
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 标签（如果suggestion为真时，则该值为空字符串，否则不为空）。recapture：翻拍图
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 总体置信度，取值范围（0~1）。
    /// </summary>

    std::string getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(const std::string& value);

    /// <summary>
    /// 识别结果详情。
    /// </summary>

    std::vector<RecaptureDetectResponse_result_detail>& getDetail();
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::vector<RecaptureDetectResponse_result_detail>& value);


protected:
    std::string suggestion_;
    bool suggestionIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string score_;
    bool scoreIsSet_;
    std::vector<RecaptureDetectResponse_result_detail> detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectResponse_result_H_

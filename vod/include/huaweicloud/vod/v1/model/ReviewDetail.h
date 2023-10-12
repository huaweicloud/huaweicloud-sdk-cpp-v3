
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewDetail_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewDetail_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 审核结果
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ReviewDetail
    : public ModelBase
{
public:
    ReviewDetail();
    virtual ~ReviewDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewDetail members

    /// <summary>
    /// 置信度。  取值范围：[0,1]。
    /// </summary>

    std::string getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const std::string& value);

    /// <summary>
    /// 每个检测结果的标签化说明。 - politics场景：label为对应的政治人物信息。 - terrorism场景： label为对应的暴恐元素（枪支、刀具、火灾等） 信息。 - porn场景：label为对应的涉黄元素（涉黄、性感等）信息。
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);


protected:
    std::string confidence_;
    bool confidenceIsSet_;
    std::string label_;
    bool labelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewDetail_H_

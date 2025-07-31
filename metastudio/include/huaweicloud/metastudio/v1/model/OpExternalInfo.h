
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OpExternalInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OpExternalInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作日志附加信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OpExternalInfo
    : public ModelBase
{
public:
    OpExternalInfo();
    virtual ~OpExternalInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpExternalInfo members

    /// <summary>
    /// 审核详情id列表
    /// </summary>

    std::vector<std::string>& getReviewIdList();
    bool reviewIdListIsSet() const;
    void unsetreviewIdList();
    void setReviewIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 算法侧失败原因
    /// </summary>

    std::string getAlgorithmFailureReason() const;
    bool algorithmFailureReasonIsSet() const;
    void unsetalgorithmFailureReason();
    void setAlgorithmFailureReason(const std::string& value);


protected:
    std::vector<std::string> reviewIdList_;
    bool reviewIdListIsSet_;
    std::string algorithmFailureReason_;
    bool algorithmFailureReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OpExternalInfo_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobSuccessRatioResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobSuccessRatioResponse_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobSuccessRatioResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobSuccessRatioResponse();
    virtual ~ShowJobSuccessRatioResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowJobSuccessRatioResponse members

    /// <summary>
    /// 任务成功构建次数
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);

    /// <summary>
    /// 任务构建总次数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 任务成功率,精确到小数点后两位
    /// </summary>

    double getSuccessRatio() const;
    bool successRatioIsSet() const;
    void unsetsuccessRatio();
    void setSuccessRatio(double value);


protected:
    int32_t successCount_;
    bool successCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    double successRatio_;
    bool successRatioIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobSuccessRatioResponse_H_

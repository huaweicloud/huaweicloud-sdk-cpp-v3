
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StepImageVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StepImageVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  StepImageVo
    : public ModelBase
{
public:
    StepImageVo();
    virtual ~StepImageVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepImageVo members

    /// <summary>
    /// 测试步骤图片id
    /// </summary>

    std::string getImgId() const;
    bool imgIdIsSet() const;
    void unsetimgId();
    void setImgId(const std::string& value);

    /// <summary>
    /// 测试步骤图片路径
    /// </summary>

    std::string getImgUrl() const;
    bool imgUrlIsSet() const;
    void unsetimgUrl();
    void setImgUrl(const std::string& value);


protected:
    std::string imgId_;
    bool imgIdIsSet_;
    std::string imgUrl_;
    bool imgUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StepImageVo_H_

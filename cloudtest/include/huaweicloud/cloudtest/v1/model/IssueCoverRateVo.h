
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueCoverRateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueCoverRateVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CoverRateVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 看板项目的需求覆盖率
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssueCoverRateVo
    : public ModelBase
{
public:
    IssueCoverRateVo();
    virtual ~IssueCoverRateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCoverRateVo members

    /// <summary>
    /// 
    /// </summary>

    CoverRateVo getEpic() const;
    bool epicIsSet() const;
    void unsetepic();
    void setEpic(const CoverRateVo& value);

    /// <summary>
    /// 
    /// </summary>

    CoverRateVo getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const CoverRateVo& value);

    /// <summary>
    /// 
    /// </summary>

    CoverRateVo getStory() const;
    bool storyIsSet() const;
    void unsetstory();
    void setStory(const CoverRateVo& value);

    /// <summary>
    /// 
    /// </summary>

    CoverRateVo getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const CoverRateVo& value);


protected:
    CoverRateVo epic_;
    bool epicIsSet_;
    CoverRateVo feature_;
    bool featureIsSet_;
    CoverRateVo story_;
    bool storyIsSet_;
    CoverRateVo summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueCoverRateVo_H_

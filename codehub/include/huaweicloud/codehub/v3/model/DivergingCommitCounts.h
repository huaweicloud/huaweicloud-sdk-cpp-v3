
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DivergingCommitCounts_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DivergingCommitCounts_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  DivergingCommitCounts
    : public ModelBase
{
public:
    DivergingCommitCounts();
    virtual ~DivergingCommitCounts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DivergingCommitCounts members

    /// <summary>
    /// 领先提交数
    /// </summary>

    double getAhead() const;
    bool aheadIsSet() const;
    void unsetahead();
    void setAhead(double value);

    /// <summary>
    /// 滞后提交数
    /// </summary>

    double getBehind() const;
    bool behindIsSet() const;
    void unsetbehind();
    void setBehind(double value);


protected:
    double ahead_;
    bool aheadIsSet_;
    double behind_;
    bool behindIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DivergingCommitCounts_H_

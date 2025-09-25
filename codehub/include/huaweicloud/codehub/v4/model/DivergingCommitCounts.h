
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DivergingCommitCounts_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DivergingCommitCounts_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DivergingCommitCounts
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
    /// 落后默认分支提交数量
    /// </summary>

    int32_t getBehind() const;
    bool behindIsSet() const;
    void unsetbehind();
    void setBehind(int32_t value);

    /// <summary>
    /// 领先默认分支提交数量
    /// </summary>

    int32_t getAhead() const;
    bool aheadIsSet() const;
    void unsetahead();
    void setAhead(int32_t value);


protected:
    int32_t behind_;
    bool behindIsSet_;
    int32_t ahead_;
    bool aheadIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DivergingCommitCounts_H_

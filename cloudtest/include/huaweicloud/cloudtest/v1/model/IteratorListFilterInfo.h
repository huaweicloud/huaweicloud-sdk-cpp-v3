
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorListFilterInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorListFilterInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/cloudtest/v1/model/IssueListPiFilterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 过滤条件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IteratorListFilterInfo
    : public ModelBase
{
public:
    IteratorListFilterInfo();
    virtual ~IteratorListFilterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IteratorListFilterInfo members

    /// <summary>
    /// pi过滤条件
    /// </summary>

    std::vector<IssueListPiFilterInfo>& getPiSprints();
    bool piSprintsIsSet() const;
    void unsetpiSprints();
    void setPiSprints(const std::vector<IssueListPiFilterInfo>& value);

    /// <summary>
    /// 计划结束间过滤开始时间点
    /// </summary>

    utility::datetime getPlanEndDateStart() const;
    bool planEndDateStartIsSet() const;
    void unsetplanEndDateStart();
    void setPlanEndDateStart(const utility::datetime& value);

    /// <summary>
    /// 计划结束时间过滤结束时间点
    /// </summary>

    utility::datetime getPlanEndDateEnd() const;
    bool planEndDateEndIsSet() const;
    void unsetplanEndDateEnd();
    void setPlanEndDateEnd(const utility::datetime& value);


protected:
    std::vector<IssueListPiFilterInfo> piSprints_;
    bool piSprintsIsSet_;
    utility::datetime planEndDateStart_;
    bool planEndDateStartIsSet_;
    utility::datetime planEndDateEnd_;
    bool planEndDateEndIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorListFilterInfo_H_

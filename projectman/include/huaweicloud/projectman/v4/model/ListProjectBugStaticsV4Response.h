
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectBugStaticsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectBugStaticsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BugStatisticResponseV4.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectBugStaticsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListProjectBugStaticsV4Response();
    virtual ~ListProjectBugStaticsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectBugStaticsV4Response members

    /// <summary>
    /// bug统计
    /// </summary>

    std::vector<BugStatisticResponseV4>& getBugStatistics();
    bool bugStatisticsIsSet() const;
    void unsetbugStatistics();
    void setBugStatistics(const std::vector<BugStatisticResponseV4>& value);


protected:
    std::vector<BugStatisticResponseV4> bugStatistics_;
    bool bugStatisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectBugStaticsV4Response_H_

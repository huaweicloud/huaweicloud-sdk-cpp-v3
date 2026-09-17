
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/WorkItemInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对外需求相关API Body信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssuesInfo
    : public ModelBase
{
public:
    IssuesInfo();
    virtual ~IssuesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssuesInfo members

    /// <summary>
    /// 关联需求
    /// </summary>

    std::vector<WorkItemInfo>& getWorkitemList();
    bool workitemListIsSet() const;
    void unsetworkitemList();
    void setWorkitemList(const std::vector<WorkItemInfo>& value);


protected:
    std::vector<WorkItemInfo> workitemList_;
    bool workitemListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesInfo_H_

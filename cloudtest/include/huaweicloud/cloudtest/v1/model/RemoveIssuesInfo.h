
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesInfo_H_


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
/// 从迭代中移除需求API Body信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RemoveIssuesInfo
    : public ModelBase
{
public:
    RemoveIssuesInfo();
    virtual ~RemoveIssuesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveIssuesInfo members

    /// <summary>
    /// 关联需求
    /// </summary>

    std::vector<WorkItemInfo>& getWorkitemList();
    bool workitemListIsSet() const;
    void unsetworkitemList();
    void setWorkitemList(const std::vector<WorkItemInfo>& value);

    /// <summary>
    /// 是否删除需求关联的用例
    /// </summary>

    bool isIsDeleteCase() const;
    bool isDeleteCaseIsSet() const;
    void unsetisDeleteCase();
    void setIsDeleteCase(bool value);


protected:
    std::vector<WorkItemInfo> workitemList_;
    bool workitemListIsSet_;
    bool isDeleteCase_;
    bool isDeleteCaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesInfo_H_

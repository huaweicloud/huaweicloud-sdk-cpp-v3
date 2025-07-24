
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/WorkItemInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联需求
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  WorkItemInfo
    : public ModelBase
{
public:
    WorkItemInfo();
    virtual ~WorkItemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemInfo members

    /// <summary>
    /// 工作项编号
    /// </summary>

    std::string getWorkItemId() const;
    bool workItemIdIsSet() const;
    void unsetworkItemId();
    void setWorkItemId(const std::string& value);

    /// <summary>
    /// 是否有子需求
    /// </summary>

    bool isHasChild() const;
    bool hasChildIsSet() const;
    void unsethasChild();
    void setHasChild(bool value);

    /// <summary>
    /// 是否展开
    /// </summary>

    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetisOpen();
    void setIsOpen(bool value);

    /// <summary>
    /// 子需求
    /// </summary>

    std::vector<WorkItemInfo>& getChildList();
    bool childListIsSet() const;
    void unsetchildList();
    void setChildList(const std::vector<WorkItemInfo>& value);


protected:
    std::string workItemId_;
    bool workItemIdIsSet_;
    bool hasChild_;
    bool hasChildIsSet_;
    bool isOpen_;
    bool isOpenIsSet_;
    std::vector<WorkItemInfo>* childList_;
    bool childListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemInfo_H_

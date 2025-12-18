
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ChildDeptDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ChildDeptDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子部门详情。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ChildDeptDTO
    : public ModelBase
{
public:
    ChildDeptDTO();
    virtual ~ChildDeptDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChildDeptDTO members

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 是否为叶子节点（没有子部门的称为叶子节点）。
    /// </summary>

    bool isIsLeafNodes() const;
    bool isLeafNodesIsSet() const;
    void unsetisLeafNodes();
    void setIsLeafNodes(bool value);


protected:
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    bool isLeafNodes_;
    bool isLeafNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ChildDeptDTO_H_

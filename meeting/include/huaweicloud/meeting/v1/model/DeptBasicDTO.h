
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptBasicDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptBasicDTO_H_


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
/// 部门基本信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  DeptBasicDTO
    : public ModelBase
{
public:
    DeptBasicDTO();
    virtual ~DeptBasicDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeptBasicDTO members

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 企业id。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 部门名称路径。
    /// </summary>

    std::string getDeptNamePath() const;
    bool deptNamePathIsSet() const;
    void unsetdeptNamePath();
    void setDeptNamePath(const std::string& value);

    /// <summary>
    /// 父部门编码。
    /// </summary>

    std::string getParentDeptCode() const;
    bool parentDeptCodeIsSet() const;
    void unsetparentDeptCode();
    void setParentDeptCode(const std::string& value);


protected:
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string corpId_;
    bool corpIdIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string deptNamePath_;
    bool deptNamePathIsSet_;
    std::string parentDeptCode_;
    bool parentDeptCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptBasicDTO_H_

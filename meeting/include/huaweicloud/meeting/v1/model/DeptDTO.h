
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  DeptDTO
    : public ModelBase
{
public:
    DeptDTO();
    virtual ~DeptDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeptDTO members

    /// <summary>
    /// 部门编码，企业内唯一，若携带则以携带为准，不支持修改。 
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
    /// 父部门编码，默认为根部门。 默认值：1。 
    /// </summary>

    std::string getParentDeptCode() const;
    bool parentDeptCodeIsSet() const;
    void unsetparentDeptCode();
    void setParentDeptCode(const std::string& value);

    /// <summary>
    /// 备注。 
    /// </summary>

    std::string getNote() const;
    bool noteIsSet() const;
    void unsetnote();
    void setNote(const std::string& value);

    /// <summary>
    /// 其他用户对该部门下用户的访问权限。 * UNLIMITED：默认，不做限制 * OPEN：公开，其他部门都可访问（无论对方权限如何配置）
    /// </summary>

    std::string getInPermission() const;
    bool inPermissionIsSet() const;
    void unsetinPermission();
    void setInPermission(const std::string& value);

    /// <summary>
    /// 该部门下用户访问权限控制。 - UNLIMITED：不限制 - ONLY_SELF：仅能查询自己 - SELF_AND_CHILD_DEPARTMENT：该部门下用户能查询本部门及子部门通讯 - DESIGNATED_DEPARTMENT：该部门下用户能查询指定部门通讯录
    /// </summary>

    std::string getOutPermission() const;
    bool outPermissionIsSet() const;
    void unsetoutPermission();
    void setOutPermission(const std::string& value);

    /// <summary>
    /// 允许访问的部门列表,仅outPermission为DESIGNATED_DEPARTMENT时有效，最多支持配置150个部门。
    /// </summary>

    std::vector<std::string>& getDesignatedOutDeptCodes();
    bool designatedOutDeptCodesIsSet() const;
    void unsetdesignatedOutDeptCodes();
    void setDesignatedOutDeptCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 部门排序号，序号越小,部门排序越靠前。
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);


protected:
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string parentDeptCode_;
    bool parentDeptCodeIsSet_;
    std::string note_;
    bool noteIsSet_;
    std::string inPermission_;
    bool inPermissionIsSet_;
    std::string outPermission_;
    bool outPermissionIsSet_;
    std::vector<std::string> designatedOutDeptCodes_;
    bool designatedOutDeptCodesIsSet_;
    int32_t sortLevel_;
    bool sortLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeptDTO_H_
